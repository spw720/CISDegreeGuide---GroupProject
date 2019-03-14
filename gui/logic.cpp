#include <iostream>
#include <vector>
#include <algorithm>
#include "mainwindow.h"


QVector<QString> required(QString trackReq) {
    QSqlQuery qry;

    if(trackReq == "Computational Science") {
        qry.prepare("SELECT sname, lname FROM not_taken WHERE cs_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Computer Networks") {
        qry.prepare("SELECT sname FROM not_taken WHERE cn_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Computer Security") {
        qry.prepare("SELECT sname FROM not_taken WHERE csec_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Computer Networks") {
        qry.prepare("SELECT sname FROM not_taken WHERE cn_track_req = 1 OR core = 1");
    }
    else if(trackReq == "Database and Informatics") {
        qry.prepare("SELECT sname FROM not_taken WHERE cn_track_req = 1 OR core = 1");
    }
    else {
        qry.prepare("SELECT sname FROM not_taken WHERE sdev_track_req = 1 OR core = 1");
    }

    //qDebug() << trackReq;
    QVector<QString> req;

    if(qry.exec()) {
        //qDebug() << "executing query ...";
        while(qry.next()) {
            //qDebug() << qry.value(0);
            QString s = qry.value(0).toString() + " " + qry.value(1).toString();

            req.push_back(s);

        }
    }
    else {
      //ui->COURSE_OUTPUT->addItem("Invalid Read");
        req.push_back("Invalid Read");
    }
    return req;
}

QVector<QString> nextTerm(QString term) { //, vector<string> taken, string track
  QSqlQuery query;
  QVector<QString> couldTake;
  if (term == "fall") {
    query.prepare("SELECT subject, number FROM not_taken WHERE fall = 1");
  }
  else if (term == "winter") {
    query.prepare("SELECT subject, number FROM not_taken WHERE winter = 1");
  }
  else if (term == "spring") {
    query.prepare("SELECT subject, number FROM not_taken WHERE spring = 1");
  }
  if (query.exec()) {
    while (query.next()) {
      QString s = query.value(0).toString() + " " + query.value(1).toString();

      couldTake.push_back(s);
    }
  }
  else {
    //ui->COURSE_OUTPUT->addItem("Invalid Read");
      couldTake.push_back("Invalid Read");
  }
  return couldTake;
}

//QVector<QVector<QString>> path(QString term)
void path() {



    // keep this at the end of logic to delete the path_table from the database
    QSqlQuery del;
    del.prepare("drop table path_table");
    if (del.exec()) {
        qDebug() << "Path Table Dropped";
    }
    else {
        qDebug() << "Path Table Not Dropped";
    }
}
