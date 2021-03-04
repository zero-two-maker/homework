#pragma once

#include <QWidget>
#include "ui_homeworkManue.h"
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
#include <QFileDialog>
#include <QSqlError>
#include <QDesktopServices>
#include "PublishHomework.h"
#include "CorrectHomework.h"


class homeworkManue : public QWidget
{
	Q_OBJECT

public:
	homeworkManue(QSqlDatabase db, QString name, QWidget *parent = Q_NULLPTR);
	~homeworkManue();

signals:
	void show_teacherManue();

private slots:
	void my_show_slot();
	void on_exitbtn_clicked();
	void on_deliverfilebtn_clicked();
	void on_readfilebtn_clicked();
	void on_publishbtn_clicked();
	void on_correctbtn_clicked();
private:
	Ui::homeworkManue ui;
	QSqlDatabase db;
	QString name;
};
