#ifndef POPUPNBTHREADSMAX_H
#define POPUPNBTHREADSMAX_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

#include "noeud.h"

namespace Ui {
class popUpNbThreadsMax;
}

class popUpNbThreadsMax : public QDialog
{
    Q_OBJECT

public:
    explicit popUpNbThreadsMax(QWidget *parent = nullptr);
    ~popUpNbThreadsMax();

private slots :
    void on_pushButtonClicked();

private:
    Ui::popUpNbThreadsMax *ui;
    QLabel * label ;
    QPushButton * buttonOK ;
    QVBoxLayout * VLayout;
    QString msg_label ;
};

#endif // POPUPNBTHREADSMAX_H
