/********************************************************************************
** Form generated from reading UI file 'parametresdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRESDIALOG_H
#define UI_PARAMETRESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametresDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelNbAdditionneur;
    QLabel *label_4;
    QLabel *labelNbMultiplicateur;

    void setupUi(QDialog *ParametresDialog)
    {
        if (ParametresDialog->objectName().isEmpty())
            ParametresDialog->setObjectName(QString::fromUtf8("ParametresDialog"));
        ParametresDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(ParametresDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(ParametresDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 381, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        labelNbAdditionneur = new QLabel(gridLayoutWidget);
        labelNbAdditionneur->setObjectName(QString::fromUtf8("labelNbAdditionneur"));

        gridLayout->addWidget(labelNbAdditionneur, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        labelNbMultiplicateur = new QLabel(gridLayoutWidget);
        labelNbMultiplicateur->setObjectName(QString::fromUtf8("labelNbMultiplicateur"));

        gridLayout->addWidget(labelNbMultiplicateur, 2, 1, 1, 1);


        retranslateUi(ParametresDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ParametresDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ParametresDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ParametresDialog);
    } // setupUi

    void retranslateUi(QDialog *ParametresDialog)
    {
        ParametresDialog->setWindowTitle(QCoreApplication::translate("ParametresDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ParametresDialog", "Param\303\250tres", nullptr));
        label_2->setText(QCoreApplication::translate("ParametresDialog", "Additionneur de cookies : ", nullptr));
        labelNbAdditionneur->setText(QCoreApplication::translate("ParametresDialog", "0", nullptr));
        label_4->setText(QCoreApplication::translate("ParametresDialog", "Multiplicateur de cookies : ", nullptr));
        labelNbMultiplicateur->setText(QCoreApplication::translate("ParametresDialog", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParametresDialog: public Ui_ParametresDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRESDIALOG_H
