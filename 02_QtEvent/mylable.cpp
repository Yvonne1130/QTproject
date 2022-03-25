#include "mylable.h"
#include<QDebug>
#include<QMouseEvent>
myLable::myLable(QWidget *parent) : QLabel(parent)
{

}
void myLable::enterEvent(QEvent *event)
{
    qDebug()<<"鼠标进入了";
}
void myLable::leaveEvent(QEvent *event) {
    qDebug()<<"鼠标离开了";
}
void myLable::mouseMoveEvent(QMouseEvent *ev){
    QString str=QString("鼠标按下了x=%1 y=%2").arg(ev->x()).arg(ev->y());
    qDebug()<<str;

}

void myLable::mousePressEvent(QMouseEvent *ev){
    QString str=QString("鼠标按下了x=%1 y=%2 global= %3").arg(ev->x()).arg(ev->y()).arg(ev->globalX());
    qDebug()<<str;

}
void myLable::mouseReleaseEvent(QMouseEvent *ev){

}
