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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VPWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_vedio;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_open;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_start_pause;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_stop;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_pre;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_next;

    void setupUi(QWidget *VPWidget)
    {
        if (VPWidget->objectName().isEmpty())
            VPWidget->setObjectName(QString::fromUtf8("VPWidget"));
        VPWidget->resize(800, 600);
        gridLayout = new QGridLayout(VPWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(VPWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(VPWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 60));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        horizontalSlider_vedio = new QSlider(widget);
        horizontalSlider_vedio->setObjectName(QString::fromUtf8("horizontalSlider_vedio"));
        horizontalSlider_vedio->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_vedio);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(VPWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_open = new QPushButton(widget_2);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setMaximumSize(QSize(40, 40));
        pushButton_open->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/open.png);"));

        horizontalLayout->addWidget(pushButton_open);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_start_pause = new QPushButton(widget_2);
        pushButton_start_pause->setObjectName(QString::fromUtf8("pushButton_start_pause"));
        pushButton_start_pause->setMaximumSize(QSize(30, 30));
        pushButton_start_pause->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/start.png);"));

        horizontalLayout->addWidget(pushButton_start_pause);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_stop = new QPushButton(widget_2);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setMaximumSize(QSize(40, 40));
        pushButton_stop->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/back.png);"));

        horizontalLayout->addWidget(pushButton_stop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_pre = new QPushButton(widget_2);
        pushButton_pre->setObjectName(QString::fromUtf8("pushButton_pre"));
        pushButton_pre->setMaximumSize(QSize(40, 40));
        pushButton_pre->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/pre.png);"));

        horizontalLayout->addWidget(pushButton_pre);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_next = new QPushButton(widget_2);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setMaximumSize(QSize(40, 40));
        pushButton_next->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/next.png);"));

        horizontalLayout->addWidget(pushButton_next);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);


        retranslateUi(VPWidget);

        QMetaObject::connectSlotsByName(VPWidget);
    } // setupUi

    void retranslateUi(QWidget *VPWidget)
    {
        VPWidget->setWindowTitle(QApplication::translate("VPWidget", "VPWidget", nullptr));
        label->setText(QString());
        pushButton_open->setText(QString());
        pushButton_start_pause->setText(QString());
        pushButton_stop->setText(QString());
        pushButton_pre->setText(QString());
        pushButton_next->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VPWidget: public Ui_VPWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPWIDGET_H
