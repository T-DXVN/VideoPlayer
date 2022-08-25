#ifndef VPWIDGET_H
#define VPWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class VPWidget; }
QT_END_NAMESPACE

class VPWidget : public QWidget
{
    Q_OBJECT

public:
    VPWidget(QWidget *parent = nullptr);
    ~VPWidget();

private:
    Ui::VPWidget *ui;
};
#endif // VPWIDGET_H
