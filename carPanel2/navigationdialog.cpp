#include "navigationdialog.h"
#include "ui_navigationdialog.h"

NavigationDialog::NavigationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NavigationDialog)
{
    ui->setupUi(this);
}

NavigationDialog::~NavigationDialog()
{
    delete ui;
}
