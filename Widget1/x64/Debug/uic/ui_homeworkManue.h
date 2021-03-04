/********************************************************************************
** Form generated from reading UI file 'homeworkManue.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWORKMANUE_H
#define UI_HOMEWORKMANUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homeworkManue
{
public:
    QPushButton *exitbtn;
    QPushButton *deliverfilebtn;
    QPushButton *readfilebtn;
    QPushButton *publishbtn;
    QPushButton *correctbtn;

    void setupUi(QWidget *homeworkManue)
    {
        if (homeworkManue->objectName().isEmpty())
            homeworkManue->setObjectName(QString::fromUtf8("homeworkManue"));
        homeworkManue->resize(1073, 631);
        exitbtn = new QPushButton(homeworkManue);
        exitbtn->setObjectName(QString::fromUtf8("exitbtn"));
        exitbtn->setGeometry(QRect(970, 10, 93, 28));
        deliverfilebtn = new QPushButton(homeworkManue);
        deliverfilebtn->setObjectName(QString::fromUtf8("deliverfilebtn"));
        deliverfilebtn->setGeometry(QRect(960, 100, 93, 28));
        readfilebtn = new QPushButton(homeworkManue);
        readfilebtn->setObjectName(QString::fromUtf8("readfilebtn"));
        readfilebtn->setGeometry(QRect(960, 160, 93, 28));
        publishbtn = new QPushButton(homeworkManue);
        publishbtn->setObjectName(QString::fromUtf8("publishbtn"));
        publishbtn->setGeometry(QRect(440, 210, 181, 71));
        correctbtn = new QPushButton(homeworkManue);
        correctbtn->setObjectName(QString::fromUtf8("correctbtn"));
        correctbtn->setGeometry(QRect(440, 340, 181, 71));

        retranslateUi(homeworkManue);

        QMetaObject::connectSlotsByName(homeworkManue);
    } // setupUi

    void retranslateUi(QWidget *homeworkManue)
    {
        homeworkManue->setWindowTitle(QCoreApplication::translate("homeworkManue", "\344\275\234\344\270\232\347\256\241\347\220\206\347\225\214\351\235\242", nullptr));
        exitbtn->setText(QCoreApplication::translate("homeworkManue", "\350\277\224\345\233\236", nullptr));
        deliverfilebtn->setText(QCoreApplication::translate("homeworkManue", "\344\270\212\344\274\240", nullptr));
        readfilebtn->setText(QCoreApplication::translate("homeworkManue", "\350\257\273\345\217\226", nullptr));
        publishbtn->setText(QCoreApplication::translate("homeworkManue", "\345\217\221\345\270\203\344\275\234\344\270\232", nullptr));
        correctbtn->setText(QCoreApplication::translate("homeworkManue", "\346\211\271\346\224\271\344\275\234\344\270\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homeworkManue: public Ui_homeworkManue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWORKMANUE_H
