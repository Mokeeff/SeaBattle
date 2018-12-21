#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
    this->resize(300,400);          // Устанавливаем размеры окна приложения
    this->setFixedSize(300,400);
}

MainForm::~MainForm()
{
    delete ui;
}

void MainForm::on_GamWithBot_clicked()
{
    this->hide();
    GameWithBot *form = new GameWithBot();
    form->show();
}

void MainForm::on_GameWithPlayer_clicked()
{

}

void MainForm::on_Options_clicked()
{

}

void MainForm::on_Exit_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Выход", "Вы действительно хотите выйти?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }
}
