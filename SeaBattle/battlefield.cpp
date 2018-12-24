#include "battlefield.h"
#include "ui_battlefield.h"

BattleField::BattleField(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BattleField)
{
    ui->setupUi(this);
    this->resize(627,348);
    this->setFixedSize(627,348);
    scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    ui->graphicsView->resize(610,300);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    scene->setSceneRect(0,0,600,300);
    scene->addRect(scene->sceneRect());
    char letter[10], number[10];
    for (int i = 65; i < 77; i++)
        letter[i - 65] = char(i);
    for (int i = 48; i < 58; i++)
        number[i - 48] = char(i);
    for(int i = 0; i < FIELD_SIZE; i++){
        for(int j = 0; j < FIELD_SIZE; j++){
            Field *field = new Field();
            field->setPos(50 + (CELL_SIZE * i), 50 + (CELL_SIZE * j));
            if(i == 0 || j ==0){ field->name = true; }
            else{ field->name = false; }
            field->ally = false;
            scene->addItem(field);
            if (i == 1 && j == 1){ beginfield = field->pos(); }
            if(field->name == true){
                if(j == 0 && i != 0){
                    QString simvol = QChar(letter[i - 1]);
                    QGraphicsTextItem *textItem = new QGraphicsTextItem(nullptr);
                    textItem->setPlainText(simvol);
                    QFont sansFont("Times", 12);
                    textItem->setFont(sansFont);
                    textItem->setPos(40 + (CELL_SIZE * i), 37);
                    scene->addItem(textItem);
                }
                if(i == 0 && j != 0){
                    QGraphicsTextItem *textItem = new QGraphicsTextItem(nullptr);
                    if(j == 10){
                        QString simvol = QChar(number[1]);
                        QString simvol2 = QChar(number[0]);
                        simvol += simvol2;
                        textItem->setPlainText(simvol);
                    }
                    else{
                        QString simvol = QChar(number[j]);
                        textItem->setPlainText(simvol);
                    }
                    QFont sansFont("Times", 12);
                    textItem->setFont(sansFont);
                    textItem->setPos(37, 36 + (CELL_SIZE * j));
                    scene->addItem(textItem);
                }
            }
        }
    }
    for(int i = 0; i < FIELD_SIZE; i++){
        for(int j = 0; j < FIELD_SIZE; j++){
            Field *field = new Field();
            field->setPos(350 + (CELL_SIZE * i), 50 + (CELL_SIZE * j));
            if(i == 0 || j ==0){ field->name = true; }
            else{ field->name = false; }
            field->ally = false;
            scene->addItem(field);
            if (i == 1 && j == 1){ beginfield = field->pos(); }
            if(field->name == true){
                if(j == 0 && i != 0){
                    QString simvol = QChar(letter[i - 1]);
                    QGraphicsTextItem *textItem = new QGraphicsTextItem(nullptr);
                    textItem->setPlainText(simvol);
                    QFont sansFont("Times", 12);
                    textItem->setFont(sansFont);
                    textItem->setPos(40 + (CELL_SIZE * i), 37);
                    scene->addItem(textItem);
                }
                if(i == 0 && j != 0){
                    QGraphicsTextItem *textItem = new QGraphicsTextItem(nullptr);
                    if(j == 10){
                        QString simvol = QChar(number[1]);
                        QString simvol2 = QChar(number[0]);
                        simvol += simvol2;
                        textItem->setPlainText(simvol);
                    }
                    else{
                        QString simvol = QChar(number[j]);
                        textItem->setPlainText(simvol);
                    }
                    QFont sansFont("Times", 12);
                    textItem->setFont(sansFont);
                    textItem->setPos(37, 36 + (CELL_SIZE * j));
                    scene->addItem(textItem);
                }
            }
        }
    }

}

BattleField::~BattleField()
{
    delete ui;
}

void BattleField::on_EndTheTurn_clicked()
{
    QMessageBox::warning(this, "Error", "Use all ships!!!");
}
