#pragma once

#include <QWidget>
#include "ui_LessonManue.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QStandardItemModel>
#include <QTableView>
#include <QSqlRecord>
#include <QScrollArea>
#include <QTextCodec>

class LessonManue : public QWidget
{
	Q_OBJECT

public:
	LessonManue(QSqlDatabase db, QString name, QWidget *parent = Q_NULLPTR);
	~LessonManue();
signals:
	void show_teacherManue();

private slots:
	void my_show_slot();
	void on_exitbtn_clicked();
	void on_insertbtn_clicked();
	void on_delebtn_clicked();
	void on_surebtn_clicked();
	void on_cancelbtn_clicked();
	void on_findbtn_clicked();
	void on_showallbtn_clicked();


private:
	Ui::LessonManue ui;
	QSqlDatabase db;
	QString name;
	QSqlTableModel *model;
};
