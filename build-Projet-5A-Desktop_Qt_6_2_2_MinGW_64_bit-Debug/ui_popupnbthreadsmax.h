/********************************************************************************
** Form generated from reading UI file 'popupnbthreadsmax.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPNBTHREADSMAX_H
#define UI_POPUPNBTHREADSMAX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_popUpNbThreadsMax
{
public:

    void setupUi(QDialog *popUpNbThreadsMax)
    {
        if (popUpNbThreadsMax->objectName().isEmpty())
            popUpNbThreadsMax->setObjectName(QString::fromUtf8("popUpNbThreadsMax"));
        popUpNbThreadsMax->resize(400, 300);

        retranslateUi(popUpNbThreadsMax);

        QMetaObject::connectSlotsByName(popUpNbThreadsMax);
    } // setupUi

    void retranslateUi(QDialog *popUpNbThreadsMax)
    {
        popUpNbThreadsMax->setWindowTitle(QCoreApplication::translate("popUpNbThreadsMax", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popUpNbThreadsMax: public Ui_popUpNbThreadsMax {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPNBTHREADSMAX_H
