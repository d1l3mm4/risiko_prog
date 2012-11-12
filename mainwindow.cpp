#include "main.h"
#include "ui_mainwindow.h"
#include "about.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    wAbout = new About(this);
    wAbout->show();
}

void MainWindow::on_actionEsci_triggered()
{
    this->deleteLater();
    wAbout->deleteLater();
}

void MainWindow::on_actionNuova_triggered()
{
    wPlayer = new player(this);
    wPlayer->show();
}
