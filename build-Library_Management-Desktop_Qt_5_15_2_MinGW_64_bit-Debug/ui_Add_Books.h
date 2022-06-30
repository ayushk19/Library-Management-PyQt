/********************************************************************************
** Form generated from reading UI file 'Add_Books.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_BOOKS_H
#define UI_ADD_BOOKS_H

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
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtbid;
    QLineEdit *txttitle;
    QLineEdit *txtauthor;
    QLineEdit *txtstatus;
    QPushButton *addb2;
    QPushButton *mm;
    QLabel *msglabel;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(815, 615);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMinimumSize(QSize(815, 615));
        Form->setMaximumSize(QSize(815, 615));
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 128, 44)"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 40, 361, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font.setPointSize(28);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border : 10px solid black;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 190, 681, 321));
        label_2->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"border: 2px"));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 250, 151, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font1.setPointSize(16);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000000;"));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 300, 151, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font2.setPointSize(14);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000000;"));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 350, 151, 41));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000000;"));
        label_6 = new QLabel(Form);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 400, 151, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font3.setPointSize(12);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000000;"));
        txtbid = new QLineEdit(Form);
        txtbid->setObjectName(QString::fromUtf8("txtbid"));
        txtbid->setGeometry(QRect(310, 250, 371, 31));
        txtbid->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        txttitle = new QLineEdit(Form);
        txttitle->setObjectName(QString::fromUtf8("txttitle"));
        txttitle->setGeometry(QRect(310, 300, 371, 31));
        txttitle->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        txtauthor = new QLineEdit(Form);
        txtauthor->setObjectName(QString::fromUtf8("txtauthor"));
        txtauthor->setGeometry(QRect(310, 350, 371, 31));
        txtauthor->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        txtstatus = new QLineEdit(Form);
        txtstatus->setObjectName(QString::fromUtf8("txtstatus"));
        txtstatus->setEnabled(false);
        txtstatus->setGeometry(QRect(310, 400, 371, 31));
        txtstatus->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        addb2 = new QPushButton(Form);
        addb2->setObjectName(QString::fromUtf8("addb2"));
        addb2->setGeometry(QRect(190, 530, 131, 51));
        addb2->setFont(font1);
        addb2->setCursor(QCursor(Qt::PointingHandCursor));
        addb2->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgb(47, 47, 47);"));
        mm = new QPushButton(Form);
        mm->setObjectName(QString::fromUtf8("mm"));
        mm->setGeometry(QRect(490, 530, 131, 51));
        mm->setFont(font1);
        mm->setCursor(QCursor(Qt::PointingHandCursor));
        mm->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgb(47, 47, 47);"));
        msglabel = new QLabel(Form);
        msglabel->setObjectName(QString::fromUtf8("msglabel"));
        msglabel->setGeometry(QRect(250, 460, 381, 41));
        msglabel->setFont(font1);
        msglabel->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"background-color: #000000;"));
        msglabel->setAlignment(Qt::AlignCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "Add Books", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Form", "Book Id:", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Title", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "Author", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "Status(eg:- Avail)", nullptr));
        txtstatus->setText(QCoreApplication::translate("Form", "Avail", nullptr));
        addb2->setText(QCoreApplication::translate("Form", "Add", nullptr));
        mm->setText(QCoreApplication::translate("Form", "Main Menu", nullptr));
        msglabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_BOOKS_H
