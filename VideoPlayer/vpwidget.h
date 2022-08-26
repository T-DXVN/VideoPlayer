#ifndef VPWIDGET_H
#define VPWIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVideoWidget>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class VPWidget; }
QT_END_NAMESPACE

class VPWidget : public QWidget
{
    Q_OBJECT

public:
    VPWidget(QWidget *parent = nullptr);
    ~VPWidget();

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_start_pause_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_pre_clicked();

    void on_pushButton_next_clicked();

    void on_horizontalSlider_vedio_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::VPWidget *ui;
    QMediaPlayer * myplayer = nullptr;
    QMediaPlaylist * myplayerlist = nullptr;
    QVideoWidget * mywidget = nullptr;
    bool isstart = false;
};
#endif // VPWIDGET_H
