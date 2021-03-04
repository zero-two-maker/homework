/********************************************************************************
** Form generated from reading UI file 'ShowScoreManue.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWSCOREMANUE_H
#define UI_SHOWSCOREMANUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowScoreManue
{
public:
    QPushButton *exitbtn;

    void setupUi(QWidget *ShowScoreManue)
    {
        if (ShowScoreManue->objectName().isEmpty())
            ShowScoreManue->setObjectName(QString::fromUtf8("ShowScoreManue"));
        ShowScoreManue->resize(1073, 630);
        exitbtn = new QPushButton(ShowScoreManue);
        exitbtn->setObjectName(QString::fromUtf8("exitbtn"));
        exitbtn->setGeometry(QRect(960, 20, 93, 28));

        retranslateUi(ShowScoreManue);

        QMetaObject::connectSlotsByName(ShowScoreManue);
    } // setupUi

    void retranslateUi(QWidget *ShowScoreManue)
    {
        ShowScoreManue->setWindowTitle(QCoreApplication::translate("ShowScoreManue", "\346\210\220\347\273\251\347\273\237\350\256\241\347\225\214\351\235\242", nullptr));
        exitbtn->setText(QCoreApplication::translate("ShowScoreManue", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowScoreManue: public Ui_ShowScoreManue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWSCOREMANUE_H
