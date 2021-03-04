/********************************************************************************
** Form generated from reading UI file 'PublishHomework.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLISHHOMEWORK_H
#define UI_PUBLISHHOMEWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PublishHomework
{
public:
    QPushButton *exitbtn;
    QPushButton *publishbtn;
    QPlainTextEdit *maintext;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *teachernamelabel;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *timelabel;
    QLabel *label_4;
    QDateTimeEdit *timeeditor;
    QLabel *label_7;
    QPushButton *deliverfilebtn;

    void setupUi(QWidget *PublishHomework)
    {
        if (PublishHomework->objectName().isEmpty())
            PublishHomework->setObjectName(QString::fromUtf8("PublishHomework"));
        PublishHomework->resize(861, 730);
        exitbtn = new QPushButton(PublishHomework);
        exitbtn->setObjectName(QString::fromUtf8("exitbtn"));
        exitbtn->setGeometry(QRect(750, 10, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        exitbtn->setFont(font);
        publishbtn = new QPushButton(PublishHomework);
        publishbtn->setObjectName(QString::fromUtf8("publishbtn"));
        publishbtn->setGeometry(QRect(730, 670, 111, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(12);
        publishbtn->setFont(font1);
        maintext = new QPlainTextEdit(PublishHomework);
        maintext->setObjectName(QString::fromUtf8("maintext"));
        maintext->setGeometry(QRect(20, 240, 821, 421));
        maintext->setFont(font1);
        layoutWidget = new QWidget(PublishHomework);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 411, 224));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(14);
        label_5->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(14);
        label_10->setFont(font3);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_10);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        teachernamelabel = new QLabel(layoutWidget);
        teachernamelabel->setObjectName(QString::fromUtf8("teachernamelabel"));
        teachernamelabel->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, teachernamelabel);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);
        comboBox->setEditable(false);
        comboBox->setMaxVisibleItems(20);

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        timelabel = new QLabel(layoutWidget);
        timelabel->setObjectName(QString::fromUtf8("timelabel"));
        timelabel->setFont(font3);

        formLayout->setWidget(3, QFormLayout::FieldRole, timelabel);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        timeeditor = new QDateTimeEdit(layoutWidget);
        timeeditor->setObjectName(QString::fromUtf8("timeeditor"));
        timeeditor->setFont(font3);

        formLayout->setWidget(4, QFormLayout::FieldRole, timeeditor);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        deliverfilebtn = new QPushButton(layoutWidget);
        deliverfilebtn->setObjectName(QString::fromUtf8("deliverfilebtn"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Times New Roman"));
        font4.setPointSize(12);
        deliverfilebtn->setFont(font4);

        formLayout->setWidget(5, QFormLayout::FieldRole, deliverfilebtn);


        retranslateUi(PublishHomework);

        QMetaObject::connectSlotsByName(PublishHomework);
    } // setupUi

    void retranslateUi(QWidget *PublishHomework)
    {
        PublishHomework->setWindowTitle(QCoreApplication::translate("PublishHomework", "\345\217\221\345\270\203\344\275\234\344\270\232\347\225\214\351\235\242", nullptr));
        exitbtn->setText(QCoreApplication::translate("PublishHomework", "\345\217\226\346\266\210", nullptr));
        publishbtn->setText(QCoreApplication::translate("PublishHomework", "\345\217\221\345\270\203\344\275\234\344\270\232", nullptr));
        maintext->setPlaceholderText(QCoreApplication::translate("PublishHomework", "\350\257\246\347\273\206\345\206\205\345\256\271\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PublishHomework", "\344\275\234\344\270\232\347\274\226\345\217\267\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("PublishHomework", "1", nullptr));
        label_8->setText(QCoreApplication::translate("PublishHomework", "\346\225\231\345\270\210\345\247\223\345\220\215\357\274\232", nullptr));
        teachernamelabel->setText(QCoreApplication::translate("PublishHomework", "teacher", nullptr));
        label->setText(QCoreApplication::translate("PublishHomework", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("PublishHomework", "\345\217\221\345\270\203\346\227\266\351\227\264\357\274\232", nullptr));
        timelabel->setText(QCoreApplication::translate("PublishHomework", "time", nullptr));
        label_4->setText(QCoreApplication::translate("PublishHomework", "\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("PublishHomework", "\346\267\273\345\212\240\351\231\204\344\273\266\357\274\232", nullptr));
        deliverfilebtn->setText(QCoreApplication::translate("PublishHomework", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PublishHomework: public Ui_PublishHomework {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLISHHOMEWORK_H
