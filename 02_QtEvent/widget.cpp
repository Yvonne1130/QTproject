#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    startTimer(1000);
}
void Widget::timerEvent(QTimerEvent *e){
    static int num=1;
    ui->label_2->setText(QString::number(num++));
}

Widget::~Widget()
{
    delete ui;
}


