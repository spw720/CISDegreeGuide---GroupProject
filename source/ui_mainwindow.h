/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QListWidget *F_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QListWidget *COURSE_OUTPUT;
    QListWidget *W_3;
    QListWidget *F_1;
    QComboBox *TERM;
    QPushButton *REMAINING;
    QLabel *label_2;
    QLabel *label_7;
    QPushButton *TRACK_PATH;
    QLabel *label;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QListWidget *W_2;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *SUBJECT;
    QPushButton *DELETE_COURSE;
    QSpacerItem *horizontalSpacer;
    QListWidget *W_1;
    QComboBox *TRACK;
    QLabel *label_5;
    QListWidget *CLASS_LIST;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *NEXT_TERM;
    QListWidget *F_3;
    QComboBox *COURSE_NUM;
    QPushButton *ENTER_CLASS;
    QLabel *label_12;
    QComboBox *GRADE;
    QLabel *label_13;
    QLineEdit *GPA_LINE;
    QListWidget *S_2;
    QListWidget *S_3;
    QListWidget *S_1;
    QLabel *label_6;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(629, 624);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        F_2 = new QListWidget(centralWidget);
        F_2->setObjectName(QStringLiteral("F_2"));

        gridLayout->addWidget(F_2, 18, 1, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 6, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 15, 1, 1, 4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 4);

        COURSE_OUTPUT = new QListWidget(centralWidget);
        COURSE_OUTPUT->setObjectName(QStringLiteral("COURSE_OUTPUT"));

        gridLayout->addWidget(COURSE_OUTPUT, 7, 2, 2, 3);

        W_3 = new QListWidget(centralWidget);
        W_3->setObjectName(QStringLiteral("W_3"));

        gridLayout->addWidget(W_3, 19, 2, 1, 1);

        F_1 = new QListWidget(centralWidget);
        F_1->setObjectName(QStringLiteral("F_1"));

        gridLayout->addWidget(F_1, 17, 1, 1, 1);

        TERM = new QComboBox(centralWidget);
        TERM->addItem(QString());
        TERM->addItem(QString());
        TERM->addItem(QString());
        TERM->setObjectName(QStringLiteral("TERM"));

        gridLayout->addWidget(TERM, 10, 2, 1, 1);

        REMAINING = new QPushButton(centralWidget);
        REMAINING->setObjectName(QStringLiteral("REMAINING"));

        gridLayout->addWidget(REMAINING, 14, 0, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label_2, 11, 1, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 1, 1, 1);

        TRACK_PATH = new QPushButton(centralWidget);
        TRACK_PATH->setObjectName(QStringLiteral("TRACK_PATH"));

        gridLayout->addWidget(TRACK_PATH, 13, 2, 2, 3);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 1, 1, 2);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 17, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 16, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setScaledContents(false);

        gridLayout->addWidget(label_3, 1, 1, 1, 4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 1, 1, 4);

        W_2 = new QListWidget(centralWidget);
        W_2->setObjectName(QStringLiteral("W_2"));

        gridLayout->addWidget(W_2, 18, 2, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 18, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 12, 1, 1, 4);

        SUBJECT = new QComboBox(centralWidget);
        SUBJECT->addItem(QString());
        SUBJECT->addItem(QString());
        SUBJECT->addItem(QString());
        SUBJECT->addItem(QString());
        SUBJECT->addItem(QString());
        SUBJECT->setObjectName(QStringLiteral("SUBJECT"));

        gridLayout->addWidget(SUBJECT, 4, 0, 1, 2);

        DELETE_COURSE = new QPushButton(centralWidget);
        DELETE_COURSE->setObjectName(QStringLiteral("DELETE_COURSE"));

        gridLayout->addWidget(DELETE_COURSE, 8, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 9, 1, 1, 4);

        W_1 = new QListWidget(centralWidget);
        W_1->setObjectName(QStringLiteral("W_1"));

        gridLayout->addWidget(W_1, 17, 2, 1, 1);

        TRACK = new QComboBox(centralWidget);
        TRACK->addItem(QString());
        TRACK->addItem(QString());
        TRACK->addItem(QString());
        TRACK->addItem(QString());
        TRACK->addItem(QString());
        TRACK->addItem(QString());
        TRACK->addItem(QString());
        TRACK->setObjectName(QStringLiteral("TRACK"));

        gridLayout->addWidget(TRACK, 11, 2, 1, 3);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 16, 2, 1, 1);

        CLASS_LIST = new QListWidget(centralWidget);
        CLASS_LIST->setObjectName(QStringLiteral("CLASS_LIST"));
        CLASS_LIST->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        gridLayout->addWidget(CLASS_LIST, 7, 0, 1, 2);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 10, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 1, 1, 4);

        NEXT_TERM = new QPushButton(centralWidget);
        NEXT_TERM->setObjectName(QStringLiteral("NEXT_TERM"));

        gridLayout->addWidget(NEXT_TERM, 13, 0, 1, 2);

        F_3 = new QListWidget(centralWidget);
        F_3->setObjectName(QStringLiteral("F_3"));

        gridLayout->addWidget(F_3, 19, 1, 1, 1);

        COURSE_NUM = new QComboBox(centralWidget);
        COURSE_NUM->addItem(QString());
        COURSE_NUM->setObjectName(QStringLiteral("COURSE_NUM"));

        gridLayout->addWidget(COURSE_NUM, 4, 2, 1, 1);

        ENTER_CLASS = new QPushButton(centralWidget);
        ENTER_CLASS->setObjectName(QStringLiteral("ENTER_CLASS"));

        gridLayout->addWidget(ENTER_CLASS, 4, 4, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 19, 0, 1, 1);

        GRADE = new QComboBox(centralWidget);
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->addItem(QString());
        GRADE->setObjectName(QStringLiteral("GRADE"));

        gridLayout->addWidget(GRADE, 4, 3, 1, 1);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 6, 3, 1, 1);

        GPA_LINE = new QLineEdit(centralWidget);
        GPA_LINE->setObjectName(QStringLiteral("GPA_LINE"));

        gridLayout->addWidget(GPA_LINE, 6, 4, 1, 1);

        S_2 = new QListWidget(centralWidget);
        S_2->setObjectName(QStringLiteral("S_2"));

        gridLayout->addWidget(S_2, 18, 3, 1, 2);

        S_3 = new QListWidget(centralWidget);
        S_3->setObjectName(QStringLiteral("S_3"));

        gridLayout->addWidget(S_3, 19, 3, 1, 2);

        S_1 = new QListWidget(centralWidget);
        S_1->setObjectName(QStringLiteral("S_1"));

        gridLayout->addWidget(S_1, 17, 3, 1, 2);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 16, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 629, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Course Output", nullptr));
        TERM->setItemText(0, QApplication::translate("MainWindow", "Fall", nullptr));
        TERM->setItemText(1, QApplication::translate("MainWindow", "Winter", nullptr));
        TERM->setItemText(2, QApplication::translate("MainWindow", "Spring", nullptr));

        REMAINING->setText(QApplication::translate("MainWindow", "See remaining required courses", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Choose a CIS track:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Course List", nullptr));
        TRACK_PATH->setText(QApplication::translate("MainWindow", "Show possible path to graduation with selected track", nullptr));
        label->setText(QApplication::translate("MainWindow", "Choose all completed class details, then press 'Enter Class'", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Fall", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Welcome to CS Life Guide: An interactive degree guide.", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "2", nullptr));
        SUBJECT->setItemText(0, QApplication::translate("MainWindow", "~CHOOSE SUBJECT~", nullptr));
        SUBJECT->setItemText(1, QApplication::translate("MainWindow", "CIS", nullptr));
        SUBJECT->setItemText(2, QApplication::translate("MainWindow", "MATH", nullptr));
        SUBJECT->setItemText(3, QApplication::translate("MainWindow", "WR", nullptr));
        SUBJECT->setItemText(4, QApplication::translate("MainWindow", "SCI", nullptr));

        DELETE_COURSE->setText(QApplication::translate("MainWindow", "Reset Course List", nullptr));
        TRACK->setItemText(0, QApplication::translate("MainWindow", "~CHOOSE TRACK~", nullptr));
        TRACK->setItemText(1, QApplication::translate("MainWindow", "Computational Science", nullptr));
        TRACK->setItemText(2, QApplication::translate("MainWindow", "Computer Networks", nullptr));
        TRACK->setItemText(3, QApplication::translate("MainWindow", "Computer Security", nullptr));
        TRACK->setItemText(4, QApplication::translate("MainWindow", "Database and Informatics", nullptr));
        TRACK->setItemText(5, QApplication::translate("MainWindow", "Software Development", nullptr));
        TRACK->setItemText(6, QApplication::translate("MainWindow", "Foundations", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "Winter", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Choose Current Term:", nullptr));
        NEXT_TERM->setText(QApplication::translate("MainWindow", "See courses to take next term", nullptr));
        COURSE_NUM->setItemText(0, QApplication::translate("MainWindow", "~CHOOSE COURSE #~", nullptr));

        ENTER_CLASS->setText(QApplication::translate("MainWindow", "Enter Class", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "3", nullptr));
        GRADE->setItemText(0, QApplication::translate("MainWindow", "A+", nullptr));
        GRADE->setItemText(1, QApplication::translate("MainWindow", "A", nullptr));
        GRADE->setItemText(2, QApplication::translate("MainWindow", "A-", nullptr));
        GRADE->setItemText(3, QApplication::translate("MainWindow", "B+", nullptr));
        GRADE->setItemText(4, QApplication::translate("MainWindow", "B", nullptr));
        GRADE->setItemText(5, QApplication::translate("MainWindow", "B-", nullptr));
        GRADE->setItemText(6, QApplication::translate("MainWindow", "C+", nullptr));
        GRADE->setItemText(7, QApplication::translate("MainWindow", "C", nullptr));
        GRADE->setItemText(8, QApplication::translate("MainWindow", "C-", nullptr));

        label_13->setText(QApplication::translate("MainWindow", "Major GPA:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Spring", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
