#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>

//Teacher类 老师类
//Student类 学生类
//下课后，老师会触发一个信号，饿了，学生响应信号，请客吃饭


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->zt=new Teacher(this);
    //创建一个学生对象
    this->st=new Student(this);
//    //老师饿了 学生请客的连接
//    connect(zt,&Teacher::hungry,st,&Student::treat);

    //调用下课函数
    classIsOver();

    //连接带参数的 信号和槽
    //指针->地址
    //函数指针->函数地址

    void(Teacher::*teacherSignal)(QString)=&Teacher::hungry;
    void(Student::*studentSlot)(QString)=&Student::treat;
    connect(zt,teacherSignal,st,studentSlot);
    //classIsOver();

    //点击一个下课的按钮，再触发下课
    QPushButton *btn=new QPushButton("下课",this);
    //重置窗口大小
    this->resize(600,400);
    //点击按钮触发下课
   // connect(btn,&QPushButton::clicked,this,&Widget::classIsOver);


    //无参信号和槽连接
    void(Teacher::*teacherSignal2)(void)=&Teacher::hungry;
    void(Student::*studentSlot2)(void)=&Student::treat;
    connect(zt,teacherSignal2,st,studentSlot2);

    //信号连接信号
    connect(btn,&QPushButton::clicked,zt,teacherSignal2);

    //断开信号
    //disconnect(zt,teacherSignal2,st,studentSlot2);

    //拓展
    //1.信号可以连接信号
    //2.一个信号可以连接多个槽函数
    //3.多个信号可以连接同一个槽函数
    //4.信号和槽函数的参数必须要一一对应
    //5.信号和槽的参数个数不需要相同，信号的参数个数可以多于槽函数的参数个数

    //Qt4版本以前的信号和槽连接方式
    //利用Qt4信号槽 连接无参版本
    //Qt4版本 底层SIGNAL("hungr")  SLOT("treat")
    connect(zt,SIGNAL(hungry()),st,SLOT(treat()));
    //Qt4版本优点，参数直观，缺点：类型不做检测

    //[=](){btn->setText("aaa");}();

    //利用lambda表达式，实现点击按钮关闭窗口
    QPushButton *btn2=new QPushButton;
    btn2->setText("关闭");
    btn2->move(100,0);
    btn2->setParent(this);
    connect(btn2,&QPushButton::clicked,[=](){
//        this->close();
//        emit zt->hungry("宫保鸡丁");

        btn2->setText("aaaa");
    });

}

void Widget::classIsOver(){
    //下课函数，调用后 出发老师饿了的信号  关键字：emit 触发
   // emit zt->hungry();

    emit zt->hungry("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}

