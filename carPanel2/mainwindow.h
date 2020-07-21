#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_optionsButton_clicked();

    void on_navigationButton_clicked();

    void on_musicButton_clicked();

    void on_gamesButton_clicked();

    void on_filmsButton_clicked();

    void on_watchTvButton_clicked();

    void on_radioButton_clicked();

    void on_powerOffButton_clicked();

    void on_actionAbout_triggered();

    void on_actionCalendar_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
