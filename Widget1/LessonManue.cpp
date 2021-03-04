#include "LessonManue.h"
#include<qdebug.h>

using namespace std;
LessonManue::LessonManue(QSqlDatabase db, QString name, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
    this->db = db;
    this->name = name; //��¼�û�����
    connect(ui.exitbtn, SIGNAL(clicked(bool)), this, SLOT(on_exitbtn_clicked));
    connect(ui.insertbtn, SIGNAL(clicked(bool)), this, SLOT(on_insertbtn_clicked));
    connect(ui.delebtn, SIGNAL(clicked(bool)), this, SLOT(on_delebtn_clicked));
    connect(ui.surebtn, SIGNAL(clicked(bool)), this, SLOT(on_surebtn_clicked));
    connect(ui.cancelbtn, SIGNAL(clicked(bool)), this, SLOT(on_cancelbtn_clicked));
    connect(ui.findbtn, SIGNAL(clicked(bool)), this, SLOT(on_findbtn_clicked));
    connect(ui.showallbtn, SIGNAL(clicked(bool)), this, SLOT(on_showallbtn_clicked));
    model = new QSqlTableModel(this);
    model->setTable("lesson"); //ָ��ģ���еı�  
    ui.tableView->setModel(model);
    model->setFilter("teachername='" + name + "'");
    model->select();//��ʾmodel�������
    model->setEditStrategy(QSqlTableModel::OnManualSubmit); //�ֶ��ύ����
    model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("�γ̱��"));
    model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("�γ�����"));
    model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("�ον�ʦ"));
    model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("�Ͽεص�"));
    model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("�Ͽ�ʱ��"));
    model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("��ʼ������"));
    ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //����п���ȳ����ռ�

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
    //��ӿռ�¼
    QSqlRecord record = model->record();//��ȡ�ռ�¼
    int row = model->rowCount();//��ȡ�к�
    model->insertRecord(row, record);
}

void LessonManue::on_delebtn_clicked()
{
    //��ȡѡ�е�ģ��
    QItemSelectionModel* SModel = ui.tableView->selectionModel();

    //ȡ����ѡ�е���
    QModelIndexList list = SModel->selectedRows();

    //ɾ��
    for (int i = 0; i < list.size(); i++) //����ѡ�еĶ���
    {
        model->removeRow(list.at(i).row()); //ɾ��ÿһ��
    }
}

void LessonManue::on_surebtn_clicked()
{
    model->submitAll();//�ύ����
}

void LessonManue::on_cancelbtn_clicked()
{
    model->revertAll(); //��������
    model->submitAll();  //����������Ҫ�ύ
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
    model->select();//��ʾmodel�������
}

void LessonManue::my_show_slot()
{
	this->show();
}

