#include <iostream>
#include <vector>
#include <algorithm>
#include "mainwindow.h"


QVector<QString> required(QString trackReq) {
  QSqlQuery qry;

  if(trackReq == "Computational Science") {
      qry.prepare("SELECT sname FROM not_taken WHERE cs_track_req = 1 OR core = 1");
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
          req.push_back(qry.value(0).toString);
      }
  }
  else {
      //ui->COURSE_OUTPUT->addItem("Invalid Read");
      req.push_back("Invalid Read");
  }
}
