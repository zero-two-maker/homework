#pragma once

#include <QWidget>
#include "ui_Widget2.h"
#include "mysql.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>

class Widget2 : public QWidget
{
	Q_OBJECT

public:
	Widget2(QSqlDatabase db, QString name,QWidget *parent = Q_NULLPTR);
	~Widget2();
signals:
	void show_mainManue(); //二级菜单关闭信号 

private slots:
	void on_exitbtn_clicked();
	void my_show_slot();

private:
	Ui::Widget2 ui;
	QSqlDatabase db;
	QString name;
};
