#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_btnSave_clicked();

    void on_btnVerify_clicked();

    void on_lblNotify_linkActivated(const QString &link);

    void setlblNotify();

    void on_btnReset_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::Dialog *ui;
    QString temp;
    QString password;
};
#endif // DIALOG_H
