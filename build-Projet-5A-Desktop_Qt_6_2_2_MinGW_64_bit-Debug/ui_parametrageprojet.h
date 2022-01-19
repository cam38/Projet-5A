/********************************************************************************
** Form generated from reading UI file 'parametrageprojet.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRAGEPROJET_H
#define UI_PARAMETRAGEPROJET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_parametrageProjet
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *parametrageProjet)
    {
        if (parametrageProjet->objectName().isEmpty())
            parametrageProjet->setObjectName(QString::fromUtf8("parametrageProjet"));
        parametrageProjet->resize(211, 149);
        lineEdit = new QLineEdit(parametrageProjet);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 50, 111, 20));
        label = new QLabel(parametrageProjet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 101, 20));
        pushButton = new QPushButton(parametrageProjet);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 120, 41, 21));

        retranslateUi(parametrageProjet);

        QMetaObject::connectSlotsByName(parametrageProjet);
    } // setupUi

    void retranslateUi(QDialog *parametrageProjet)
    {
        parametrageProjet->setWindowTitle(QCoreApplication::translate("parametrageProjet", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("parametrageProjet", "Nombre de Noeuds :", nullptr));
        pushButton->setText(QCoreApplication::translate("parametrageProjet", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parametrageProjet: public Ui_parametrageProjet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRAGEPROJET_H
