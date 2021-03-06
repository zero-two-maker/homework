#include "MainManue.h"
#include "ui_MainManue.h"
#include<qdebug.h>
#include <QSqlQueryModel>

using namespace std;

bool flag1 = true; //教师登录与学生登陆切换标志，true为教师，false为学生
bool flag2;  //检验登录是否成功的标志

MainManue::MainManue(QWidget* parent)
    :QMainWindow(parent)
{
    ui.setupUi(this);
    ConnectDatabase();
    //设置密码的模式
    ui.key->setEchoMode(QLineEdit::Password);
    connect(ui.studentbtn, SIGNAL(clicked(bool)), this, SLOT(on_studentbtn_clicked));
    connect(ui.teacherbtn, SIGNAL(clicked(bool)), this, SLOT(on_teacherbtn_clicked));

}

void MainManue::ConnectDatabase()
{
    //初始化数据库
    qDebug() << QSqlDatabase::drivers();
    db = QSqlDatabase::addDatabase("QODBC");
    //db.setHostName("192.168.1.107");
    //db.setUserName("root");
    //db.setPassword("aa23fve6");
    db.setDatabaseName("homework");
    db.setPort(3306);   
    db.exec("SET NAMES 'GB2312'");
    if (! db.open()) //数据库连接成功
    {      
        QMessageBox::critical(0, QString::fromLocal8Bit("note"), QString::fromLocal8Bit("数据库连接失败"), QMessageBox::Ok, 0);
    }
    else
    {
        QMessageBox::information(0, QString::fromLocal8Bit("note"), QString::fromLocal8Bit("数据库连接成功"));
    }

}

//登录按钮功能
void MainManue::on_nextbtn_clicked()
{
    QSqlQuery myQuery(db);
    QString key, password,strname;
    password = ui.password->text();
    key = ui.key->text();
    flag2 = false;//初始设置登陆失败
    if (flag1)
    {
        if (myQuery.exec("select * from teacher"))
        {
            while (myQuery.next())//遍历数据表格每一行，从第0行到最后一行
            {
                //获取读者表中的姓名密码
                QString id = myQuery.value(0).toString();
                QString kkey = myQuery.value(1).toString();
                if (password == id && key == kkey) //与用户输入的姓名密码比对
                {
                    strname = myQuery.value(2).toString();//记录登录姓名
                    flag2 = true;
                    break;
                }
            }
        }
    }     
    else
    {
        if (myQuery.exec("select * from student"))
        {
            while (myQuery.next())//遍历数据表格每一行，从第0行到最后一行
            {
                //获取读者表中的姓名密码
                QString id = myQuery.value(0).toString();
                QString kkey = myQuery.value(1).toString();
                if (password == id && key == kkey) //与用户输入的姓名密码比对
                {
                    strname= myQuery.value(2).toString();//记录登录姓名
                    flag2 = true;
                    break;
                }
            }
        }
    }
    if (flag2)
    {
        
        QMessageBox::information(nullptr, QString::fromLocal8Bit("登录成功"), QString::fromLocal8Bit("登录成功！"));
        this->hide();//隐藏登录界面
        ui.password->clear(); //清空账号和密码
        ui.key->clear();  
        if (flag1)
        {
            Widget1 *teacherManue=new Widget1(db,strname);
            teacherManue->show();
            connect(teacherManue, SIGNAL(show_mainManue()), this, SLOT(my_show_slot())); //收到教师窗口关闭信号显示登录窗口
      
        }
        else
        {
            Widget2 *studentManue=new Widget2(db,strname);
            studentManue->show();
            connect(studentManue, SIGNAL(show_mainManue()), this, SLOT(my_show_slot())); //收到学生窗口关闭信号显示登录窗口
        }
    }
    else
    {
        QMessageBox::information(nullptr, QString::fromLocal8Bit("登录失败"), QString::fromLocal8Bit("用户名或密码错误，请重新输入"));
    }
        
}

void MainManue::my_show_slot()
{
    this->show();
}

void MainManue::on_studentbtn_clicked()
{
    ui.studentbtn->setChecked(true);
    ui.teacherbtn->setChecked(false);
    flag1 = false;

}

void MainManue::on_teacherbtn_clicked()
{
    ui.studentbtn->setChecked(false);
    ui.teacherbtn->setChecked(true);
    flag1 = true;
}


