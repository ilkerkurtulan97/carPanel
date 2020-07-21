#include "filmsdialog.h"
#include "ui_filmsdialog.h"

FilmsDialog::FilmsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FilmsDialog)
{
    ui->setupUi(this);
}

FilmsDialog::~FilmsDialog()
{
    delete ui;
}
