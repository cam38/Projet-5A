#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parametrageprojet.h"

#include <iostream>

using namespace std ;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNouveau_projet_triggered()
{
     parametrageProjet f(this);
     f.exec();
     *p = f.getProjet();
     cout << p->getNbNoeuds() << endl ;
}

