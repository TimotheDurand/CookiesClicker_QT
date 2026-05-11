/********************************************************************************
** Form generated from reading UI file 'boutiquedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUTIQUEDIALOG_H
#define UI_BOUTIQUEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoutiqueDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_11;
    QLabel *labelMamie;
    QLabel *labelNbMamie;
    QPushButton *pushButtonMamie;
    QLabel *labelPrixMamie;
    QGridLayout *gridLayout_10;
    QLabel *labelBoulangerie;
    QLabel *labelNbBoulangerie;
    QPushButton *pushButtonBoulangerie;
    QLabel *labelPrixBoulangerie;
    QGridLayout *gridLayout;
    QLabel *labelMagazin;
    QLabel *labelNbMagazin;
    QPushButton *pushButtonMagazin;
    QLabel *labelPrixMagazin;
    QGridLayout *gridLayout_8;
    QLabel *labelUsine;
    QLabel *labelNbUsine;
    QPushButton *pushButtonUsine;
    QLabel *labelPrixUsine;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_12;
    QLabel *labelSolde;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *BoutiqueDialog)
    {
        if (BoutiqueDialog->objectName().isEmpty())
            BoutiqueDialog->setObjectName(QString::fromUtf8("BoutiqueDialog"));
        BoutiqueDialog->resize(507, 350);
        buttonBox = new QDialogButtonBox(BoutiqueDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 300, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(BoutiqueDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 221, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        labelMamie = new QLabel(verticalLayoutWidget);
        labelMamie->setObjectName(QString::fromUtf8("labelMamie"));
        labelMamie->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(labelMamie, 0, 0, 1, 1);

        labelNbMamie = new QLabel(verticalLayoutWidget);
        labelNbMamie->setObjectName(QString::fromUtf8("labelNbMamie"));

        gridLayout_11->addWidget(labelNbMamie, 0, 1, 1, 1);

        pushButtonMamie = new QPushButton(verticalLayoutWidget);
        pushButtonMamie->setObjectName(QString::fromUtf8("pushButtonMamie"));

        gridLayout_11->addWidget(pushButtonMamie, 1, 0, 1, 1);

        labelPrixMamie = new QLabel(verticalLayoutWidget);
        labelPrixMamie->setObjectName(QString::fromUtf8("labelPrixMamie"));

        gridLayout_11->addWidget(labelPrixMamie, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_11);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        labelBoulangerie = new QLabel(verticalLayoutWidget);
        labelBoulangerie->setObjectName(QString::fromUtf8("labelBoulangerie"));
        labelBoulangerie->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(labelBoulangerie, 0, 0, 1, 1);

        labelNbBoulangerie = new QLabel(verticalLayoutWidget);
        labelNbBoulangerie->setObjectName(QString::fromUtf8("labelNbBoulangerie"));

        gridLayout_10->addWidget(labelNbBoulangerie, 0, 1, 1, 1);

        pushButtonBoulangerie = new QPushButton(verticalLayoutWidget);
        pushButtonBoulangerie->setObjectName(QString::fromUtf8("pushButtonBoulangerie"));

        gridLayout_10->addWidget(pushButtonBoulangerie, 1, 0, 1, 1);

        labelPrixBoulangerie = new QLabel(verticalLayoutWidget);
        labelPrixBoulangerie->setObjectName(QString::fromUtf8("labelPrixBoulangerie"));

        gridLayout_10->addWidget(labelPrixBoulangerie, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelMagazin = new QLabel(verticalLayoutWidget);
        labelMagazin->setObjectName(QString::fromUtf8("labelMagazin"));
        labelMagazin->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelMagazin, 0, 0, 1, 1);

        labelNbMagazin = new QLabel(verticalLayoutWidget);
        labelNbMagazin->setObjectName(QString::fromUtf8("labelNbMagazin"));

        gridLayout->addWidget(labelNbMagazin, 0, 1, 1, 1);

        pushButtonMagazin = new QPushButton(verticalLayoutWidget);
        pushButtonMagazin->setObjectName(QString::fromUtf8("pushButtonMagazin"));

        gridLayout->addWidget(pushButtonMagazin, 1, 0, 1, 1);

        labelPrixMagazin = new QLabel(verticalLayoutWidget);
        labelPrixMagazin->setObjectName(QString::fromUtf8("labelPrixMagazin"));

        gridLayout->addWidget(labelPrixMagazin, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        labelUsine = new QLabel(verticalLayoutWidget);
        labelUsine->setObjectName(QString::fromUtf8("labelUsine"));
        labelUsine->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelUsine, 0, 0, 1, 1);

        labelNbUsine = new QLabel(verticalLayoutWidget);
        labelNbUsine->setObjectName(QString::fromUtf8("labelNbUsine"));

        gridLayout_8->addWidget(labelNbUsine, 0, 1, 1, 1);

        pushButtonUsine = new QPushButton(verticalLayoutWidget);
        pushButtonUsine->setObjectName(QString::fromUtf8("pushButtonUsine"));

        gridLayout_8->addWidget(pushButtonUsine, 1, 0, 1, 1);

        labelPrixUsine = new QLabel(verticalLayoutWidget);
        labelPrixUsine->setObjectName(QString::fromUtf8("labelPrixUsine"));

        gridLayout_8->addWidget(labelPrixUsine, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_8);

        gridLayoutWidget_5 = new QWidget(BoutiqueDialog);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(270, 20, 211, 91));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        labelSolde = new QLabel(gridLayoutWidget_5);
        labelSolde->setObjectName(QString::fromUtf8("labelSolde"));

        gridLayout_12->addWidget(labelSolde, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_5);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);

        gridLayout_12->addWidget(label, 1, 0, 1, 2);


        retranslateUi(BoutiqueDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BoutiqueDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BoutiqueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BoutiqueDialog);
    } // setupUi

    void retranslateUi(QDialog *BoutiqueDialog)
    {
        BoutiqueDialog->setWindowTitle(QCoreApplication::translate("BoutiqueDialog", "Dialog", nullptr));
        labelMamie->setText(QCoreApplication::translate("BoutiqueDialog", "Mamie", nullptr));
        labelNbMamie->setText(QCoreApplication::translate("BoutiqueDialog", "x 0", nullptr));
        pushButtonMamie->setText(QCoreApplication::translate("BoutiqueDialog", "Acheter x1", nullptr));
        labelPrixMamie->setText(QString());
        labelBoulangerie->setText(QCoreApplication::translate("BoutiqueDialog", "Boulangerie", nullptr));
        labelNbBoulangerie->setText(QCoreApplication::translate("BoutiqueDialog", "x 0", nullptr));
        pushButtonBoulangerie->setText(QCoreApplication::translate("BoutiqueDialog", "Acheter x1", nullptr));
        labelPrixBoulangerie->setText(QString());
        labelMagazin->setText(QCoreApplication::translate("BoutiqueDialog", "Magazin", nullptr));
        labelNbMagazin->setText(QCoreApplication::translate("BoutiqueDialog", "x 0", nullptr));
        pushButtonMagazin->setText(QCoreApplication::translate("BoutiqueDialog", "Acheter x1", nullptr));
        labelPrixMagazin->setText(QString());
        labelUsine->setText(QCoreApplication::translate("BoutiqueDialog", "Usine", nullptr));
        labelNbUsine->setText(QCoreApplication::translate("BoutiqueDialog", "x 0", nullptr));
        pushButtonUsine->setText(QCoreApplication::translate("BoutiqueDialog", "Acheter x1", nullptr));
        labelPrixUsine->setText(QString());
        labelSolde->setText(QString());
        label_2->setText(QCoreApplication::translate("BoutiqueDialog", "Solde : ", nullptr));
        label->setText(QCoreApplication::translate("BoutiqueDialog", "Boutique", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoutiqueDialog: public Ui_BoutiqueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTIQUEDIALOG_H
