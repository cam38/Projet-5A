#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>
#include <QPushButton>
#include <QGridLayout>

#include <QString>

#include "projet.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

const int SIZE_X_WINDOW = 860 , SIZE_Y_WINDOW = 560 ;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void creerNoeuds();

private slots:
    void on_actionNouveau_projet_triggered();

private:
    Ui::MainWindow *ui;
    Projet * p ;
    //int size_x ;
    //int size_y ;
    QPushButton ** listeNoeudGraphique ;


};
#endif // MAINWINDOW_H
