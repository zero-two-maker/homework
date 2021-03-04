#include "CorrectHomework.h"

CorrectHomework::CorrectHomework(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->db = db;
	this->name = name; //µÇÂ¼ÓÃ»§ÐÕÃû
	connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(on_exitbtn_clicked));
}

CorrectHomework::~CorrectHomework()
{
}
void CorrectHomework::on_exitbtn_clicked()
{
	this->close();
	emit show_homeworkManue();

}
