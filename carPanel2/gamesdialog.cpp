#include "gamesdialog.h"
#include "ui_gamesdialog.h"

GamesDialog::GamesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GamesDialog)
{
    ui->setupUi(this);
}

GamesDialog::~GamesDialog()
{
    delete ui;
}
