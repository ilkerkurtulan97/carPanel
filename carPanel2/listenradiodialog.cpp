#include "listenradiodialog.h"
#include "ui_listenradiodialog.h"

ListenRadioDialog::ListenRadioDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListenRadioDialog)
{
    ui->setupUi(this);
}

ListenRadioDialog::~ListenRadioDialog()
{
    delete ui;
}
