#include "mywidget.h"
#include<QPushButton>
#include"mypushbutton.h"
#include<QtDebug>
//命名规范
//类名 首字母大写，单词和单词之间首字母大写
//函数名 变量名称 首字母小写，单词和单词之间首字母大写

//快捷键
//注释 Ctrl + /
//运行 Ctrl + r
//编译 Ctrl + b
//字体缩放 Ctrl + 鼠标滚轮
//查找关键字 Ctrl + f
//整行移动 Ctrl + shift + ↑或者↓
//帮助文档 F1
//自动对齐 Ctrl + i
//同名之间的.h和.cpp切换 F4



myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮
    QPushButton*btn=new QPushButton;
    // btn->show();//show以顶层方式弹出窗口控件
    //让btn对象 依赖在 myWidget 窗口中
    btn->setParent(this);
    //显示文本
    btn->setText("第一个按钮");


    //创建第二个按钮
    QPushButton* btn2=new QPushButton("第二个按钮",this);

    //移动btn2按钮
    btn2->move(100,100);
    //按钮重新定制大小
    btn2->resize(50,50);

    //重置窗口大小
    resize(600,400);

    //设置窗口标题
    setWindowTitle("第一个窗口");

    //设置固定窗口大小
    setFixedSize(600,400);




    //创建一个自己的按钮对象
    MypushButton*myBtn=new MypushButton;
    myBtn->setText("我自己的按钮");

    myBtn->move(200,0);
    myBtn->setParent(this);//设置到对象数中

    //需求 点击我的按钮 关闭窗口
    //参数1 信号的发送者
    //参数2 发送的信号（函数的地址）
    //参数3 信号的接收者
    //参数4 处理的槽函数(函数的地址)slot
    //connect(myBtn,&MypushButton::clicked,this,&myWidget::close);
    connect(myBtn,&QPushButton::clicked,this,&QWidget::close);
}

myWidget::~myWidget()
{
    qDebug()<<"myWidget的析构调用";
}

