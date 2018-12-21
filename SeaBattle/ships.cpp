#include "ships.h"

int toIntCoor(qreal C){
    int I;
    C = floor(C);
    I = C / 1;
    return I;
}

Ships::Ships(QObject *parent) : QObject(parent), QGraphicsItem()
{

}

Ships::~Ships()
{

}

QRectF Ships::boundingRect() const
{
    return QRectF ( - width / 2 , - heigth / 2, width, heigth);
}

void Ships::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QColor color = QColor(0, 0, 0);
    painter->setPen(color);
    color = QColor(211, 211, 211);
    painter->setBrush(color);
    painter->drawRect( - width / 2 , - heigth / 2, width, heigth);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void Ships::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QPointF point = mapToScene(event->pos());
    if(point.y() >= (0 + (heigth / 2)) && point.x() >= (0 + (width / 2))
            && point.y() <= (390 - (heigth / 2)) && point.x() <= (340 - (width / 2))){
        if(point.y() >= 40 && point.y() < 60 + (heigth / 2)){
            point.setY(60 + (heigth / 2));
        }
        if(point.y() > 260 - (heigth / 2) && point.y() < 280){
            point.setY(260 - (heigth / 2));
        }
        if (point.x() >= 40 && point.x() < 60 + (width / 2)){
            point.setX(60 + (width / 2));
        }
        if (point.x() > (260 - (width / 2)) && point.x() < 280){
            point.setX(260 - (width / 2));
        }
        if (point.y() >= (60 + (heigth / 2)) && point.x() >= (60 + (width / 2))
                && point.y() <= (260 - (heigth / 2)) && point.x() <= (260 - (width / 2))){
            int centreX = 10, centreY = 10;
            if(width > heigth && (width == 40 || width == 80)){
                centreX = 0;
            }
            if(heigth > width && (heigth == 40 || heigth == 80))
            {
                centreY = 0;
            }
            qreal x = point.x() / 20; qreal y = point.y() / 20;
            x = floor(x); y = floor(y);
            x = x * 20; y = y * 20;
            point.setY(y + centreY);
            point.setX(x + centreX);
            this->setPos(point);
            this->infield = true;
        }
        else{
            this->setPos(mapToScene(event->pos()));
            this->infield = false;
        }
    }
}

void Ships::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    /*QPointF point = mapToScene(event->pos());
    if(infield == true){
        int lengthX = heigth / 20;
        int lengthY = width / 20;
        int x = toIntCoor(point.x() / 20) - 2;
        int y = toIntCoor(point.y() / 20) - 2;
        x = x - 2;
        y = y - 2;
        if(horiz == true){
            if(lengthX == 4){ x = x - 2;}
            if(lengthX == 3 || lengthX == 2){ x = x - 1;}
        }
        else{
            if(lengthY == 4){ y = y - 2;}
            if(lengthY == 3 || lengthY == 2){ y = y - 1;}
        }
        for(int i = 0; i < lengthX; i++){
            for(int j = 0; j <lengthY; j++){
                p.field[x + i][y + j] = 0;
            }
        }
    }*/
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void Ships::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
   /*QPointF point = mapToScene(event->pos());
    if(infield == true){
        int lengthX = heigth / 20;
        int lengthY = width / 20;
        int x = toIntCoor(point.x() / 20) - 2;
        int y = toIntCoor(point.y() / 20) - 2;
        x = x - 2;
        y = y - 2;
        if(horiz == true){
            if(lengthX == 4){ x = x - 2;}
            if(lengthX == 3 || lengthX == 2){ x = x - 1;}
        }
        else{
            if(lengthY == 4){ y = y - 2;}
            if(lengthY == 3 || lengthY == 2){ y = y - 1;}
        }
        for(int i = 0; i < lengthX; i++){
            for(int j = 0; j <lengthY; j++){
                p.field[x + i][y + j] = type;
            }
        }
    }*/
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}

void Ships::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event){
    if(horiz == true){
        width = width + heigth;
        heigth = width - heigth;
        width = width - heigth;
    }
    else{
        width = width + heigth;
        heigth = width - heigth;
        width = width - heigth;
    }
    Q_UNUSED(event);
}
