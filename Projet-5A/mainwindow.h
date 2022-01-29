#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>
#include <QPushButton>
#include <QGridLayout>
#include <QPixmap>

#include <QString>
#include <iostream>

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

private slots:
    void paintEvent(QPaintEvent* e);
    void on_actionNouveau_projet_triggered();

private:
    Ui::MainWindow *ui;
    Projet * p ;



};
#endif // MAINWINDOW_H
