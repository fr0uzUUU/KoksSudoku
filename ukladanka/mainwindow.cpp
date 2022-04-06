#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <iostream>
#include <QRandomGenerator>
#include <ctime>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
}

int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
int a, b;

void MainWindow::Losuj(){
    for(int i = 0; i < 8; i++){
        a = rand()% 8;
        b = rand()% 8;
        swap(tab[a], tab[b]);
        ui->p1->setText(QString::number(tab[0]));
        ui->p2->setText(QString::number(tab[1]));
        ui->p3->setText(QString::number(tab[2]));
        ui->p4->setText(QString::number(tab[3]));
        ui->p5->setText(QString::number(tab[4]));
        ui->p6->setText(QString::number(tab[5]));
        ui->p7->setText(QString::number(tab[6]));
        ui->p8->setText(QString::number(tab[7]));
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::Wygrana(){
    if (ui->p1->text() == "1" && ui->p2->text()=="2" && ui->p3->text() == "3" && ui->p4->text() == "4" && ui->p5->text() == "5" && ui->p6->text() == "6" && ui->p7->text() == "7" && ui->p8->text() == "8"){
        return true;
    }else {
        return false;
    }
}

void MainWindow::on_p1_clicked()
{
    if (ui->p2->text() == ""){
        ui->p2->setText(ui->p1->text());
        ui->p1->setText("");
    }
    if(ui->p4->text() == ""){
        ui->p4->setText(ui->p1->text());
        ui->p1->setText("");
    }
}


void MainWindow::on_p2_clicked()
{
    if (ui->p1->text() == ""){
        ui->p1->setText(ui->p2->text());
        ui->p2->setText("");
    }
    if (ui->p3->text() == ""){
        ui->p3->setText(ui->p2->text());
        ui->p2->setText("");
    }
    if (ui->p5->text() == ""){
        ui->p5->setText(ui->p2->text());
        ui->p2->setText("");
    }
}


void MainWindow::on_p3_clicked()
{
    if (ui->p2->text() == ""){
        ui->p2->setText(ui->p3->text());
        ui->p3->setText("");
    }
    if (ui->p6->text() == ""){
        ui->p6->setText(ui->p3->text());
        ui->p3->setText("");
    }
}


void MainWindow::on_p4_clicked()
{
    if(ui->p1->text() == ""){
        ui->p1->setText(ui->p4->text());
        ui->p4->setText("");
    }
    if(ui->p5->text() == ""){
        ui->p5->setText(ui->p4->text());
        ui->p4->setText("");
    }
    if (ui->p7->text() == ""){
        ui->p7->setText(ui->p4->text());
        ui->p4->setText("");
    }
}


void MainWindow::on_p5_clicked()
{
    if (ui->p2->text() == ""){
        ui->p2->setText(ui->p5->text());
        ui->p5->setText("");
    }
    if (ui->p4->text() == ""){
        ui->p4->setText(ui->p5->text());
        ui->p5->setText("");
    }
    if (ui->p6->text() == ""){
        ui->p6->setText(ui->p5->text());
        ui->p5->setText("");
    }
    if (ui->p8->text() == ""){
        ui->p8->setText(ui->p5->text());
        ui->p5->setText("");
    }
}


void MainWindow::on_p6_clicked()
{
    if (ui->p3->text() == ""){
        ui->p3->setText(ui->p6->text());
        ui->p6->setText("");
    }
    if (ui->p5->text() == ""){
        ui->p5->setText(ui->p6->text());
        ui->p6->setText("");
    }
    if (ui->p9->text() == ""){
        ui->p9->setText(ui->p6->text());
        ui->p6->setText("");
    }
}


void MainWindow::on_p7_clicked()
{
    if (ui->p4->text() == ""){
        ui->p4->setText(ui->p7->text());
        ui->p7->setText("");
    }
    if (ui->p8->text() == ""){
        ui->p8->setText(ui->p7->text());
        ui->p7->setText("");
    }
}


void MainWindow::on_p8_clicked()
{
    if (ui->p7->text() == ""){
        ui->p7->setText(ui->p8->text());
        ui->p8->setText("");
    }
    if (ui->p5->text() == ""){
        ui->p5->setText(ui->p8->text());
        ui->p8->setText("");
    }
    if (ui->p9->text() == ""){
        ui->p9->setText(ui->p8->text());
        ui->p8->setText("");
    }
}


void MainWindow::on_p9_clicked()
{
    if(ui->p8->text() == ""){
        ui->p8->setText(ui->p9->text());
        ui->p9->setText("");
    }
    if (ui->p6->text() == ""){
        ui->p6->setText(ui->p9->text());
        ui->p9->setText("");
    }
}

