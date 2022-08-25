#include "vpwidget.h"
#include "ui_vpwidget.h"

VPWidget::VPWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VPWidget)
{
    ui->setupUi(this);
}

VPWidget::~VPWidget()
{
    delete ui;
}

