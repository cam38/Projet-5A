#include "popupnbthreadsmax.h"
#include "ui_popupnbthreadsmax.h"

popUpNbThreadsMax::popUpNbThreadsMax(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUpNbThreadsMax)
{
    ui->setupUi(this);

    setGeometry(100,100,200,100);

    VLayout = new QVBoxLayout;
    label = new QLabel ;
    buttonOK = new QPushButton("OK",this);

    QObject::connect(buttonOK, SIGNAL(clicked()),this, SLOT(on_pushButtonClicked()));



    //QString nb_noeuds_m = QString::number(NB_NOEUDS_MAX) ;
    msg_label = "Attention, nombre de threads max = " +  QString::number(NB_THREADS_MAX) ;
    //msg_label += nb_noeuds_m ;

    label->setText(msg_label);

    VLayout->addWidget(label,Qt::AlignCenter);

    this->setLayout(VLayout);

}

popUpNbThreadsMax::~popUpNbThreadsMax()
{
    delete ui;
}

void popUpNbThreadsMax::on_pushButtonClicked()
{
    this->close();
}
