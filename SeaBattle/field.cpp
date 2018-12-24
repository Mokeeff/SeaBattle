#include "field.h"


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
        if( ally == true){
            if(type == 1 || type == 2 || type == 3 || type == 4){color = QColor(211, 211, 211);}
        }
        if(type == -1 ){ color = QColor(205, 92, 92); }
        if(type == -10){ color = QColor(255, 0, 0); }
    }
    painter->setBrush(color);
    painter->drawRect( - CELL_SIZE / 2 , - CELL_SIZE / 2, CELL_SIZE, CELL_SIZE);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
