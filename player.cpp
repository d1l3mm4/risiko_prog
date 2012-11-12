#include "player.h"
#include "ui_player.h"

player::player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::player)
{
    ui->setupUi(this);
    ui->n_player_1->setVisible(0);
    ui->n_player_2->setVisible(0);
    ui->n_player_3->setVisible(0);
    ui->n_player_4->setVisible(0);
}

player::~player()
{
    delete ui;
}
