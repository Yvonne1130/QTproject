#include "mypushbutton.h"
#include<QDebug>
MypushButton::MypushButton(QWidget *parent) : QPushButton(parent)
{
    qDebug()<<"我的按钮类的构造调用";
}
MypushButton::~MypushButton()
{
    qDebug()<<"我的按钮类析构";
}
