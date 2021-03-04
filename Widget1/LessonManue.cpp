#include "LessonManue.h"
#include<qdebug.h>

using namespace std;
LessonManue::LessonManue(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
    this->db = db;
    this->name = name; //登录用户姓名
    connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(on_exitbtn_clicked));
    connect(ui.insertbtn, SIGNAL(clicked(bool)), this, SLOT(on_insertbtn_clicked));
    connect(ui.delebtn, SIGNAL(clicked(bool)), this, SLOT(on_delebtn_clicked));
    connect(ui.surebtn, SIGNAL(clicked(bool)), this, SLOT(on_surebtn_clicked));
    connect(ui.cancelbtn, SIGNAL(clicked(bool)), this, SLOT(on_cancelbtn_clicked));
    connect(ui.findbtn, SIGNAL(clicked(bool)), this, SLOT(on_findbtn_clicked));
    connect(ui.showallbtn, SIGNAL(clicked(bool)), this, SLOT(on_showallbtn_clicked));
    model = new QSqlTableModel(this);
    model->setTable("lesson"); //指定模型中的表  
    ui.tableView->setModel(model);
    model->setFilter("teachername='" + name + "'");
    model->select();//显示model里的数据
    model->setEditStrategy(QSqlTableModel::OnManualSubmit); //手动提交事务
    model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("课程编号"));
    model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("课程名称"));
    model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("任课教师"));
    model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("上课地点"));
    model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("上课时间"));
    model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("起始结束周"));
    ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //表的列宽均匀充满空间

}

LessonManue::~LessonManue()
{
}

void LessonManue::on_exitbtn_clicked()
{
    this->close();
    emit show_teacherManue();
}

void LessonManue::on_insertbtn_clicked()
{
    //添加空记录
    QSqlRecord record = model->record();//获取空记录
    int row = model->rowCount();//获取行号
    model->insertRecord(row, record);
}

void LessonManue::on_delebtn_clicked()
{
    //获取选中的模型
    QItemSelectionModel* SModel = ui.tableView->selectionModel();

    //取出所选中的行
    QModelIndexList list = SModel->selectedRows();

    //删除
    for (int i = 0; i < list.size(); i++) //遍历选中的多行
    {
        model->removeRow(list.at(i).row()); //删除每一行
    }
}

void LessonManue::on_surebtn_clicked()
{
    model->submitAll();//提交事务
}

void LessonManue::on_cancelbtn_clicked()
{
    model->revertAll(); //撤销事务
    model->submitAll();  //撤销事务需要提交
}

void LessonManue::on_findbtn_clicked()
{ 
    QString keyword = ui.keyword->text();
    QByteArray bytes = keyword.toLocal8Bit();
    const char* gbk = bytes.data();  
    QString str = "(time like'%" + QString::fromLocal8Bit(gbk) + "%'"+" OR "+"lessonname like'%" + QString::fromLocal8Bit(gbk) + "%'" + " OR "+ "location like'%" + QString::fromLocal8Bit(gbk) + "%')" + " AND " + "teachername='" + name + "'";
    //QString str = "time like'%" + QString::fromLocal8Bit(gbk) + "%'"+"OR"+ "lessonname like'%" + QString::fromLocal8Bit(gbk) + "%'" + "OR"+ "location like'%"//QString str = "time like'%" + QString::fromLocal8Bit(gbk) + "%'"+"OR"+ "lessonname like'%" + QString::fromLocal8Bit(gbk) + "%'" + "OR"+ "location like'%" + QString::fromLocal8Bit(gbk) + "%'";
    model->setFilter(str);
    model->select();

}

void LessonManue::on_showallbtn_clicked()
{
    model->setFilter("teachername='" + name + "'");
    model->select();//显示model里的数据
}

void LessonManue::my_show_slot()
{
	this->show();
}

