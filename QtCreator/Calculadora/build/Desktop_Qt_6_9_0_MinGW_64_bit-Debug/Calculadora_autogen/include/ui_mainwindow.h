/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLineEdit *resultado;
    QGridLayout *gridLayout;
    QPushButton *b3;
    QPushButton *b0;
    QPushButton *b2;
    QPushButton *b6;
    QPushButton *b1;
    QPushButton *bcontinue;
    QPushButton *b9;
    QPushButton *b8;
    QPushButton *b5;
    QPushButton *bdelete;
    QPushButton *b7;
    QPushButton *b4;
    QVBoxLayout *verticalLayout;
    QPushButton *bmais;
    QPushButton *bmenos;
    QPushButton *bvezes;
    QPushButton *bdiv;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(367, 221);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        resultado = new QLineEdit(centralwidget);
        resultado->setObjectName("resultado");
        resultado->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout_2->addWidget(resultado, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        b3 = new QPushButton(centralwidget);
        b3->setObjectName("b3");

        gridLayout->addWidget(b3, 2, 2, 1, 1);

        b0 = new QPushButton(centralwidget);
        b0->setObjectName("b0");

        gridLayout->addWidget(b0, 3, 0, 1, 1);

        b2 = new QPushButton(centralwidget);
        b2->setObjectName("b2");

        gridLayout->addWidget(b2, 2, 1, 1, 1);

        b6 = new QPushButton(centralwidget);
        b6->setObjectName("b6");

        gridLayout->addWidget(b6, 1, 2, 1, 1);

        b1 = new QPushButton(centralwidget);
        b1->setObjectName("b1");

        gridLayout->addWidget(b1, 2, 0, 1, 1);

        bcontinue = new QPushButton(centralwidget);
        bcontinue->setObjectName("bcontinue");

        gridLayout->addWidget(bcontinue, 3, 2, 1, 1);

        b9 = new QPushButton(centralwidget);
        b9->setObjectName("b9");

        gridLayout->addWidget(b9, 0, 2, 1, 1);

        b8 = new QPushButton(centralwidget);
        b8->setObjectName("b8");

        gridLayout->addWidget(b8, 0, 1, 1, 1);

        b5 = new QPushButton(centralwidget);
        b5->setObjectName("b5");

        gridLayout->addWidget(b5, 1, 1, 1, 1);

        bdelete = new QPushButton(centralwidget);
        bdelete->setObjectName("bdelete");

        gridLayout->addWidget(bdelete, 3, 1, 1, 1);

        b7 = new QPushButton(centralwidget);
        b7->setObjectName("b7");

        gridLayout->addWidget(b7, 0, 0, 1, 1);

        b4 = new QPushButton(centralwidget);
        b4->setObjectName("b4");

        gridLayout->addWidget(b4, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        bmais = new QPushButton(centralwidget);
        bmais->setObjectName("bmais");

        verticalLayout->addWidget(bmais);

        bmenos = new QPushButton(centralwidget);
        bmenos->setObjectName("bmenos");

        verticalLayout->addWidget(bmenos);

        bvezes = new QPushButton(centralwidget);
        bvezes->setObjectName("bvezes");

        verticalLayout->addWidget(bvezes);

        bdiv = new QPushButton(centralwidget);
        bdiv->setObjectName("bdiv");

        verticalLayout->addWidget(bdiv);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        b3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        bcontinue->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        b9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        b8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        bdelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        b7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        b4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        bmais->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bmenos->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bvezes->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        bdiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
