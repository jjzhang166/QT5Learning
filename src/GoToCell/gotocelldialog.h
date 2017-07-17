#ifndef GOTOCELLDIALOG
#define GOTOCELLDIALOG

#include "ui_gotocelldialog.h"
#include <QDialog>

class GoToCellDialog :public QDialog, public Ui::GoToCellDialog
{
    Q_OBJECT

public:
    GoToCellDialog(QWidget *parent = 0);

private slots:
    void on_lineEdit_textChanged();
};

#endif // GOTOCELLDIALOG

