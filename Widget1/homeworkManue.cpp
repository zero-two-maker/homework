#include "homeworkManue.h"
#include <iostream>
using namespace std;
homeworkManue::homeworkManue(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->db = db;
	this->name = name; //登录用户姓名
	connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(on_exitbtn_clicked));
	connect(ui.deliverfilebtn, SIGNAL(clicked(bool)), this, SLOT(on_deliverfilebtn_clicked));
	connect(ui.readfilebtn, SIGNAL(clicked(bool)), this, SLOT(on_readfilebtn_clicked));
	connect(ui.publishbtn, SIGNAL(clicked(bool)), this, SLOT(on_publishbtn_clicked));
	connect(ui.correctbtn, SIGNAL(clicked(bool)), this, SLOT(on_correctbtn_clicked));

}

homeworkManue::~homeworkManue()
{
}

void homeworkManue::on_exitbtn_clicked()
{
	this->close();
	emit show_teacherManue();
}

void homeworkManue::on_deliverfilebtn_clicked()
{
	
	//选择要写入的文件
	QString f = QFileDialog::getOpenFileName();//文件路径名

	QFileInfo fi;
	fi = QFileInfo(f);
	QString file_name = fi.fileName();  //获取文件名
	qDebug() << file_name << endl;

	//转换为字节数组
	QByteArray mapData;
	QFile file(f);
	file.open(QIODevice::ReadOnly);
	mapData = file.readAll();
	file.close();

	//插入数据
	QSqlQuery query;
	query.prepare("INSERT INTO test values(:id,:filename,:homework)");
	query.bindValue(":id", 9);
	query.bindValue(":filename", file_name);
	query.bindValue(":homework", mapData);
	if (!query.exec()) {
		qDebug() << query.lastError();
	}
	else {
		qDebug() << "inserted data successfully!";
	}
}
void homeworkManue::on_readfilebtn_clicked()
{
	QString file_name;
	//QString curPath = QCoreApplication::applicationDirPath(); //获取应用程序的路径
	QSqlQuery readquery;
	QByteArray databa;
	if (readquery.exec("select * from test where id=9")) {
		QSqlRecord myrecord = readquery.record();

		if (readquery.next()) {		
			file_name = readquery.value(myrecord.indexOf("filename")).toString();
			databa = readquery.value(myrecord.indexOf("homework")).toByteArray(); //读取二进制对象
		
		}
	}
	QFile mybfile(file_name);		//写到本地文件
	mybfile.open(QIODevice::WriteOnly);
	mybfile.write(databa);
	mybfile.close();
	qDebug() << "write data successfully!";
	if (!file_name.isEmpty())//判断是否为空
	{
		if (!QDesktopServices::openUrl(QUrl::fromLocalFile(file_name)))//打开目标文件,可以是系统支持的任何格式；
		{
			qDebug() << "open error";
		}
		else
		{
			qDebug() << "open success";
		}
	}
	else
		qDebug() << "open wrong";
}
void homeworkManue::on_publishbtn_clicked()
{
	this->hide();
	PublishHomework* publishHomework = new PublishHomework(db, name);
	publishHomework->show();
	connect(publishHomework, SIGNAL(show_homeworkManue()), this, SLOT(my_show_slot())); //从发布作业界面回到作业管理界面
}
void homeworkManue::on_correctbtn_clicked()
{
	CorrectHomework* correctHomework = new CorrectHomework(db, name);
	correctHomework->show();
	connect(correctHomework, SIGNAL(show_homeworkManue()), this, SLOT(my_show_slot())); //从发布作业界面回到作业管理界面

}

void homeworkManue::my_show_slot()
{
	this->show();
}
