/********************************************************************************
** Form generated from reading UI file 'parametragenoeud.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRAGENOEUD_H
#define UI_PARAMETRAGENOEUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_parametrageNoeud
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *parametrageNoeud)
    {
        if (parametrageNoeud->objectName().isEmpty())
            parametrageNoeud->setObjectName(QString::fromUtf8("parametrageNoeud"));
        parametrageNoeud->resize(275, 176);
        label = new QLabel(parametrageNoeud);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 111, 16));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        lineEdit = new QLineEdit(parametrageNoeud);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 30, 113, 20));
        label_2 = new QLabel(parametrageNoeud);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 111, 16));
        label_2->setFont(font);
        comboBox = new QComboBox(parametrageNoeud);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(130, 70, 111, 22));
        label_3 = new QLabel(parametrageNoeud);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 111, 16));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(parametrageNoeud);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 110, 113, 20));
        pushButton = new QPushButton(parametrageNoeud);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(219, 150, 51, 20));

        retranslateUi(parametrageNoeud);

        QMetaObject::connectSlotsByName(parametrageNoeud);
    } // setupUi

    void retranslateUi(QDialog *parametrageNoeud)
    {
        parametrageNoeud->setWindowTitle(QCoreApplication::translate("parametrageNoeud", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("parametrageNoeud", "Nom du noeud :", nullptr));
        label_2->setText(QCoreApplication::translate("parametrageNoeud", "Type du noeud :", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("parametrageNoeud", "Type 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("parametrageNoeud", "Type 2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("parametrageNoeud", "Type 3", nullptr));

        label_3->setText(QCoreApplication::translate("parametrageNoeud", "Nombre de threads :", nullptr));
        pushButton->setText(QCoreApplication::translate("parametrageNoeud", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parametrageNoeud: public Ui_parametrageNoeud {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRAGENOEUD_H
