#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "database.cpp"

#include <stdio.h>

//QString class_list[48][2] = {{"CIS"," 210"},{"MTH"," 251"}};
typedef QVector<QString> inner; // Type Vector of QStrings
typedef QVector<inner> outer; // Type Vector of inner Vector Type
outer v2(43, inner(2)); // Create o Vector of Vectors of QStrings
int accum = 0; // index accumulator

double num_classes = 0.0;
double gpa_total = 0.00;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db.connOpen();

}

MainWindow::~MainWindow()
{
    delete ui;

    db.connClosed();

}

void MainWindow::on_ENTER_CLASS_clicked()
{
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

void MainWindow::on_NEXT_TERM_clicked()
{
    ui->COURSE_OUTPUT->clear();
    ui->COURSE_OUTPUT->addItem("Possible Courses For Next Term:");
    ui->COURSE_OUTPUT->addItem("TEMP VALUE");
}

void MainWindow::on_REMAINING_clicked()
{
    QString trackReq = ui->TRACK->currentText();

    QVector<QString> req;


    QSqlQuery qry;
    //qry.prepare("SELECT FROM notTaken WHERE (:trackReq) = 1 OR core = 1");
    qry.prepare("SELECT core FROM courses WHERE core = 1");

    qry.bindValue(":trackReq", trackReq);
    if(qry.exec()) {
        while(qry.next()) {
            req.push_back(qry.value(1).toString());
            ui->COURSE_OUTPUT->addItem("WTF");
        }
    }
    else {
        ui->COURSE_OUTPUT->addItem("NAH");
    }

    /*
    for(auto it = req.begin(); it!=req.end(); it++) {
        //QString str = QString::fromStdString(*it);
        ui->COURSE_OUTPUT->addItem(*it);
        ui->COURSE_OUTPUT->addItem("WTF");
    }*/


    /*
    //ui->COURSE_OUTPUT->clear();
    ui->COURSE_OUTPUT->addItem("Remaining Required Courses:");
    ui->COURSE_OUTPUT->addItem("TEMP VALUE");
    */
}

void MainWindow::on_TRACK_PATH_clicked()
{
    if (ui->TRACK->currentText() == "~CHOOSE TRACK~")
    {
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
    if (ui->TRACK->currentText() == "Foundations")
    {
        ui->F_1->clear();
        ui->F_1->addItems({"CIS 210", "MTH 231", "SCI 1" });
        ui->F_2->clear();
        ui->F_2->addItems({"CIS 313", "CIS 314", "MTH 252"});
        ui->F_3->clear();
        ui->F_3->addItems({"CIS 425", "CIS+", "WR 320"});

        ui->W_1->clear();
        ui->W_1->addItems({"CIS 211", "MTH 232", "SCI 2"});
        ui->W_2->clear();
        ui->W_2->addItems({"CIS 330", "MTH 315", "MTH+"});
        ui->W_3->clear();
        ui->W_3->addItems({"CIS 422", "CIS+", "MTH+"});

        ui->S_1->clear();
        ui->S_1->addItems({"CIS 212", "MTH 251", "SCI 3"});
        ui->S_2->clear();
        ui->S_2->addItems({"CIS 415", "CIS+", "MTH+"});
        ui->S_3->clear();
        ui->S_3->addItems({"CIS+", "CIS+", "CIS+"});
    }
    if (ui->TRACK->currentText() == "Computational Science")
    {
        ui->F_1->clear();
        ui->F_1->addItems({"Computational Science", "CIS 210", "MTH 231", "SCI 1" });
        ui->F_2->clear();
        ui->F_2->addItems({"Computational Science", "CIS 313", "CIS 314", "MTH 252"});
        ui->F_3->clear();
        ui->F_3->addItems({"Computational Science", "CIS 425", "CIS+", "WR 320"});

        ui->W_1->clear();
        ui->W_1->addItems({"Computational Science", "CIS 211", "MTH 232", "SCI 2"});
        ui->W_2->clear();
        ui->W_2->addItems({"Computational Science", "CIS 330", "MTH 315", "MTH+"});
        ui->W_3->clear();
        ui->W_3->addItems({"Computational Science", "CIS 422", "CIS+", "MTH+"});

        ui->S_1->clear();
        ui->S_1->addItems({"Computational Science", "CIS 212", "MTH 251", "SCI 3"});
        ui->S_2->clear();
        ui->S_2->addItems({"Computational Science", "CIS 415", "CIS+", "MTH+"});
        ui->S_3->clear();
        ui->S_3->addItems({"Computational Science", "CIS+", "CIS+", "CIS+"});
    }
    if (ui->TRACK->currentText() == "Computer Networks")
    {
        ui->F_1->clear();
        ui->F_1->addItems({"Computer Networks"});
        ui->F_2->clear();
        ui->F_2->addItems({"Computer Networks"});
        ui->F_3->clear();
        ui->F_3->addItems({"Computer Networks"});

        ui->W_1->clear();
        ui->W_1->addItems({"Computer Networks"});
        ui->W_2->clear();
        ui->W_2->addItems({"Computer Networks"});
        ui->W_3->clear();
        ui->W_3->addItems({"Computer Networks"});

        ui->S_1->clear();
        ui->S_1->addItems({"Computer Networks"});
        ui->S_2->clear();
        ui->S_2->addItems({"Computer Networks"});
        ui->S_3->clear();
        ui->S_3->addItems({"Computer Networks"});
    }
    if (ui->TRACK->currentText() == "Computer Security")
    {
        ui->F_1->clear();
        ui->F_1->addItems({"Computer Security"});
        ui->F_2->clear();
        ui->F_2->addItems({"Computer Security"});
        ui->F_3->clear();
        ui->F_3->addItems({"Computer Security"});

        ui->W_1->clear();
        ui->W_1->addItems({"Computer Security"});
        ui->W_2->clear();
        ui->W_2->addItems({"Computer Security"});
        ui->W_3->clear();
        ui->W_3->addItems({"Computer Security"});

        ui->S_1->clear();
        ui->S_1->addItems({"Computer Security"});
        ui->S_2->clear();
        ui->S_2->addItems({"Computer Security"});
        ui->S_3->clear();
        ui->S_3->addItems({"Computer Security"});
    }
    if (ui->TRACK->currentText() == "Database and Informatics")
    {
        ui->F_1->clear();
        ui->F_1->addItems({"Database and Informatics"});
        ui->F_2->clear();
        ui->F_2->addItems({"Database and Informatics"});
        ui->F_3->clear();
        ui->F_3->addItems({"Database and Informatics"});

        ui->W_1->clear();
        ui->W_1->addItems({"Database and Informatics"});
        ui->W_2->clear();
        ui->W_2->addItems({"Database and Informatics"});
        ui->W_3->clear();
        ui->W_3->addItems({"Database and Informatics"});

        ui->S_1->clear();
        ui->S_1->addItems({"Database and Informatics"});
        ui->S_2->clear();
        ui->S_2->addItems({"Database and Informatics"});
        ui->S_3->clear();
        ui->S_3->addItems({"Database and Informatics"});
    }
    if (ui->TRACK->currentText() == "Software Development")
    {
        ui->F_1->clear();
        ui->F_1->addItems({"Software Development"});
        ui->F_2->clear();
        ui->F_2->addItems({"Software Development"});
        ui->F_3->clear();
        ui->F_3->addItems({"Software Development"});

        ui->W_1->clear();
        ui->W_1->addItems({"Software Development"});
        ui->W_2->clear();
        ui->W_2->addItems({"Software Development"});
        ui->W_3->clear();
        ui->W_3->addItems({"Software Development"});

        ui->S_1->clear();
        ui->S_1->addItems({"Software Development"});
        ui->S_2->clear();
        ui->S_2->addItems({"Software Development"});
        ui->S_3->clear();
        ui->S_3->addItems({"Software Development"});
    }
}

void MainWindow::on_SUBJECT_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "~CHOOSE SUBJECT~")
    {
        ui->COURSE_NUM->clear();
        ui->COURSE_NUM->addItem("~CHOOSE COURSE #~");
    }
    if (arg1 == "CIS")
    {
        ui->COURSE_NUM->clear();
        ui->COURSE_NUM->addItems({"210","211","212","313","314","315","322","330","399","407","410","413","415","420","422","425","427",
                                  "431","432","433","441","443","445","451","453","461","471","472"});

    }
    if (arg1 == "MATH")
    {
        ui->COURSE_NUM->clear();
        ui->COURSE_NUM->addItems({"112","231","232","246","247","251","252","253","261","262","263","341","343","347","351","391"});
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

void MainWindow::on_DELETE_COURSE_clicked()
{
    /*if (ui->CLASS_LIST->)
    //{
        QListWidgetItem *it = ui->CLASS_LIST->takeItem(ui->CLASS_LIST->currentRow());
        v2[ui->CLASS_LIST->currentRow()][0] = "";
        v2[ui->CLASS_LIST->currentRow()][1] = "";
        delete it;
    }*/
    ui->COURSE_OUTPUT->clear();
    ui->SUBJECT->setCurrentIndex(0);
    num_classes = 0.0;
    gpa_total = 0.0;
    ui->GPA_LINE->clear();
    ui->CLASS_LIST->clear();
    for (int i = 0; i < 43; i++)
    {
        v2[i][0] = "";
        v2[i][1] = "";
    }
}


