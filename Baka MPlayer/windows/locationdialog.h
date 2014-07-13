#ifndef LOCATIONDIALOG_H
#define LOCATIONDIALOG_H

#include <QDialog>

namespace Ui {
class LocationDialog;
}

class LocationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LocationDialog(QWidget *parent = 0);
    ~LocationDialog();

private slots:
    void on_okButton_clicked();
    void on_pasteButton_clicked();
    void on_copyButton_clicked();
    void on_clearButton_clicked();
    void on_cancelButton_clicked();

    void on_urlEdit_textChanged(const QString &arg1);

signals:
    void Done(QString url = "");

private:
    Ui::LocationDialog *ui;
};

#endif // LOCATIONDIALOG_H