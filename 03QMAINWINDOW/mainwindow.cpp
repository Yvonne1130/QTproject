#include "mainwindow.h"
#include<QMenuBar>
#include<QAction>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600,400);
    QMenuBar * bar=menuBar();

    QMenu *filemenu=bar->addMenu("文件");

    QAction * newAction=filemenu->addAction("新建");
    filemenu->addSeparator();
    QAction*openAction=filemenu->addAction("打开");
    QMenu *editmenu=bar->addMenu("编辑");
    QToolBar* toolbar=new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolbar);

    toolbar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    toolbar->setFloatable(false);
    toolbar->addAction(newAction);
    QPushButton * open=new QPushButton("新建",this);
    toolbar->addWidget(open);
    QStatusBar *stBar=statusBar();
    setStatusBar(stBar);
    QLabel *label1=new QLabel("提示信息",this);

    stBar->addWidget(label1);
    QLabel *label2=new QLabel("右侧",this);
    stBar->addPermanentWidget(label2);
    QDockWidget * dockwidget=new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockwidget);
    QTextEdit *edit=new QTextEdit(this);
    setCentralWidget(edit);

}

MainWindow::~MainWindow()
{
}

