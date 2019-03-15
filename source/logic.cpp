#include <iostream>
#include <vector>
#include <algorithm>
#include "mainwindow.h"
//#include "logic.hpp"


QVector<QString> required(QString trackReq) {
    QSqlQuery qry;

    //Courses that are required by cs core or track
    if(trackReq == "Computational Science") {
        qry.prepare("SELECT sname, lname FROM not_taken WHERE cs_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Computer Networks") {
        qry.prepare("SELECT sname, lname FROM not_taken WHERE cn_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Computer Security") {
        qry.prepare("SELECT sname, lname FROM not_taken WHERE csec_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Computer Networks") {
        qry.prepare("SELECT sname, lname FROM not_taken WHERE cn_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Database and Informatics") {
        qry.prepare("SELECT sname, lname FROM not_taken WHERE cn_track_req = 1 OR core = 1");
    }
    else {
        qry.prepare("SELECT sname, lname FROM not_taken WHERE sdev_track_req = 1 OR core = 1");
    }

    QVector<QString> req;

    if(qry.exec()) {
        //Fill Vector with short names of courses
        while(qry.next()) {
            QString s = qry.value(0).toString() + " " + qry.value(1).toString();
            req.push_back(s);
        }
    }
    else {
        //Should only happen if .db path is wrong
        req.push_back("Invalid Read");
    }
    return req;
}

QVector<QString> nextTerm(QString term,QString table) { //, vector<string> taken, string track
  QSqlQuery query;
  QVector<QString> couldTake;
  couldTake.clear();
  if (table == "not_taken") { //inital query with the term passed to the function
      if (term == "Fall") {
        query.prepare("SELECT sname,prereq1,prereq2 FROM not_taken WHERE fall = 1");
      }
      else if (term == "Winter") {
        query.prepare("SELECT sname,prereq1,prereq2 FROM not_taken WHERE winter = 1");
      }
      else if (term == "Spring") {
        query.prepare("SELECT sname,prereq1,prereq2 FROM not_taken WHERE spring = 1");
      }
      if (query.exec()) {
        while (query.next()) { // take results of initial query and check prerecs
          QSqlQuery check;
          QString p1 = query.value(1).toString();
          QString p2 = query.value(2).toString();
          check.prepare("select * from not_taken where not exists(select 1 from not_taken where sname = (:p1) or sname = (:p2))"); //p1,p2 are prerecs
          check.bindValue(":p1",p1);
          check.bindValue(":p2",p2);
          if(check.exec()) {
              QString prev = "";
              while(check.next()) {
                  if (query.value(0).toString() != prev)
                   {
                    QString s = query.value(0).toString();
                    couldTake.push_back(s);
                    prev = query.value(0).toString();
                  }
              }
            }
        }
      }
      else {
        //ui->COURSE_OUTPUT->addItem("Invalid Read");
          couldTake.push_back("Invalid Read");
      }
  }
  else {
      //Uses path_table, for paths()
      if (term == "Fall") {
        query.prepare("SELECT sname,prereq1,prereq2 FROM path_table WHERE fall = 1");
      }
      else if (term == "Winter") {
        query.prepare("SELECT sname,prereq1,prereq2 FROM path_table WHERE winter = 1");
      }
      else if (term == "Spring") {
        query.prepare("SELECT sname,prereq1,prereq2 FROM path_table WHERE spring = 1");
      }
      if (query.exec()) {
        while (query.next()) {
          QSqlQuery check;
          QString p1 = query.value(1).toString();
          QString p2 = query.value(2).toString();
          check.prepare("select * from path_table where not exists(select 1 from path_table where sname = (:p1) or sname = (:p2))");
          check.bindValue(":p1",p1);
          check.bindValue(":p2",p2);
          if(check.exec()) {
              QString prev = "";
              while(check.next()) {
                  if (query.value(0).toString() != prev)  {
                      //qDebug() << query.value(0);
                      QString s = query.value(0).toString();
                      if(couldTake.size() <= 4 && s !="WR 321") {
                          couldTake.push_back(s);
                          prev = query.value(0).toString();
                    }
                  }
              }
            }
        }
      }
      else {
        //ui->COURSE_OUTPUT->addItem("Invalid Read");
          couldTake.push_back("Invalid Read");
      }
  }
  return couldTake;
}


QVector<QVector<QString> > path(QString track, QString nTerm) {
    QVector<QString> courses;
    QVector<QVector<QString>> p(9);
    for(int term = 0; term < 9; term++) {  //9 terms, could change later
        p[term].resize(7);
    }

    for(auto term = p.begin(); term!=p.end(); term++) {
        courses.clear();

        //Use nextTerm() logic, updating terms as we go
        courses = nextTerm(nTerm,"path_table");

        for(auto it = courses.begin(); it!=courses.end(); it++) {
            //Push course onto term
            (*term).push_back(*it);

            //Delete courses that are used from table so queries lookup a shrinking table over time
            QSqlQuery rmv;
            rmv.prepare("DELETE FROM path_table WHERE sname = :sn");
            rmv.bindValue(":sn",*it);
            if (rmv.exec()) {
                qDebug() << "Course used in path";
            }
            else {
                qDebug() << "Query problem in path";
            }
  	    }

        //Increment which term is being populated
        if (nTerm == "Fall") {
            nTerm = "Winter";
        }
        else if (nTerm == "Winter") {
            nTerm = "Spring";
        }
        else{
            nTerm = "Fall";
        }
    }
    return p;
}
