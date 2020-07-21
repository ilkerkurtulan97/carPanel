#include "watchtvdialog.h"
#include "ui_watchtvdialog.h"

WatchTvDialog::WatchTvDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WatchTvDialog)
{
    ui->setupUi(this);
}

WatchTvDialog::~WatchTvDialog()
{
    delete ui;
}
