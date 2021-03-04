#pragma once

#include <QtWidgets/QMainWindow>
#include "Widget1.h"
#include "ui_MainManue.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include "Widget1.h"
#include "Widget2.h"

class MainManue : public QMainWindow
{
    Q_OBJECT
    
public:
     MainManue(QWidget* parent = Q_NULLPTR);
     void ConnectDatabase();

private slots:
    void on_nextbtn_clicked();
    void my_show_slot();
    void on_studentbtn_clicked();
    void on_teacherbtn_clicked();


private:
    Ui::MainManueClass ui;
    QSqlDatabase db;
};
