#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>
class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog(QWidget *parent = 0);

signals:
    void FindNext(const QString &str, Qt::CaseSensitivity cs);
    void FindPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void FindClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;

};

#endif // FINDDIALOG_H
