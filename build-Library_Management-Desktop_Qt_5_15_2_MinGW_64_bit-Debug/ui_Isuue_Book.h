/********************************************************************************
** Form generated from reading UI file 'Isuue_Book.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISUUE_BOOK_H
#define UI_ISUUE_BOOK_H

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
    QLineEdit *issuebid;
    QPushButton *issuebtn;
    QPushButton *issuemm;
    QLabel *label_4;
    QLineEdit *issuetxt;
    QLabel *issuemsg;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(716, 580);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMinimumSize(QSize(716, 580));
        Form->setMaximumSize(QSize(716, 580));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 401, 91));
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
        label_2->setGeometry(QRect(60, 210, 601, 261));
        label_2->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"border: 1px solid silver;"));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 260, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font1.setPointSize(16);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #ffffff"));
        issuebid = new QLineEdit(Form);
        issuebid->setObjectName(QString::fromUtf8("issuebid"));
        issuebid->setGeometry(QRect(280, 260, 341, 31));
        issuebtn = new QPushButton(Form);
        issuebtn->setObjectName(QString::fromUtf8("issuebtn"));
        issuebtn->setGeometry(QRect(130, 500, 151, 51));
        issuebtn->setFont(font1);
        issuebtn->setCursor(QCursor(Qt::PointingHandCursor));
        issuebtn->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"color: #fff;"));
        issuemm = new QPushButton(Form);
        issuemm->setObjectName(QString::fromUtf8("issuemm"));
        issuemm->setGeometry(QRect(430, 500, 151, 51));
        issuemm->setFont(font1);
        issuemm->setCursor(QCursor(Qt::PointingHandCursor));
        issuemm->setStyleSheet(QString::fromUtf8("background-color: #000;\n"
"color: #fff;"));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 340, 111, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: #ffffff"));
        issuetxt = new QLineEdit(Form);
        issuetxt->setObjectName(QString::fromUtf8("issuetxt"));
        issuetxt->setGeometry(QRect(280, 330, 341, 31));
        issuemsg = new QLabel(Form);
        issuemsg->setObjectName(QString::fromUtf8("issuemsg"));
        issuemsg->setGeometry(QRect(100, 410, 521, 41));
        issuemsg->setFont(font1);
        issuemsg->setStyleSheet(QString::fromUtf8("color: #ffffff"));
        issuemsg->setAlignment(Qt::AlignCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "Issue Book", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Form", "Book_ID:", nullptr));
        issuebtn->setText(QCoreApplication::translate("Form", "Isuue", nullptr));
        issuemm->setText(QCoreApplication::translate("Form", "Main Menu", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Issue To:", nullptr));
        issuemsg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISUUE_BOOK_H
