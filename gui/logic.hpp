#ifndef LOGIC_HPP
#define LOGIC_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include "mainwindow.h"

QVector<QString> required(QString trackReq);

QVector<QString> nextTerm(QString term);

QVector<QVector<QString> > path(QString track, QString nextTerm);

#endif // LOGIC_HPP
