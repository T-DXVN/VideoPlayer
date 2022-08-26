#include "vpwidget.h"
#include "ui_vpwidget.h"

VPWidget::VPWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VPWidget)
{
    ui->setupUi(this);
    myplayer = new QMediaPlayer;
    myplayerlist = new QMediaPlaylist;
    mywidget = new QVideoWidget(ui->label);
    myplayer->setPlaylist(myplayerlist);
    myplayer->setVideoOutput(mywidget);
    mywidget->resize(ui->label->size());
    setWindowTitle("播放器");
    myplayer->setVolume(50);
    ui->horizontalSlider_vedio->setValue(50);
    connect(myplayer,&QMediaPlayer::positionChanged,ui->horizontalSlider,&QSlider::setValue);
    connect(myplayer,&QMediaPlayer::durationChanged,ui->horizontalSlider,[&](qint64 temp){
        ui->horizontalSlider->setRange(0,(int)temp);
    });
}

VPWidget::~VPWidget()
{
    delete ui;
}

void VPWidget::paintEvent(QPaintEvent *event)
{
    mywidget->resize(ui->label->size());
}


void VPWidget::on_pushButton_open_clicked()
{
    QStringList mylist = QFileDialog::getOpenFileNames(this,"选择播放资源","D:\\QQ传输文件\\MobileFile","allfiles(*.*);;"
                                                                                              "MP3(*.mp3);;"
                                                                                              "MP4(*.mp4);;");
    myplayerlist->clear();
    for(const auto & k : mylist)
        myplayerlist->addMedia(QUrl(k));
}

void VPWidget::on_pushButton_start_pause_clicked()
{
    if(isstart){
        ui->pushButton_start_pause->setStyleSheet("QPushButton#pushButton_start_pause{border-image:url(:/new/prefix1/image/start.png)}");
        isstart = false;
        myplayer->pause();
    }
    else {
        ui->pushButton_start_pause->setStyleSheet("QPushButton#pushButton_start_pause{border-image:url(:/new/prefix1/image/stop.png)}");
        isstart = true;
        myplayer->play();
        ui->pushButton_stop->setEnabled(true);
    }
}

void VPWidget::on_pushButton_stop_clicked()
{
    myplayer->stop();
    ui->pushButton_stop->setEnabled(false);
    ui->pushButton_start_pause->setStyleSheet("QPushButton#pushButton_start_pause{border-image:url(:/new/prefix1/image/start.png)}");


}

void VPWidget::on_pushButton_pre_clicked()
{
    myplayer->stop();
    myplayerlist->previous();
    myplayer->play();
}

void VPWidget::on_pushButton_next_clicked()
{
    myplayer->stop();
    myplayerlist->next();
    myplayer->play();
}

void VPWidget::on_horizontalSlider_vedio_valueChanged(int value)
{
    myplayer->setVolume(value);
}

void VPWidget::on_horizontalSlider_valueChanged(int value)
{
    myplayer->setPosition((qint64) value );
}
