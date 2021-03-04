#include "homeworkManue.h"
#include <iostream>
using namespace std;
homeworkManue::homeworkManue(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->db = db;
	this->name = name; //��¼�û�����
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
	
	//ѡ��Ҫд����ļ�
	QString f = QFileDialog::getOpenFileName();//�ļ�·����

	QFileInfo fi;
	fi = QFileInfo(f);
	QString file_name = fi.fileName();  //��ȡ�ļ���
	qDebug() << file_name << endl;

	//ת��Ϊ�ֽ�����
	QByteArray mapData;
	QFile file(f);
	file.open(QIODevice::ReadOnly);
	mapData = file.readAll();
	file.close();

	//��������
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
	//QString curPath = QCoreApplication::applicationDirPath(); //��ȡӦ�ó����·��
	QSqlQuery readquery;
	QByteArray databa;
	if (readquery.exec("select * from test where id=9")) {
		QSqlRecord myrecord = readquery.record();

		if (readquery.next()) {		
			file_name = readquery.value(myrecord.indexOf("filename")).toString();
			databa = readquery.value(myrecord.indexOf("homework")).toByteArray(); //��ȡ�����ƶ���
		
		}
	}
	QFile mybfile(file_name);		//д�������ļ�
	mybfile.open(QIODevice::WriteOnly);
	mybfile.write(databa);
	mybfile.close();
	qDebug() << "write data successfully!";
	if (!file_name.isEmpty())//�ж��Ƿ�Ϊ��
	{
		if (!QDesktopServices::openUrl(QUrl::fromLocalFile(file_name)))//��Ŀ���ļ�,������ϵͳ֧�ֵ��κθ�ʽ��
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
	connect(publishHomework, SIGNAL(show_homeworkManue()), this, SLOT(my_show_slot())); //�ӷ�����ҵ����ص���ҵ�������
}
void homeworkManue::on_correctbtn_clicked()
{
	CorrectHomework* correctHomework = new CorrectHomework(db, name);
	correctHomework->show();
	connect(correctHomework, SIGNAL(show_homeworkManue()), this, SLOT(my_show_slot())); //�ӷ�����ҵ����ص���ҵ�������

}

void homeworkManue::my_show_slot()
{
	this->show();
}
