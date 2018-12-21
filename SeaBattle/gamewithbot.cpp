#include "gamewithbot.h"
#include "ui_gamewithbot.h"


GameWithBot::GameWithBot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameWithBot)
{
    p.start();
    ui->setupUi(this);
    this->resize(524,400);
    this->setFixedSize(524,400);
    scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    ui->graphicsView->resize(400,350);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    scene->setSceneRect(0,0,390,340);
    scene->addRect(scene->sceneRect());
    char letter[10], number[10];
    for (int i = 65; i < 77; i++)
        letter[i - 65] = char(i);
    for (int i = 48; i < 58; i++)
        number[i - 48] = char(i);
    for(int i = 0; i < FIELD_SIZE; i++){
        for(int j = 0; j < FIELD_SIZE; j++){
            Field *field = new Field();        // Создаём клетку поля для битвы
            field->setPos(50 + (CELL_SIZE * i), 50 + (CELL_SIZE * j));
            if(i == 0 || j ==0){
                field->name = true;

            }
            else{
                field->name = false;
            }
            scene->addItem(field);
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

GameWithBot::~GameWithBot()
{
    delete ui;
}

void GameWithBot::on_Next_clicked()
{
    if(p.single == 0 && p.two == 0 && p.three == 0 && p.four == 0){
        /*if( s.p.check_field() == true){
            this->hide();
            GameWithBot *form = new GameWithBot();
            form->show();
        }
        else{
            QMessageBox::warning(this, "Error", "Check your ships!!!");
        }*/
    }
    else{
        QMessageBox::warning(this, "Error", "Use all ships!!!");
    }

}
void GameWithBot::on_Single_clicked()
{
    Ships *item = new Ships();          // Создаём корабль
    item->setPos(330, 60);
    item->width = CELL_SIZE;
    item->heigth = CELL_SIZE;
    item->infield = false;
    item->horiz = true;
    item->type = 1;
    scene->addItem(item);  // Добавляем корабль на графическую сцену
    player_ships.push_back(*item);
    p.single--;
    if(p.single <= 0){
        ui->Single->setEnabled(false);
    }
}

void GameWithBot::on_Double_clicked()
{
    Ships *item = new Ships();
    item->setPos(330, 120);
    item->width = CELL_SIZE * 2;
    item->heigth = CELL_SIZE;
    item->infield = false;
    item->horiz = true;
    item->type = 2;
    scene->addItem(item);
    player_ships.push_back(*item);
    p.two--;
    if(p.two <= 0){
        ui->Double->setEnabled(false);
    }
}

void GameWithBot::on_Three_clicked()
{
    Ships *item = new Ships();
    item->setPos(330, 180);
    item->width = CELL_SIZE * 3;
    item->heigth = CELL_SIZE;
    item->infield = false;
    item->horiz = true;
    item->type = 3;
    scene->addItem(item);
    player_ships.push_back(*item);
    p.three--;
    if(p.three <= 0){
        ui->Three->setEnabled(false);
    }
}

void GameWithBot::on_Four_clicked()
{
    Ships *item = new Ships();
    item->setPos(330, 240);
    item->width = CELL_SIZE * 4;
    item->heigth = CELL_SIZE;
    item->infield = false;
    item->horiz = true;
    item->type = 4;
    scene->addItem(item);
    player_ships.push_back(*item);
    p.four--;
    if(p.four <= 0){
        ui->Four->setEnabled(false);
    }
}
