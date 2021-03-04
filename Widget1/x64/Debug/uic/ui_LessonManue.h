/********************************************************************************
** Form generated from reading UI file 'LessonManue.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LESSONMANUE_H
#define UI_LESSONMANUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LessonManue
{
public:
    QPushButton *exitbtn;
    QTableView *tableView;
    QPushButton *insertbtn;
    QPushButton *delebtn;
    QPushButton *surebtn;
    QPushButton *cancelbtn;
    QPushButton *findbtn;
    QLineEdit *keyword;
    QLabel *label;
    QPushButton *showallbtn;

    void setupUi(QWidget *LessonManue)
    {
        if (LessonManue->objectName().isEmpty())
            LessonManue->setObjectName(QString::fromUtf8("LessonManue"));
        LessonManue->resize(1073, 630);
        exitbtn = new QPushButton(LessonManue);
        exitbtn->setObjectName(QString::fromUtf8("exitbtn"));
        exitbtn->setGeometry(QRect(1000, 10, 61, 28));
        tableView = new QTableView(LessonManue);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 90, 781, 511));
        insertbtn = new QPushButton(LessonManue);
        insertbtn->setObjectName(QString::fromUtf8("insertbtn"));
        insertbtn->setGeometry(QRect(840, 200, 171, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        insertbtn->setFont(font);
        delebtn = new QPushButton(LessonManue);
        delebtn->setObjectName(QString::fromUtf8("delebtn"));
        delebtn->setGeometry(QRect(840, 300, 171, 51));
        delebtn->setFont(font);
        surebtn = new QPushButton(LessonManue);
        surebtn->setObjectName(QString::fromUtf8("surebtn"));
        surebtn->setGeometry(QRect(840, 480, 93, 28));
        cancelbtn = new QPushButton(LessonManue);
        cancelbtn->setObjectName(QString::fromUtf8("cancelbtn"));
        cancelbtn->setGeometry(QRect(840, 540, 93, 28));
        findbtn = new QPushButton(LessonManue);
        findbtn->setObjectName(QString::fromUtf8("findbtn"));
        findbtn->setGeometry(QRect(590, 30, 91, 31));
        keyword = new QLineEdit(LessonManue);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setGeometry(QRect(130, 30, 431, 31));
        label = new QLabel(LessonManue);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 71, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        showallbtn = new QPushButton(LessonManue);
        showallbtn->setObjectName(QString::fromUtf8("showallbtn"));
        showallbtn->setGeometry(QRect(840, 100, 171, 51));
        showallbtn->setFont(font);

        retranslateUi(LessonManue);

        QMetaObject::connectSlotsByName(LessonManue);
    } // setupUi

    void retranslateUi(QWidget *LessonManue)
    {
        LessonManue->setWindowTitle(QCoreApplication::translate("LessonManue", "\350\257\276\347\250\213\347\256\241\347\220\206\347\225\214\351\235\242", nullptr));
        exitbtn->setText(QCoreApplication::translate("LessonManue", "\350\277\224\345\233\236", nullptr));
        insertbtn->setText(QCoreApplication::translate("LessonManue", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        delebtn->setText(QCoreApplication::translate("LessonManue", "\345\210\240\351\231\244\350\257\276\347\250\213", nullptr));
        surebtn->setText(QCoreApplication::translate("LessonManue", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
        cancelbtn->setText(QCoreApplication::translate("LessonManue", "\345\217\226\346\266\210\346\233\264\346\224\271", nullptr));
        findbtn->setText(QCoreApplication::translate("LessonManue", "\346\237\245\350\257\242", nullptr));
        keyword->setPlaceholderText(QCoreApplication::translate("LessonManue", "\350\257\267\350\276\223\345\205\245\345\205\263\351\224\256\345\255\227", nullptr));
        label->setText(QCoreApplication::translate("LessonManue", "\345\205\263\351\224\256\345\255\227\357\274\232", nullptr));
        showallbtn->setText(QCoreApplication::translate("LessonManue", "\345\205\250\351\203\250\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LessonManue: public Ui_LessonManue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LESSONMANUE_H
