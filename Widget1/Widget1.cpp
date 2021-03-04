#include "Widget1.h"
#include <mysql.h>
Widget1::Widget1(QSqlDatabase db, QString name, QWidget *parent)
	:QWidget(parent)
{
	
	ui.setupUi(this);
	this->db = db;
	this->name = name;
	ui.namelabel->setText(name);
	connect(ui.lessonbtn, SIGNAL(clicked(bool)), this, SLOT(void on_lessonbtn_clicked()));
	connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(void on_exitbtn_clicked()));
	connect(ui.showscorebtn, SIGNAL(clicked(bool)), this, SLOT(on_showscorebtn_clicked));
}

Widget1::~Widget1()
{
}

void Widget1::on_lessonbtn_clicked()
{
	this->hide();
	LessonManue *lessonManue=new LessonManue(db,name);
	lessonManue->show();
	connect(lessonManue, SIGNAL(show_teacherManue()), this, SLOT(my_show_slot())); //从课程管理界面回到教师界面
}

void Widget1::my_show_slot()
{
	this->show();
}

void Widget1::on_homeworkbtn_clicked()
{
	this->hide();
	homeworkManue* homeworksManue = new homeworkManue(db, name);
	homeworksManue->show();
	connect(homeworksManue, SIGNAL(show_teacherManue()), this, SLOT(my_show_slot())); //从作业管理界面回到教师
}

void Widget1::on_showscorebtn_clicked()
{
	ShowScoreManue* showScoreManue = new ShowScoreManue(db, name);
	showScoreManue->show();
	connect(showScoreManue, SIGNAL(show_teacherManue()), this, SLOT(my_show_slot())); //从成绩统计界面回到作业管理界面
}

void Widget1::on_exitbtn_clicked()
{
	this->close();
	emit show_mainManue();
}