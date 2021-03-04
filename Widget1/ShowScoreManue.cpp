#include "ShowScoreManue.h"

ShowScoreManue::ShowScoreManue(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->db = db;
	this->name = name;
	connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(on_exitbtn_clicked));
}

ShowScoreManue::~ShowScoreManue()
{

}
void ShowScoreManue::on_exitbtn_clicked()
{
	this->close();
	emit show_teacherManue();
}
