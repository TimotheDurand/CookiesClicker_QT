#ifndef SUCCESDIALOG_H
#define SUCCESDIALOG_H

#include <QDialog>

namespace Ui {
class SuccesDialog;
}

class SuccesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SuccesDialog(QWidget *parent = nullptr);
    ~SuccesDialog();

private:
    Ui::SuccesDialog *ui;
};

#endif // SUCCESDIALOG_H
