/********************************************************************************
** Form generated from reading UI file 'popupnbnoeudsmax.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPNBNOEUDSMAX_H
#define UI_POPUPNBNOEUDSMAX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_popUpNbNoeudsMax
{
public:

    void setupUi(QDialog *popUpNbNoeudsMax)
    {
        if (popUpNbNoeudsMax->objectName().isEmpty())
            popUpNbNoeudsMax->setObjectName(QString::fromUtf8("popUpNbNoeudsMax"));
        popUpNbNoeudsMax->resize(175, 120);
        QFont font;
        font.setPointSize(8);
        popUpNbNoeudsMax->setFont(font);

        retranslateUi(popUpNbNoeudsMax);

        QMetaObject::connectSlotsByName(popUpNbNoeudsMax);
    } // setupUi

    void retranslateUi(QDialog *popUpNbNoeudsMax)
    {
        popUpNbNoeudsMax->setWindowTitle(QCoreApplication::translate("popUpNbNoeudsMax", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popUpNbNoeudsMax: public Ui_popUpNbNoeudsMax {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPNBNOEUDSMAX_H
