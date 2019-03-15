#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include "database.cpp"
#include "logic.hpp"

#include <stdio.h>

typedef QVector<QString> inner; // Type Vector of QStrings
typedef QVector<inner> outer; // Type Vector of inner Vector Type
outer v2(43, inner(2)); // Create o Vector of Vectors of QStrings
int accum = 0; // index accumulator

double num_classes = 0.0;
double gpa_total = 0.00;

//Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db.connOpen();
    QSqlQuery newtab;
    newtab.prepare("create table not_taken as select * from courses");
    if (newtab.exec()) {
        qDebug() << "New Table made i think";
    }
    else {
        qDebug() << "New Table not made";
    }

}

//Destructor
MainWindow::~MainWindow()
{
    delete ui;
    QSqlQuery dtab;
    dtab.prepare("drop table not_taken");
    if (dtab.exec()) {
        qDebug() << "Table Dropped";
    }
    else {
        qDebug() << "Table not dropped";
    }

    db.connClosed();

}

//*********************************************************************************

void MainWindow::on_ENTER_CLASS_clicked()
{

//add class based on information in dropdowns
//42 is used as max input.

    bool cond = false;
    for (int i = 0; i < 43; i++)
    {
        if(v2[i][0] == ui->SUBJECT->currentText() and v2[i][1] == ui->COURSE_NUM->currentText())
        {
            cond = true;
        }
    }

    if (accum != 43)
    {
	 if (ui->SUBJECT->currentText() != "~CHOOSE SUBJECT~" and cond == false)
        {

		//********************

		QString cname;
    		QString sub = ui->SUBJECT->currentText();
    		QString num = ui->COURSE_NUM->currentText();
    		qDebug() << num;

    		QSqlQuery qry;

    		if (sub == "MATH" and (num == "251" or num == "261" or num == "246")) {
        		cname = "Calculus 1";
        		qry.prepare("delete from not_taken where lname = '"+cname+"'");
        		qDebug() << qry.lastError();
    		}
    		else if (sub == "MATH" and (num == "252" or num == "262" or num == "247")) {
        		cname = "Calculus 2";
        		qry.prepare("delete from not_taken where lname = '"+cname+"'");
        		qDebug() << qry.lastError();
    		}
    		else {
        		qry.prepare("delete from not_taken where subject = (:sub) and number = (:num)");
        		qry.bindValue(":sub",sub);
        		qry.bindValue(":num",num);
    		}

    		if(qry.exec()) {

        		qDebug() << "Added class removed from not_taken";
    		}
    		else {
        		qDebug() << "Class not removed from not_taken";
    		}

		//********************

            v2[accum][0] = ui->SUBJECT->currentText();
            v2[accum][1] = ui->COURSE_NUM->currentText();
            ui->CLASS_LIST->addItem(v2[accum][0] + " " + v2[accum][1] + "  (" + ui->GRADE->currentText() + ")");
            accum += 1;
            num_classes += 1;

            if(ui->GRADE->currentText() == "A+")
                gpa_total += 4.0;
            if(ui->GRADE->currentText() == "A")
                gpa_total += 4.0;
            if(ui->GRADE->currentText() == "A-")
                gpa_total += 3.7;
            if(ui->GRADE->currentText() == "B+")
                gpa_total += 3.3;
            if(ui->GRADE->currentText() == "B")
                gpa_total += 3.0;
            if(ui->GRADE->currentText() == "B-")
                gpa_total += 2.7;
            if(ui->GRADE->currentText() == "C+")
                gpa_total += 2.3;
            if(ui->GRADE->currentText() == "C")
                gpa_total += 2.0;
            if(ui->GRADE->currentText() == "C-")
                gpa_total += 1.7;

            QString result = QString::number(gpa_total/num_classes);
            ui->GPA_LINE->clear();
            ui->GPA_LINE->setText(result);

        }
    }
    else
    {
        ui->CLASS_LIST->addItem("MAX INPUT REACHED");
    }
}

//*********************************************************************************

void MainWindow::on_NEXT_TERM_clicked()
{

//Populate course output list on next term clicked

    ui->COURSE_OUTPUT->clear(); //reset output each use
    ui->COURSE_OUTPUT->addItem("Possible Courses For Next Term:"); //title

    QString term = ui->TERM->currentText(); //get term from users choice
    QVector<QString> classesNextTerm = nextTerm(term, "not_taken");
    int capacity = classesNextTerm.capacity();
    //cout << "Capacity: " << courseList->getAll().capacity() << endl;
	  for(auto it = classesNextTerm.begin(); it!=classesNextTerm.end(); it++) { //adds courses to display as output
		    ui->COURSE_OUTPUT->addItem(*it);
	}
}

//*********************************************************************************

void MainWindow::on_REMAINING_clicked()
{

//Populate course output list on remaining clicked

    ui->COURSE_OUTPUT->clear();
    ui->COURSE_OUTPUT->addItem("Remaining Required Courses:");

    QString trackReq = ui->TRACK->currentText();
    QVector<QString> req = required(trackReq);
    int capacity = req.capacity();  //Could remove
    //Iterate through vector and print to GUI
    for(auto it = req.begin(); it!=req.end(); it++) {
        ui->COURSE_OUTPUT->addItem(*it);
    }
}

//*********************************************************************************

