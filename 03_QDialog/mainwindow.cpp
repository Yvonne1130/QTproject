#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QDebug>
#include<QMessageBox>
#include<QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionnew,&QAction::triggered,[=](){

//            QDialog dlg(this);
//            dlg.resize(100,100);
//            dlg.exec();
//            qDebug()<<"模态对话窗弹出了";

//        QDialog * dlg2=new QDialog(this);
//        dlg2->resize(200,100);
//        dlg2->show();
//        dlg2->setAttribute(Qt::WA_DeleteOnClose);
//        qDebug()<<"非模态对话框";
        //QMessageBox::critical(this,"critical","错误");
        //QMessageBox::information(this,"info","cuowu");
//       if(QMessageBox::Save==QMessageBox::question(this,"question","保存？",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel))
//           qDebug()<<"选择的是保存";
//       else
//           qDebug()<<"选择的是取消";
//        QColor color=QColorDialog::getColor(QColor(255,0,0));
//        qDebug()<<"r="<<color.red()<<"g="<<color.green()<<"b="<<color.blue();





    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

