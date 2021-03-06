#include "Widget2.h"
Widget2::Widget2(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
	this->db = db;
	this->name = name;
	ui.namelabel->setText(name);
	connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(void on_exitbtn_clicked()));
}

Widget2::~Widget2()
{
}

void Widget2::my_show_slot()
{
	this->show();
}

void Widget2::on_exitbtn_clicked()
{
	this->close();
	emit show_mainManue();
}
