#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>
#include <QList>

class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GraphicsScene(QObject *parent = nullptr);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * mouseEvent);

signals:

public slots:

private:
    QList <QPointF> m_points;
};

#endif // GRAPHICSSCENE_H
