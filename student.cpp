#include "student.h"

Student::Student(QObject *parent)
    : QObject{parent}
{

}

void Student::treat()
{
    qDebug()<<"请老师吃饭";
}
