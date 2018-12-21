#ifndef SHIPS_H
#define SHIPS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>
#include <qmath.h>

#define CELL_SIZE 20

class Ships : public QObject, public QGraphicsItem{
    Q_OBJECT

public:
    explicit Ships(QObject *parent = nullptr);
    ~Ships();
    int width, heigth, type;
    bool horiz, infield;

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);

public slots:

};

#endif // SHIPS_H
