/********************************************************************************
** Form generated from reading UI file 'Widget1.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET1_H
#define UI_WIDGET1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widgetfirst
{
public:
    QPushButton *exitbtn;
    QLabel *namelabel;
    QLabel *label_2;
    QPushButton *lessonbtn;
    QPushButton *homeworkbtn;
    QPushButton *showscorebtn;

    void setupUi(QWidget *Widgetfirst)
    {
        if (Widgetfirst->objectName().isEmpty())
            Widgetfirst->setObjectName(QString::fromUtf8("Widgetfirst"));
        Widgetfirst->resize(1071, 653);
        exitbtn = new QPushButton(Widgetfirst);
        exitbtn->setObjectName(QString::fromUtf8("exitbtn"));
        exitbtn->setGeometry(QRect(960, 10, 93, 28));
        namelabel = new QLabel(Widgetfirst);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(900, 10, 51, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(10);
        namelabel->setFont(font);
        label_2 = new QLabel(Widgetfirst);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(850, 10, 41, 21));
        label_2->setFont(font);
        lessonbtn = new QPushButton(Widgetfirst);
        lessonbtn->setObjectName(QString::fromUtf8("lessonbtn"));
        lessonbtn->setGeometry(QRect(440, 140, 171, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lessonbtn->setFont(font1);
        homeworkbtn = new QPushButton(Widgetfirst);
        homeworkbtn->setObjectName(QString::fromUtf8("homeworkbtn"));
        homeworkbtn->setGeometry(QRect(440, 290, 171, 81));
        homeworkbtn->setFont(font1);
        showscorebtn = new QPushButton(Widgetfirst);
        showscorebtn->setObjectName(QString::fromUtf8("showscorebtn"));
        showscorebtn->setGeometry(QRect(440, 440, 171, 81));
        showscorebtn->setFont(font1);

        retranslateUi(Widgetfirst);

        QMetaObject::connectSlotsByName(Widgetfirst);
    } // setupUi

    void retranslateUi(QWidget *Widgetfirst)
    {
        Widgetfirst->setWindowTitle(QCoreApplication::translate("Widgetfirst", "\346\225\231\345\270\210\347\225\214\351\235\242", nullptr));
        exitbtn->setText(QCoreApplication::translate("Widgetfirst", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        namelabel->setText(QCoreApplication::translate("Widgetfirst", "name", nullptr));
        label_2->setText(QCoreApplication::translate("Widgetfirst", "\346\254\242\350\277\216!", nullptr));
        lessonbtn->setText(QCoreApplication::translate("Widgetfirst", "\350\257\276\347\250\213\347\256\241\347\220\206", nullptr));
        homeworkbtn->setText(QCoreApplication::translate("Widgetfirst", "\344\275\234\344\270\232\347\256\241\347\220\206", nullptr));
        showscorebtn->setText(QCoreApplication::translate("Widgetfirst", "\346\210\220\347\273\251\347\273\237\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widgetfirst: public Ui_Widgetfirst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET1_H
