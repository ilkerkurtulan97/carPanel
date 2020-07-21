#ifndef WATCHTVDIALOG_H
#define WATCHTVDIALOG_H

#include <QDialog>

namespace Ui {
class WatchTvDialog;
}

class WatchTvDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WatchTvDialog(QWidget *parent = nullptr);
    ~WatchTvDialog();

private:
    Ui::WatchTvDialog *ui;
};

#endif // WATCHTVDIALOG_H
