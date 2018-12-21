#include "field.h"

Field::Field(QObject *parent) : QObject(parent), QGraphicsItem()
{

}

Field::~Field()
{

}

QRectF Field::boundingRect() const
{
    return QRectF ( - CELL_SIZE / 2 , - CELL_SIZE / 2, CELL_SIZE, CELL_SIZE);
}

void Field::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QColor color = QColor(0, 0, 0);
    painter->setPen(color);
    if(name == true){
        color = QColor(255, 255, 255);
    }
    else{
        color = QColor(0, 0, 255);
    }
    painter->setBrush(color);
    painter->drawRect( - CELL_SIZE / 2 , - CELL_SIZE / 2, CELL_SIZE, CELL_SIZE);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

