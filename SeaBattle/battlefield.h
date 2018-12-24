#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include <QWidget>
#include <QGraphicsScene>
#include <QFont>
#include <QMessageBox>
#include <QVector>

#include <ships.h>
#include <field.h>
#include <player.h>
#include <bot.h>
#include <graphicsscene.h>

#define CELL_SIZE 20
#define FIELD_SIZE 11

namespace Ui {
class BattleField;
}

class BattleField : public QWidget
{
    Q_OBJECT

public:
    explicit BattleField(QWidget *parent = nullptr);
    ~BattleField();
    Player player; Bot bot;
    QPointF beginfield;
private slots:
    void on_EndTheTurn_clicked();

private:
    Ui::BattleField *ui;
    QGraphicsScene *scene;

};

#endif // BATTLEFIELD_H
