/********************************************************************************
** Form generated from reading UI file 'CorrectHomework.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECTHOMEWORK_H
#define UI_CORRECTHOMEWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CorrectHomework
{
public:
    QPushButton *exitbtn;

    void setupUi(QWidget *CorrectHomework)
    {
        if (CorrectHomework->objectName().isEmpty())
            CorrectHomework->setObjectName(QString::fromUtf8("CorrectHomework"));
        CorrectHomework->resize(1074, 630);
        exitbtn = new QPushButton(CorrectHomework);
        exitbtn->setObjectName(QString::fromUtf8("exitbtn"));
        exitbtn->setGeometry(QRect(970, 10, 93, 28));

        retranslateUi(CorrectHomework);

        QMetaObject::connectSlotsByName(CorrectHomework);
    } // setupUi

    void retranslateUi(QWidget *CorrectHomework)
    {
        CorrectHomework->setWindowTitle(QCoreApplication::translate("CorrectHomework", "\346\211\271\346\224\271\344\275\234\344\270\232\347\225\214\351\235\242", nullptr));
        exitbtn->setText(QCoreApplication::translate("CorrectHomework", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CorrectHomework: public Ui_CorrectHomework {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECTHOMEWORK_H