void MainWindow::on_TRACK_PATH_clicked()
{

//Populate path fields on 'show possible paths' clicked.

    //Clear windows
    ui->F_1->clear();
    ui->F_2->clear();
    ui->F_3->clear();
    ui->W_1->clear();
    ui->W_2->clear();
    ui->W_3->clear();
    ui->S_1->clear();
    ui->S_2->clear();
    ui->S_3->clear();

    if(ui->TRACK->currentText() != "~CHOOSE TRACK~") {
        QSqlQuery ptab;
        ptab.prepare("create table path_table as select * from not_taken");
        if (ptab.exec()) {
            qDebug() << "Path Table made";
        }
        else {
            qDebug() << "Path Table not made";
        }

        //Get track and Term
        QString track = ui->TRACK->currentText();
        QString term = ui->TERM->currentText();

        QVector<QVector<QString>> p = path(track, term);
        int capacity = p.capacity();    //Could remove later

        //counter
        int inc=0;

        //for term in path
        for(auto it = p.begin(); it!=p.end(); it++) {

            //Print to GUI, term by term
            switch(inc) {
                case 0:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        //if the course isn't blank
                        if(*t != "") ui->F_1->addItem(*t);
                    }
                    break;
                case 1:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->W_1->addItem(*t);
    		        }
                    break;
               case 2:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->S_1->addItem(*t);
    		        }
                    break;
                case 3:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->F_2->addItem(*t);
    		        }
                    break;
                case 4:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->W_2->addItem(*t);
    		        }
                    break;
                case 5:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->S_2->addItem(*t);
    		        }
                    break;
               case 6:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->F_3->addItem(*t);
    		        }
                    break;
                case 7:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->W_3->addItem(*t);
    		        }
                    break;
                case 8:
                    for(auto t = (*it).begin(); t!=(*it).end(); t++) {
                        if(*t != "") ui->S_3->addItem(*t);
    		        }
                    break;
            }
            inc++;
        }

        //delete the path_table from the database
        QSqlQuery del;
        del.prepare("drop table path_table");
        if (del.exec()) {
            qDebug() << "Path Table Dropped";
        }
        else {
            qDebug() << "Path Table Not Dropped";
        }
    }//end of (if track != ~CHOOSE TRACK~)
    else{
	ui->F_1->clear();
        ui->F_1->addItem("CHOOSE A TRACK");
        ui->F_2->clear();
        ui->F_2->addItem("CHOOSE A TRACK");
        ui->F_3->clear();
        ui->F_3->addItem("CHOOSE A TRACK");

        ui->W_1->clear();
        ui->W_1->addItem("CHOOSE A TRACK");
        ui->W_2->clear();
        ui->W_2->addItem("CHOOSE A TRACK");
        ui->W_3->clear();
        ui->W_3->addItem("CHOOSE A TRACK");

        ui->S_1->clear();
        ui->S_1->addItem("CHOOSE A TRACK");
        ui->S_2->clear();
        ui->S_2->addItem("CHOOSE A TRACK");
        ui->S_3->clear();
        ui->S_3->addItem("CHOOSE A TRACK");
    }
}

//*********************************************************************************

void MainWindow::on_SUBJECT_currentIndexChanged(const QString &arg1)
{
	
//Populate course number dropdowns based on which subject is selected

    if (arg1 == "~CHOOSE SUBJECT~")
    {
        ui->COURSE_NUM->clear();
        ui->COURSE_NUM->addItem("~CHOOSE COURSE #~");
    }
    if (arg1 == "CIS")
    {
        ui->COURSE_NUM->clear();

	ui->COURSE_NUM->addItems({"210","211","212","313","314","315","322","330","413","415","420","422",
				"425","427","431","432","433","441","443","445","451","453","461","471","472"});

    }
    if (arg1 == "MATH")
    {
        ui->COURSE_NUM->clear();

	ui->COURSE_NUM->addItems({"231","232","246","247","251","252","253","261","262","263","341","343","347","351","391"});
    }
    if (arg1 == "WR")
    {
        ui->COURSE_NUM->clear();
        ui->COURSE_NUM->addItems({"320","321"});
    }
    if (arg1 == "SCI")
    {
        ui->COURSE_NUM->clear();
        ui->COURSE_NUM->addItems({"1","2","3"});
    }
}

//*********************************************************************************

void MainWindow::on_DELETE_COURSE_clicked()
{

//Reset course list button click
//resets all fields

    ui->F_1->clear();
    ui->F_2->clear();
    ui->F_3->clear();
    ui->W_1->clear();
    ui->W_2->clear();
    ui->W_3->clear();
    ui->S_1->clear();
    ui->S_2->clear();
    ui->S_3->clear();

    ui->COURSE_OUTPUT->clear();
    ui->SUBJECT->setCurrentIndex(0);
    num_classes = 0.0;
    gpa_total = 0.0;
    ui->GPA_LINE->clear();
    ui->CLASS_LIST->clear();

    QSqlQuery dtab;
    dtab.prepare("drop table not_taken");
    if (dtab.exec()) {
        qDebug() << "Table Dropped";
        QSqlQuery newtab;
        newtab.prepare("create table not_taken as select * from courses");
        if (newtab.exec()) {
            qDebug() << "New Table made i think";
        }
        else {
            qDebug() << "New Table not made";
        }
    }
    else {
        qDebug() << "Table not dropped";
    }

    for (int i = 0; i < 43; i++)
    {
        v2[i][0] = "";
        v2[i][1] = "";
    }

}
