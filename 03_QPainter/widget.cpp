#include "widget.h"
#include "ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}
void Widget::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    painter.drawLine(QPoint(0,0),QPoint(100,100));
    painter.drawEllipse(QPoint(100,100),50,50);
}




Widget::~Widget()
{
    delete ui;
}

