/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *pageAccueil;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *boutonJouer;
    QLabel *label_2;
    QWidget *page_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *boutonQuitter;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *boutonBoutique;
    QPushButton *boutonSucces;
    QPushButton *boutonParametres;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QPushButton *boutonCookie;
    QLabel *labelScore;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(801, 445);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -40, 801, 461));
        pageAccueil = new QWidget();
        pageAccueil->setObjectName(QString::fromUtf8("pageAccueil"));
        gridLayoutWidget = new QWidget(pageAccueil);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 59, 801, 391));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(400, 60));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        boutonJouer = new QPushButton(gridLayoutWidget);
        boutonJouer->setObjectName(QString::fromUtf8("boutonJouer"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        boutonJouer->setFont(font1);

        gridLayout_3->addWidget(boutonJouer, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        label_2 = new QLabel(pageAccueil);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 81, 18));
        stackedWidget->addWidget(pageAccueil);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 50, 781, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        boutonQuitter = new QPushButton(horizontalLayoutWidget_2);
        boutonQuitter->setObjectName(QString::fromUtf8("boutonQuitter"));
        boutonQuitter->setMaximumSize(QSize(100, 40));

        horizontalLayout_2->addWidget(boutonQuitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        boutonBoutique = new QPushButton(horizontalLayoutWidget_2);
        boutonBoutique->setObjectName(QString::fromUtf8("boutonBoutique"));
        boutonBoutique->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(boutonBoutique);

        boutonSucces = new QPushButton(horizontalLayoutWidget_2);
        boutonSucces->setObjectName(QString::fromUtf8("boutonSucces"));
        boutonSucces->setEnabled(true);
        boutonSucces->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(boutonSucces);

        boutonParametres = new QPushButton(horizontalLayoutWidget_2);
        boutonParametres->setObjectName(QString::fromUtf8("boutonParametres"));
        boutonParametres->setMaximumSize(QSize(100, 40));

        horizontalLayout->addWidget(boutonParametres);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayoutWidget_3 = new QWidget(page_2);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 123, 781, 311));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        boutonCookie = new QPushButton(horizontalLayoutWidget_3);
        boutonCookie->setObjectName(QString::fromUtf8("boutonCookie"));
        boutonCookie->setMinimumSize(QSize(150, 150));
        QFont font2;
        font2.setPointSize(64);
        font2.setBold(false);
        boutonCookie->setFont(font2);
        boutonCookie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}"));

        gridLayout->addWidget(boutonCookie, 1, 0, 1, 1);

        labelScore = new QLabel(horizontalLayoutWidget_3);
        labelScore->setObjectName(QString::fromUtf8("labelScore"));
        labelScore->setFont(font1);
        labelScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelScore, 0, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 801, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Cookies Clicker", nullptr));
        boutonJouer->setText(QCoreApplication::translate("MainWindow", "JOUER", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "by Durand.T", nullptr));
        boutonQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        boutonBoutique->setText(QCoreApplication::translate("MainWindow", "Boutique", nullptr));
        boutonSucces->setText(QCoreApplication::translate("MainWindow", "Succ\303\250s", nullptr));
        boutonParametres->setText(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        boutonCookie->setText(QCoreApplication::translate("MainWindow", "\360\237\215\252", nullptr));
        labelScore->setText(QCoreApplication::translate("MainWindow", " Cookies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
