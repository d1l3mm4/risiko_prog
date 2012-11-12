#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "about.h"
#include "player.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionAbout_triggered();

    void on_actionEsci_triggered();

    void on_actionNuova_triggered();

private:
    Ui::MainWindow *ui;
    About *wAbout;
    player *wPlayer;
};

#endif // MAINWINDOW_H
