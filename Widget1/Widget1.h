#pragma once

#include <QWidget>
#include "ui_Widget1.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include "LessonManue.h"
#include "homeworkManue.h"
#include"ShowScoreManue.h"

class Widget1 : public QWidget
{
	Q_OBJECT

public:
	
	Widget1(QSqlDatabase db,QString name,QWidget* parent = Q_NULLPTR);
	~Widget1();

signals:
	void show_mainManue(); //回到登陆界面信号 
	//void show_lessonManue(); //打开课程管理界面信号

private slots:
	void on_exitbtn_clicked();
	void on_lessonbtn_clicked();
	void my_show_slot();
	void on_homeworkbtn_clicked();
	void on_showscorebtn_clicked();
	

private:
	Ui::Widgetfirst ui;
	QSqlDatabase db;
	QString name;
};



