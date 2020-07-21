#ifndef LISTENRADIODIALOG_H
#define LISTENRADIODIALOG_H

#include <QDialog>

namespace Ui {
class ListenRadioDialog;
}

class ListenRadioDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListenRadioDialog(QWidget *parent = nullptr);
    ~ListenRadioDialog();

private:
    Ui::ListenRadioDialog *ui;
};

#endif // LISTENRADIODIALOG_H
