#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QDebug>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);
    //槽函数 旧版本Qt需要写在public slot中
    void treat();
signals:
};

#endif // STUDENT_H
