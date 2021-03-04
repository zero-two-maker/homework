#pragma once

#include <QWidget>
#include "ui_PublishHomework.h"
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
#include <QDateTime>

class PublishHomework : public QWidget
{
	Q_OBJECT


public:
	PublishHomework(QSqlDatabase db, QString name, QWidget *parent = Q_NULLPTR);
	~PublishHomework();

signals:
	void show_homeworkManue();

private slots:
    void on_exitbtn_clicked();
	void on_deliverfilebtn_clicked();
	void on_publishbtn_clicked();

private:
	Ui::PublishHomework ui;
	QSqlDatabase db;
	QString name;
};
