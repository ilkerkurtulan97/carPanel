#ifndef GAMESDIALOG_H
#define GAMESDIALOG_H

#include <QDialog>

namespace Ui {
class GamesDialog;
}

class GamesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GamesDialog(QWidget *parent = nullptr);
    ~GamesDialog();

private:
    Ui::GamesDialog *ui;
};

#endif // GAMESDIALOG_H
