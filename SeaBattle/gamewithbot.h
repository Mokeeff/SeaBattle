#ifndef GAMEWITHBOT_H
#define GAMEWITHBOT_H

#include <QWidget>
#include <QGraphicsScene>
#include <QFont>
#include <QMessageBox>
#include <QVector>

#include <ships.h>
#include <field.h>
#include <player.h>
#include <battlefield.h>
#include <bot.h>

#define CELL_SIZE 20
#define FIELD_SIZE 11

namespace Ui {
class GameWithBot;
}

class GameWithBot : public QWidget
{
    Q_OBJECT

public:
    explicit GameWithBot(QWidget *parent = nullptr);
    ~GameWithBot();
    Player p;
    QVector <Ships*> player_ships;
    QPointF beginfield;

private slots:
    void on_Next_clicked();

    void on_Single_clicked();

    void on_Double_clicked();

    void on_Three_clicked();

    void on_Four_clicked();

private:
    Ui::GameWithBot *ui;
    QGraphicsScene *scene;
};

#endif // GAMEWITHBOT_H
