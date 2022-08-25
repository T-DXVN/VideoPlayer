/********************************************************************************
** Form generated from reading UI file 'vpwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VPWIDGET_H
#define UI_VPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VPWidget
{
public:

    void setupUi(QWidget *VPWidget)
    {
        if (VPWidget->objectName().isEmpty())
            VPWidget->setObjectName(QString::fromUtf8("VPWidget"));
        VPWidget->resize(800, 600);

        retranslateUi(VPWidget);

        QMetaObject::connectSlotsByName(VPWidget);
    } // setupUi

    void retranslateUi(QWidget *VPWidget)
    {
        VPWidget->setWindowTitle(QApplication::translate("VPWidget", "VPWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VPWidget: public Ui_VPWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPWIDGET_H
