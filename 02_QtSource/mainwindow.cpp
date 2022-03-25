#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionnew->setIcon(QIcon("E:/黑马C++/北京修正黑马C++32期就业课/06-QT实战编程/QTday02/QTday02/资料/Doc/Image/Luffy.png"));
    ui->actionnew->setIcon(QIcon(":/Image/Luffy.png"));
    ui->actionopen->setIcon(QIcon(":/Image/LuffyQ.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

