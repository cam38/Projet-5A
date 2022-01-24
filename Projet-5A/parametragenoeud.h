#ifndef PARAMETRAGENOEUD_H
#define PARAMETRAGENOEUD_H

#include <QDialog>

#include "noeud.h"

namespace Ui {
class parametrageNoeud;
}

class parametrageNoeud : public QDialog
{
    Q_OBJECT

public:
    explicit parametrageNoeud(QWidget *parent = nullptr);
    ~parametrageNoeud();

    Noeud getNoeud() ;

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_comboBox_textActivated(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::parametrageNoeud *ui;
    QString nomNoeud ;
    QString typeNoeud ;
    int nbThread = 0 ;
    Noeud * noeud ;
};

#endif // PARAMETRAGENOEUD_H
