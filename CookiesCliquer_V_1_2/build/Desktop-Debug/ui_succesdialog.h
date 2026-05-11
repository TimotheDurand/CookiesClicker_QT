/********************************************************************************
** Form generated from reading UI file 'succesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESDIALOG_H
#define UI_SUCCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuccesDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *labelNbCookiesTotal;
    QLabel *label;

    void setupUi(QDialog *SuccesDialog)
    {
        if (SuccesDialog->objectName().isEmpty())
            SuccesDialog->setObjectName(QString::fromUtf8("SuccesDialog"));
        SuccesDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(SuccesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(SuccesDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 381, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        labelNbCookiesTotal = new QLabel(gridLayoutWidget);
        labelNbCookiesTotal->setObjectName(QString::fromUtf8("labelNbCookiesTotal"));

        gridLayout->addWidget(labelNbCookiesTotal, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(SuccesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SuccesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SuccesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SuccesDialog);
    } // setupUi

    void retranslateUi(QDialog *SuccesDialog)
    {
        SuccesDialog->setWindowTitle(QCoreApplication::translate("SuccesDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SuccesDialog", "Nombre de cookies total :", nullptr));
        labelNbCookiesTotal->setText(QString());
        label->setText(QCoreApplication::translate("SuccesDialog", "Succes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuccesDialog: public Ui_SuccesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESDIALOG_H
