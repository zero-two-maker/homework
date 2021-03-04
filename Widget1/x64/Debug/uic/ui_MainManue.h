/********************************************************************************
** Form generated from reading UI file 'MainManue.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMANUE_H
#define UI_MAINMANUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainManueClass
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *teacherbtn;
    QPushButton *studentbtn;
    QPushButton *nextbtn;
    QLineEdit *key;
    QLineEdit *password;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QMainWindow *MainManueClass)
    {
        if (MainManueClass->objectName().isEmpty())
            MainManueClass->setObjectName(QString::fromUtf8("MainManueClass"));
        MainManueClass->resize(1416, 737);
        MainManueClass->setStyleSheet(QString::fromUtf8("#centralWidget\n"
"{\n"
"	border-image: url(:/MainManue/resource/back.jpg);\n"
"\n"
"}\n"
"#password\n"
"{\n"
"    background:white;\n"
"    padding-left:5px ;\n"
"    padding-top:1px ;\n"
"    border-bottom-left-radius:3px;\n"
"    border-bottom-right-radius:3px;\n"
"    border: 1px solid rgb(209 , 209 , 209);\n"
"    border-top:transparent;\n"
"}\n"
"#password\n"
"{\n"
"    padding-top:0px ;\n"
"    border: 1px solid rgb(21 , 131 , 221);\n"
"}\n"
"QLineEdit#key\n"
"{\n"
"    background:white;\n"
"    padding-left:5px ;\n"
"    padding-top:1px ;\n"
"    border-bottom-left-radius:3px;\n"
"    border-bottom-right-radius:3px;\n"
"    border: 1px solid rgb(209 , 209 , 209);\n"
"    border-top:transparent;\n"
"}\n"
"QLineEdit#key\n"
"{\n"
"    padding-top:0px ;\n"
"    border: 1px solid rgb(21 , 131 , 221);\n"
"}"));
        centralWidget = new QWidget(MainManueClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(820, 140, 401, 431));
        frame->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"    border-radius:15px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#password\n"
"{\n"
"    background:white;\n"
"    padding-left:5px ;\n"
"    padding-top:1px ;\n"
"    border-bottom-left-radius:3px;\n"
"    border-bottom-right-radius:3px;\n"
"    border: 1px solid rgb(209 , 209 , 209);\n"
"}\n"
"#password:hover\n"
"{\n"
"    padding-top:0px ;\n"
"    border: 1px solid rgb(21 , 131 , 221);\n"
"}\n"
"\n"
"QLineEdit#key\n"
"{\n"
"    background:white;\n"
"    padding-left:5px ;\n"
"    padding-top:1px ;\n"
"    border-bottom-left-radius:3px;\n"
"    border-bottom-right-radius:3px;\n"
"    border: 1px solid rgb(209 , 209 , 209);\n"
"    border-top:transparent;\n"
"}\n"
"QLineEdit#key:hover\n"
"{\n"
"    padding-top:0px ;\n"
"    border: 1px solid rgb(21 , 131 , 221);\n"
"}\n"
"QPushButton#nextbtn\n"
"{\n"
"    color:white;\n"
"    background-color:rgb(14 , 150 , 254);\n"
"    border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#nextbtn:hover\n"
"{\n"
"    color:white;\n"
"    background-"
                        "color:rgb(44 , 137 , 255);\n"
"}\n"
"\n"
"QPushButton#nextbtn:pressed\n"
"{\n"
"    color:white;\n"
"    background-color:rgb(14 , 135 , 228);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"\n"
"#studentbtn\n"
"{ \n"
"	color: rgb(153, 153, 153);\n"
"    border-radius:0px;\n"
"}\n"
"#studentbtn:hover\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"#studentbtn:pressed\n"
"{\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"#studentbtn:checked\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"    font-weight:bold;\n"
"    border-bottom: 4px solid rgb(21 , 131 , 221);\n"
"}\n"
"#teacherbtn\n"
"{ \n"
"	color: rgb(153, 153, 153);\n"
"    border-radius:0px;\n"
"}\n"
"#teacherbtn:hover\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"#teacherbtn:pressed\n"
"{\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}\n"
"#teacherbtn:checked\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"    font-weight:bold;\n"
"    border-bottom: 4px solid rgb(21 , 131 , 221);\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        teacherbtn = new QPushButton(frame);
        teacherbtn->setObjectName(QString::fromUtf8("teacherbtn"));
        teacherbtn->setEnabled(true);
        teacherbtn->setGeometry(QRect(60, 70, 91, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        teacherbtn->setFont(font);
        teacherbtn->setCheckable(true);
        teacherbtn->setChecked(true);
        studentbtn = new QPushButton(frame);
        studentbtn->setObjectName(QString::fromUtf8("studentbtn"));
        studentbtn->setEnabled(true);
        studentbtn->setGeometry(QRect(160, 70, 91, 51));
        studentbtn->setFont(font);
        studentbtn->setCheckable(true);
        studentbtn->setChecked(false);
        nextbtn = new QPushButton(frame);
        nextbtn->setObjectName(QString::fromUtf8("nextbtn"));
        nextbtn->setEnabled(true);
        nextbtn->setGeometry(QRect(60, 290, 281, 51));
        nextbtn->setStyleSheet(QString::fromUtf8(""));
        key = new QLineEdit(frame);
        key->setObjectName(QString::fromUtf8("key"));
        key->setGeometry(QRect(60, 200, 281, 41));
        key->setStyleSheet(QString::fromUtf8(""));
        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(60, 160, 281, 41));
        password->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 170, 16, 16));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/MainManue/C:/Users/ZERO TWO/Desktop/\347\224\250\346\210\267\345\233\276\346\240\207.jpg);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 209, 21, 31));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/MainManue/resource/\345\257\206\347\240\201\351\224\2012.png);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 170, 20, 20));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/MainManue/resource/\347\224\250\346\210\267\345\233\276\346\240\207.jpg);"));
        MainManueClass->setCentralWidget(centralWidget);

        retranslateUi(MainManueClass);

        QMetaObject::connectSlotsByName(MainManueClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainManueClass)
    {
        MainManueClass->setWindowTitle(QCoreApplication::translate("MainManueClass", "\344\270\273\347\225\214\351\235\242", nullptr));
        teacherbtn->setText(QCoreApplication::translate("MainManueClass", "\346\225\231\345\270\210\347\231\273\345\275\225", nullptr));
        studentbtn->setText(QCoreApplication::translate("MainManueClass", "\345\255\246\347\224\237\347\231\273\345\275\225", nullptr));
        nextbtn->setText(QCoreApplication::translate("MainManueClass", "\347\231\273\345\275\225", nullptr));
        key->setInputMask(QString());
        key->setText(QString());
        key->setPlaceholderText(QCoreApplication::translate("MainManueClass", "\345\257\206\347\240\201", nullptr));
#if QT_CONFIG(tooltip)
        password->setToolTip(QCoreApplication::translate("MainManueClass", "<html><head/><body><p>\347\224\250\346\210\267\345\220\215</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        password->setInputMask(QString());
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("MainManueClass", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainManueClass: public Ui_MainManueClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMANUE_H
