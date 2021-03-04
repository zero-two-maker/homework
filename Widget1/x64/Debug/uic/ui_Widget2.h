/********************************************************************************
** Form generated from reading UI file 'Widget2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET2_H
#define UI_WIDGET2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget2
{
public:
    QPushButton *exitbtn;
    QLabel *namelabel;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget2)
    {
        if (Widget2->objectName().isEmpty())
            Widget2->setObjectName(QString::fromUtf8("Widget2"));
        Widget2->resize(1071, 653);
        exitbtn = new QPushButton(Widget2);
        exitbtn->setObjectName(QString::fromUtf8("exitbtn"));
        exitbtn->setGeometry(QRect(970, 10, 93, 28));
        namelabel = new QLabel(Widget2);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(910, 10, 61, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(10);
        namelabel->setFont(font);
        label_2 = new QLabel(Widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(860, 10, 41, 20));
        label_2->setFont(font);
        pushButton = new QPushButton(Widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 140, 261, 71));

        retranslateUi(Widget2);

        QMetaObject::connectSlotsByName(Widget2);
    } // setupUi

    void retranslateUi(QWidget *Widget2)
    {
        Widget2->setWindowTitle(QCoreApplication::translate("Widget2", "\345\255\246\347\224\237\347\225\214\351\235\242", nullptr));
        exitbtn->setText(QCoreApplication::translate("Widget2", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        namelabel->setText(QCoreApplication::translate("Widget2", "name", nullptr));
        label_2->setText(QCoreApplication::translate("Widget2", "\346\254\242\350\277\216!", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget2", "\344\275\234\344\270\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget2: public Ui_Widget2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET2_H
