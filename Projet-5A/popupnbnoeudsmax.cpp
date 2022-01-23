#include "popupnbnoeudsmax.h"
#include "ui_popupnbnoeudsmax.h"

popUpNbNoeudsMax::popUpNbNoeudsMax(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUpNbNoeudsMax)
{
    ui->setupUi(this);
    setGeometry(100,100,200,100);

    VLayout = new QVBoxLayout;
    label = new QLabel ;


    QString nb_noeuds_m = QString::number(NB_NOEUDS_MAX) ;
    QString msg_label = "Attention, nombre de noeuds max = " ;
    msg_label += nb_noeuds_m ;

    label->setText(msg_label);


    VLayout->addWidget(label,Qt::AlignCenter);

    this->setLayout(VLayout);





}

popUpNbNoeudsMax::~popUpNbNoeudsMax()
{
    delete ui;
}




void popUpNbNoeudsMax::on_pushButton_clicked()
{
    this->close();
}

