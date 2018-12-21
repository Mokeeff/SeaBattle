#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QMessageBox>

#include <gamewithbot.h>

namespace Ui {
class MainForm;
}

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();

private slots:
    void on_GamWithBot_clicked();

    void on_GameWithPlayer_clicked();

    void on_Options_clicked();

    void on_Exit_clicked();

private:
    Ui::MainForm *ui;
};

#endif // MAINFORM_H
