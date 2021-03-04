#include "PublishHomework.h"

PublishHomework::PublishHomework(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->db = db;
	this->name = name;
	connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(on_exitbtn_clicked));
	ui.teachernamelabel->setText(this->name);
	//��ȡ��ǰ����ʱ�䣬Ϊ����ר�ñ༭����������ʱ�����ݣ���ת��Ϊ�ַ���
	QDateTime curDateTime = QDateTime::currentDateTime();
	ui.timeeditor->setDateTime(curDateTime);
	ui.timelabel->setText(curDateTime.toString("yyyy-MM-dd hh:mm"));
	QSqlQuery myQuery;
	QString lesson,id;
	if (myQuery.exec("select * from lesson where teachername='"+this->name+"'"))
	{
		while (myQuery.next())//�������ݱ��ÿһ�У��ӵ�0�е����һ��
		{
			lesson = myQuery.value(1).toString();
			ui.comboBox->addItem(lesson); //����ѡ����ӿγ�ѡ��
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

	//ѡ��Ҫд����ļ�
	QString f = QFileDialog::getOpenFileName();//�ļ�·����
	QFileInfo fi;
	fi = QFileInfo(f);
	QString file_name = fi.fileName();  //��ȡ�ļ���
	qDebug() << file_name << endl;

	ui.deliverfilebtn->setText(file_name);
	QFontMetrics fmwelcome(ui.deliverfilebtn->font());
	int wid = fmwelcome.boundingRect(ui.deliverfilebtn->text()).width();
	ui.deliverfilebtn->setFixedWidth(wid);
	QFontMetrics fmnotice(ui.deliverfilebtn->font());
	wid = fmnotice.boundingRect(ui.deliverfilebtn->text()).width();

	//ת��Ϊ�ֽ�����
	QByteArray mapData;
	QFile file(f);
	file.open(QIODevice::ReadOnly);
	mapData = file.readAll();
	file.close();

	//��������
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

