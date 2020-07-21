#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>
#include <QTimer>
#include <QApplication>
#include <QMessageBox>
#include <QDateTime>
#include <QFileDialog>
#include "infodialog.h"
#include "navigationdialog.h"
#include "musicdialog.h"
#include "gamesdialog.h"
#include "filmsdialog.h"
#include "watchtvdialog.h"
#include "listenradiodialog.h"
#include "calendardialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_optionsButton_clicked()
{
    qDebug() <<"The options button has clicked ";

    InfoDialog * dialog = new InfoDialog(this);

    int ret =dialog->exec();

}

void MainWindow::on_navigationButton_clicked()
{
    qDebug() <<"The nav button clicked";

    NavigationDialog * navDialog = new NavigationDialog(this);

    int ret = navDialog->exec();
}

void MainWindow::on_musicButton_clicked()
{
    qDebug() <<"Music button clicked";

    MusicDialog * musDialog = new MusicDialog(this);

    int ret = musDialog->exec();

}

void MainWindow::on_gamesButton_clicked()
{
    qDebug() <<"Games button clicked";

    GamesDialog * gameDialog = new GamesDialog(this);

    int ret = gameDialog->exec();


}

void MainWindow::on_filmsButton_clicked()
{
    qDebug() <<"Games button clicked";

    FilmsDialog * filmDialog = new FilmsDialog(this);

    int ret = filmDialog->exec();

}

void MainWindow::on_watchTvButton_clicked()
{
    qDebug() <<"Tv button clicked";

    WatchTvDialog * tvDialog = new WatchTvDialog(this);

    int ret = tvDialog->exec();
}

void MainWindow::on_radioButton_clicked()
{
    qDebug() <<"Radio button clicked";

    ListenRadioDialog * radioDialog = new ListenRadioDialog(this);

    int ret = radioDialog->exec();
}

void MainWindow::on_powerOffButton_clicked()
{
    QApplication::quit();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this,"Message","This app is done by Software Developer ILKER KURTULAN. Car Joypack Software");
}

void MainWindow::on_actionCalendar_triggered()
{
    CalendarDialog * calDialog = new CalendarDialog(this);

    int ret = calDialog->exec();
}
