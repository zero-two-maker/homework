#pragma once

#include <QWidget>
#include "ui_CorrectHomework.h"
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

class CorrectHomework : public QWidget
{
	Q_OBJECT

public:
	CorrectHomework(QSqlDatabase db, QString name, QWidget *parent = Q_NULLPTR);
	~CorrectHomework();

signals:
	void show_homeworkManue();

private slots:
	void on_exitbtn_clicked();

private:
	Ui::CorrectHomework ui;
	QSqlDatabase db;
	QString name;
};
