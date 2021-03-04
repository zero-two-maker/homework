#include "PublishHomework.h"

PublishHomework::PublishHomework(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->db = db;
	this->name = name;
	connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(on_exitbtn_clicked));
	ui.teachernamelabel->setText(this->name);
	//获取当前日期时间，为三个专用编辑器设置日期时间数据，并转换为字符串
	QDateTime curDateTime = QDateTime::currentDateTime();
	ui.timeeditor->setDateTime(curDateTime);
	ui.timelabel->setText(curDateTime.toString("yyyy-MM-dd hh:mm"));
	QSqlQuery myQuery;
	QString lesson,id;
	if (myQuery.exec("select * from lesson where teachername='"+this->name+"'"))
	{
		while (myQuery.next())//遍历数据表格每一行，从第0行到最后一行
		{
			lesson = myQuery.value(1).toString();
			ui.comboBox->addItem(lesson); //给复选框添加课程选项
		}
	}
}

PublishHomework::~PublishHomework()
{
}
void PublishHomework::on_exitbtn_clicked()
{
	this->close();
	emit show_homeworkManue();
}
void PublishHomework::on_deliverfilebtn_clicked()
{

	//选择要写入的文件
	QString f = QFileDialog::getOpenFileName();//文件路径名
	QFileInfo fi;
	fi = QFileInfo(f);
	QString file_name = fi.fileName();  //获取文件名
	qDebug() << file_name << endl;

	ui.deliverfilebtn->setText(file_name);
	QFontMetrics fmwelcome(ui.deliverfilebtn->font());
	int wid = fmwelcome.boundingRect(ui.deliverfilebtn->text()).width();
	ui.deliverfilebtn->setFixedWidth(wid);
	QFontMetrics fmnotice(ui.deliverfilebtn->font());
	wid = fmnotice.boundingRect(ui.deliverfilebtn->text()).width();

	//转换为字节数组
	QByteArray mapData;
	QFile file(f);
	file.open(QIODevice::ReadOnly);
	mapData = file.readAll();
	file.close();

	//插入数据
	QSqlQuery query;
	query.prepare("INSERT INTO test values(:id,:filename,:homework)");
	query.bindValue(":id", 10);
	query.bindValue(":filename", file_name);
	query.bindValue(":homework", mapData);
	if (!query.exec()) {
		qDebug() << query.lastError();
	}
	else {
		qDebug() << "inserted data successfully!";
	}
}

void PublishHomework::on_publishbtn_clicked()
{

}

