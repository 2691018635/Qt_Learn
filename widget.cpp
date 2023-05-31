#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->t = new Teacher(this);
    //创建一个学生对象
    this->s = new Student(this);
    //连接
    connect(t,&Teacher::hungry,s,&Student::treat);
    //调用函数来发送信号
    classIsOver();
}

Widget::~Widget()
{
    delete ui;
}

//调用时使用emit发送信号
void Widget::classIsOver()
{
    emit t->hungry();
}
