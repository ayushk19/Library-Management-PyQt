/********************************************************************************
** Form generated from reading UI file 'Home.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *addb;
    QPushButton *delb;
    QPushButton *viewb;
    QPushButton *issueb;
    QPushButton *returnb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 640);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(760, 640));
        MainWindow->setMaximumSize(QSize(760, 640));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url('C:/Users/lenovo/Pictures/Library.jpg');"));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 491, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font.setPointSize(28);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-color : rgb(0, 0, 0);\n"
"border : 7px solid yellow;\n"
"color : white;"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        addb = new QPushButton(centralwidget);
        addb->setObjectName(QString::fromUtf8("addb"));
        addb->setGeometry(QRect(230, 230, 281, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font1.setPointSize(14);
        addb->setFont(font1);
        addb->setCursor(QCursor(Qt::PointingHandCursor));
        addb->setStyleSheet(QString::fromUtf8("background-color : #000000;\n"
"border : 2px solid #949494;\n"
"color : white"));
        delb = new QPushButton(centralwidget);
        delb->setObjectName(QString::fromUtf8("delb"));
        delb->setGeometry(QRect(230, 290, 281, 61));
        delb->setFont(font1);
        delb->setCursor(QCursor(Qt::PointingHandCursor));
        delb->setStyleSheet(QString::fromUtf8("background-color : #000000;\n"
"border : 2px solid #949494;\n"
"color : white"));
        viewb = new QPushButton(centralwidget);
        viewb->setObjectName(QString::fromUtf8("viewb"));
        viewb->setGeometry(QRect(230, 350, 281, 61));
        viewb->setFont(font1);
        viewb->setCursor(QCursor(Qt::PointingHandCursor));
        viewb->setStyleSheet(QString::fromUtf8("background-color : #000000;\n"
"border : 2px solid #949494;\n"
"color : white"));
        issueb = new QPushButton(centralwidget);
        issueb->setObjectName(QString::fromUtf8("issueb"));
        issueb->setGeometry(QRect(230, 410, 281, 61));
        issueb->setFont(font1);
        issueb->setCursor(QCursor(Qt::PointingHandCursor));
        issueb->setStyleSheet(QString::fromUtf8("background-color : #000000;\n"
"border : 2px solid #949494;\n"
"color : white"));
        returnb = new QPushButton(centralwidget);
        returnb->setObjectName(QString::fromUtf8("returnb"));
        returnb->setGeometry(QRect(230, 470, 281, 61));
        returnb->setFont(font1);
        returnb->setCursor(QCursor(Qt::PointingHandCursor));
        returnb->setStyleSheet(QString::fromUtf8("background-color : #000000;\n"
"border : 2px solid #949494;\n"
"color : white"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 760, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Library", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to Library", nullptr));
        addb->setText(QCoreApplication::translate("MainWindow", "Add Book details", nullptr));
        delb->setText(QCoreApplication::translate("MainWindow", "Delete Book", nullptr));
        viewb->setText(QCoreApplication::translate("MainWindow", "View Book List", nullptr));
        issueb->setText(QCoreApplication::translate("MainWindow", "Issue Book to Student", nullptr));
        returnb->setText(QCoreApplication::translate("MainWindow", "Return Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
