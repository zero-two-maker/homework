#include "MainManue.h"
#include "ui_MainManue.h"
#include<qdebug.h>
#include <QSqlQueryModel>

using namespace std;

bool flag1 = true; //��ʦ��¼��ѧ����½�л���־��trueΪ��ʦ��falseΪѧ��
bool flag2;  //�����¼�Ƿ�ɹ��ı�־

MainManue::MainManue(QWidget* parent)
    :QMainWindow(parent)
{
    ui.setupUi(this);
    ConnectDatabase();
    //���������ģʽ
    ui.key->setEchoMode(QLineEdit::Password);
    connect(ui.studentbtn, SIGNAL(clicked(bool)), this, SLOT(on_studentbtn_clicked));
    connect(ui.teacherbtn, SIGNAL(clicked(bool)), this, SLOT(on_teacherbtn_clicked));

}

void MainManue::ConnectDatabase()
{
    //��ʼ�����ݿ�
    qDebug() << QSqlDatabase::drivers();
    db = QSqlDatabase::addDatabase("QODBC");
    //db.setHostName("192.168.1.107");
    //db.setUserName("root");
    //db.setPassword("aa23fve6");
    db.setDatabaseName("homework");
    db.setPort(3306);   
    db.exec("SET NAMES 'GB2312'");
    if (! db.open()) //���ݿ����ӳɹ�
    {      
        QMessageBox::critical(0, QString::fromLocal8Bit("note"), QString::fromLocal8Bit("���ݿ�����ʧ��"), QMessageBox::Ok, 0);
    }
    else
    {
        QMessageBox::information(0, QString::fromLocal8Bit("note"), QString::fromLocal8Bit("���ݿ����ӳɹ�"));
    }

}

//��¼��ť����
void MainManue::on_nextbtn_clicked()
{
    QSqlQuery myQuery(db);
    QString key, password,strname;
    password = ui.password->text();
    key = ui.key->text();
    flag2 = false;//��ʼ���õ�½ʧ��
    if (flag1)
    {
        if (myQuery.exec("select * from teacher"))
        {
            while (myQuery.next())//�������ݱ��ÿһ�У��ӵ�0�е����һ��
            {
                //��ȡ���߱��е���������
                QString id = myQuery.value(0).toString();
                QString kkey = myQuery.value(1).toString();
                if (password == id && key == kkey) //���û��������������ȶ�
                {
                    strname = myQuery.value(2).toString();//��¼��¼����
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
            while (myQuery.next())//�������ݱ��ÿһ�У��ӵ�0�е����һ��
            {
                //��ȡ���߱��е���������
                QString id = myQuery.value(0).toString();
                QString kkey = myQuery.value(1).toString();
                if (password == id && key == kkey) //���û��������������ȶ�
                {
                    strname= myQuery.value(2).toString();//��¼��¼����
                    flag2 = true;
                    break;
                }
            }
        }
    }
    if (flag2)
    {
        
        QMessageBox::information(nullptr, QString::fromLocal8Bit("��¼�ɹ�"), QString::fromLocal8Bit("��¼�ɹ���"));
        this->hide();//���ص�¼����
        ui.password->clear(); //����˺ź�����
        ui.key->clear();  
        if (flag1)
        {
            Widget1 *teacherManue=new Widget1(db,strname);
            teacherManue->show();
            connect(teacherManue, SIGNAL(show_mainManue()), this, SLOT(my_show_slot())); //�յ���ʦ���ڹر��ź���ʾ��¼����
      
        }
        else
        {
            Widget2 *studentManue=new Widget2(db,strname);
            studentManue->show();
            connect(studentManue, SIGNAL(show_mainManue()), this, SLOT(my_show_slot())); //�յ�ѧ�����ڹر��ź���ʾ��¼����
        }
    }
    else
    {
        QMessageBox::information(nullptr, QString::fromLocal8Bit("��¼ʧ��"), QString::fromLocal8Bit("�û����������������������"));
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


