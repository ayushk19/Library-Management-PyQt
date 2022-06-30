/********************************************************************************
** Form generated from reading UI file 'View_Books.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_BOOKS_H
#define UI_VIEW_BOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTableWidget *table1;
    QLabel *label;
    QPushButton *viewmm;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(707, 565);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMinimumSize(QSize(707, 565));
        Form->setMaximumSize(QSize(707, 565));
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229)"));
        table1 = new QTableWidget(Form);
        if (table1->columnCount() < 4)
            table1->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(255, 255, 255));
        table1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(255, 255, 255));
        table1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(255, 255, 255));
        table1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(255, 255, 255));
        table1->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (table1->rowCount() < 100)
            table1->setRowCount(100);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        table1->setItem(0, 0, __qtablewidgetitem4);
        table1->setObjectName(QString::fromUtf8("table1"));
        table1->setGeometry(QRect(70, 200, 561, 221));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font.setPointSize(14);
        table1->setFont(font);
        table1->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200)"));
        table1->setRowCount(100);
        table1->setColumnCount(4);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 451, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border: 8px solid rgb(255, 123, 8);\n"
"background-color: #000;\n"
"color: #fff;"));
        label->setAlignment(Qt::AlignCenter);
        viewmm = new QPushButton(Form);
        viewmm->setObjectName(QString::fromUtf8("viewmm"));
        viewmm->setGeometry(QRect(280, 480, 141, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font2.setPointSize(16);
        viewmm->setFont(font2);
        viewmm->setCursor(QCursor(Qt::PointingHandCursor));
        viewmm->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
""));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Form", "Book_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Form", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Form", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table1->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Form", "Status", nullptr));

        const bool __sortingEnabled = table1->isSortingEnabled();
        table1->setSortingEnabled(false);
        table1->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("Form", "View Books", nullptr));
        viewmm->setText(QCoreApplication::translate("Form", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_BOOKS_H
