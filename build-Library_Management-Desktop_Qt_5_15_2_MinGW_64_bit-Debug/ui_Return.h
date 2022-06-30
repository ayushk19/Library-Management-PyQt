/********************************************************************************
** Form generated from reading UI file 'Return.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURN_H
#define UI_RETURN_H

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
    QPushButton *returnmm;
    QLineEdit *returntxt;
    QLabel *label_3;
    QPushButton *returnbtn;
    QLabel *msgreturn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(737, 637);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMinimumSize(QSize(737, 637));
        Form->setMaximumSize(QSize(737, 637));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 60, 401, 91));
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
        label_2->setGeometry(QRect(70, 200, 601, 241));
        label_2->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"border: 1px solid silver;"));
        returnmm = new QPushButton(Form);
        returnmm->setObjectName(QString::fromUtf8("returnmm"));
        returnmm->setGeometry(QRect(440, 490, 151, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font1.setPointSize(16);
        returnmm->setFont(font1);
        returnmm->setCursor(QCursor(Qt::PointingHandCursor));
        returnmm->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"color: #fff;"));
        returntxt = new QLineEdit(Form);
        returntxt->setObjectName(QString::fromUtf8("returntxt"));
        returntxt->setGeometry(QRect(290, 300, 341, 31));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 300, 111, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000"));
        returnbtn = new QPushButton(Form);
        returnbtn->setObjectName(QString::fromUtf8("returnbtn"));
        returnbtn->setGeometry(QRect(140, 490, 151, 51));
        returnbtn->setFont(font1);
        returnbtn->setCursor(QCursor(Qt::PointingHandCursor));
        returnbtn->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"color: #fff;"));
        msgreturn = new QLabel(Form);
        msgreturn->setObjectName(QString::fromUtf8("msgreturn"));
        msgreturn->setGeometry(QRect(160, 380, 421, 31));
        msgreturn->setFont(font1);
        msgreturn->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000"));
        msgreturn->setAlignment(Qt::AlignCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "Return Books", nullptr));
        label_2->setText(QString());
        returnmm->setText(QCoreApplication::translate("Form", "Main Menu", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Book_ID", nullptr));
        returnbtn->setText(QCoreApplication::translate("Form", "Return", nullptr));
        msgreturn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURN_H
