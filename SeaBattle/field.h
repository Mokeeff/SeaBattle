#ifndef FIELD_H
#define FIELD_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>


#define CELL_SIZE 20

class Field : public QObject, public QGraphicsItem
{
    Q_OBJECT

public:
    bool name; bool ally;
    int type;
signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter *cellpainter, const QStyleOptionGraphicsItem *option, QWidget *widget);

public slots:

};

#endif // FIELD_H
