#ifndef FILMSDIALOG_H
#define FILMSDIALOG_H

#include <QDialog>

namespace Ui {
class FilmsDialog;
}

class FilmsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FilmsDialog(QWidget *parent = nullptr);
    ~FilmsDialog();

private:
    Ui::FilmsDialog *ui;
};

#endif // FILMSDIALOG_H
