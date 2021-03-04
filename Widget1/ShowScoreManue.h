#pragma once

#include <QWidget>
#include "ui_ShowScoreManue.h"
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

class ShowScoreManue : public QWidget
{
	Q_OBJECT

public:
	ShowScoreManue(QSqlDatabase db, QString name, QWidget *parent = Q_NULLPTR);
	~ShowScoreManue();

signals:
	void show_teacherManue();

private slots:
	void on_exitbtn_clicked();



private:
	Ui::ShowScoreManue ui;
	QSqlDatabase db;
	QString name;
};
