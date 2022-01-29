#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parametrageprojet.h"
#include "parametragenoeud.h"

using namespace std ;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //taille de la fenetre
    setGeometry(50,50,SIZE_X_WINDOW,SIZE_Y_WINDOW);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent* e) {
    QWidget::paintEvent(e);
    QPainter painter(this);


    if (p != NULL){
        p->afficher(&painter);
    }
}

//méthode liée au bouton nouveau projet dans le menu
void MainWindow::on_actionNouveau_projet_triggered()
{
     //Une fenetre s'ouvre pour régler les paramètres du projet
     parametrageProjet f(this);
     f.exec();

     //On récupère le projet construit dans parametrageProjet
     *p = f.getProjet();

}




