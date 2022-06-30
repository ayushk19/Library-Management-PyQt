/********************************************************************************
** Form generated from reading UI file 'Delete.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *deltxt;
    QPushButton *delbook;
    QPushButton *delmm;
    QLabel *delmsg;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(749, 614);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMinimumSize(QSize(749, 614));
        Form->setMaximumSize(QSize(749, 614));
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229)"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 50, 401, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font.setPointSize(28);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border: 8px solid rgb(255, 171, 53);\n"
"background-color: #000000;\n"
"color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 190, 601, 251));
        label_2->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"border: 1px solid silver;"));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 290, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font1.setPointSize(16);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000"));
        deltxt = new QLineEdit(Form);
        deltxt->setObjectName(QString::fromUtf8("deltxt"));
        deltxt->setGeometry(QRect(290, 290, 341, 31));
        delbook = new QPushButton(Form);
        delbook->setObjectName(QString::fromUtf8("delbook"));
        delbook->setGeometry(QRect(140, 480, 151, 51));
        delbook->setFont(font1);
        delbook->setCursor(QCursor(Qt::PointingHandCursor));
        delbook->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"color: #fff;"));
        delmm = new QPushButton(Form);
        delmm->setObjectName(QString::fromUtf8("delmm"));
        delmm->setGeometry(QRect(440, 480, 150, 51));
        sizePolicy.setHeightForWidth(delmm->sizePolicy().hasHeightForWidth());
        delmm->setSizePolicy(sizePolicy);
        delmm->setFont(font1);
        delmm->setCursor(QCursor(Qt::PointingHandCursor));
        delmm->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"color: #fff;"));
        delmsg = new QLabel(Form);
        delmsg->setObjectName(QString::fromUtf8("delmsg"));
        delmsg->setGeometry(QRect(200, 380, 331, 31));
        delmsg->setFont(font1);
        delmsg->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000"));
        delmsg->setAlignment(Qt::AlignCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "Delete Books", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Form", "Book_ID", nullptr));
        delbook->setText(QCoreApplication::translate("Form", "Submit", nullptr));
        delmm->setText(QCoreApplication::translate("Form", "Main Menu", nullptr));
        delmsg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
