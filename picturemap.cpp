#include "picturemap.h"
#include "ui_picturemap.h"
#include <QPainter>
#include <QPen>
#include <QString>
#include <qlineedit.h>
#include <QDebug>
#include <QMessageBox>
#include <QLabel>

picturemap::picturemap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::picturemap)
{
    ui->setupUi(this);
    //this->showFullScreen();
    //ui->pushButton->setText(tr("draw a point"));
    ui->lineEdit->clear();
     ui->lineEdit_2->clear();
      ui->lineEdit_3->clear();
       ui->lineEdit_4->clear();

       this->setAutoFillBackground(true);
       QPalette palette;
       QPixmap pixmap("images/tu360.jpg");
       palette.setBrush(QPalette::Window, QBrush(pixmap));
      this->setPalette(palette);
      QWidget *pm = new QWidget;
       pm = this;
}
void picturemap::paintEvent(QPaintEvent *event)
{
    QPen pen;
    QPainter painter(this);
     pen.setColor(Qt::black);
     painter.setPen(pen);
     //.可以通过QFontMetrics的width函数取字符串对应的宽度,
     //用ascent() + descent()函数来取字体的高度,用averageCharWidth ()求字体的平均字体宽度
     QFontMetrics metrics = painter.fontMetrics();
     int textHeight = metrics.ascent() + metrics.descent();
     int width=640;
     int height =320;
     // 移动坐标系
     painter.translate(0, 0);
     int totalCount = 12; //
     int count = 24;        // 分成10成
     float deltaX = width / 24.0f;         // x坐标上每分的宽度
     float deltaY = (float)height / 12; // y坐标上每分的宽度
     // 画横坐标
     painter.drawLine(0, 0, width, 0);
     for (int i = 1; i <= 24; ++i)
     {
         QString distance = tr("%1").arg(i);
         // 绘制坐标刻度 就是那个朝下的小竖杠
         painter.drawLine(deltaX * i, 0, deltaX * i, 4);
         // 绘制坐标处的
         int distanceX = deltaX * i;
         painter.drawText(distanceX-2, textHeight+2, distance);
     }
     // 画纵坐标
      painter.drawLine(0, 0, 0, height);
      //在纵坐标头上写上单位
      painter.drawText(-metrics.width(tr("(m)")),-(deltaY * count + textHeight / 2 + metrics.descent()),tr("(m)"));
      for (int i = 1; i <= 12; ++i)
      {
          QString value = QString("%1").arg(i);
          int stringWidth = metrics.width(value);
          // 绘制坐标刻度
          painter.drawLine(4, i * deltaY, 0, i * deltaY);
          // 绘制坐标值
          painter.drawText(stringWidth - 4, (deltaY * i + textHeight / 2 - metrics.ascent()), value);
      }

this->setAttribute(Qt::WA_PaintOutsidePaintEvent);//允许在paintevent以外重载
}


void picturemap::mousePressEvent(QMouseEvent *m){

       //  int x = m->globalpos().x();//globalpos(）相对于整个桌面
       //   int y = m->globalpos().y();

    //获得图片的宽和高
    qreal width = pix.width();
    qreal height = pix.height();
     //写入坐标值
    QString edit = ui->label->text();
        QString edit2 = ui->label_2->text();
            QString edit3 = ui->label_3->text();
                QString edit4 = ui->label_4->text();
                int x = m->pos().x();//pos想对于当前活动的窗口
                int y =m->pos().y();

                QPen pen;
                QPainter painter(this);

                painter.setPen(pen);
                painter.drawPoint(x, y);

     if(hasclicked == 0)
     {

         ui->label_5->move(x-20,y-40);
         pix.load("images/tuding.png");//,0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither
         width = pix.width();
         height = pix.height();
         pix = pix.scaled(width/6,height/6);
         ui->label_5->resize(pix.width(),pix.height());
         ui->label_5->setPixmap(pix);
        ui->label_5->show();

          ui->lineEdit_2->setText(tr("%1").arg(x));
          ui->lineEdit_4->setText(tr("%1").arg(y));
          //ui->pushButton->setText(tr("(%1,%2)").arg(x).arg(y));
          hasclicked = 1;
      }
else
     {
//update();

         ui->label_6->move(x-20,y-40);
         pix.load("images/tuding.png");//,0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither
         width = pix.width();
         height = pix.height();
        pix = pix.scaled(width/6,height/6);
           ui->label_6->resize(pix.width(),pix.height());
            ui->label_6->setPixmap(pix);
         ui->label_6->show();

       ui->lineEdit->setText(tr("%1").arg(x));
       ui->lineEdit_3->setText(tr("%1").arg(y));
        //ui->pushButton->setText(tr("(%1,%2)").arg(x).arg(y));
        hasclicked = 0;

    }

}
picturemap::~picturemap()
{
    delete ui;
}
void picturemap::on_pushButton_2_clicked()
{

    qDebug()<<ui->lineEdit->text()<<ui->lineEdit_3->text()<<"lineto"<<ui->lineEdit_2->text()<<ui->lineEdit_4->text();
    QString wtr=ui->lineEdit->text();
    QString qtr=ui->lineEdit_3->text();
    QString ttr=ui->lineEdit_2->text();
    QString ztr=ui->lineEdit_4->text();

    bool ok;
    int w=wtr.toInt(&ok,10);//转换成10进制
    int q=qtr.toInt(&ok,10);
    int t=ttr.toInt(&ok,10);
    int z=ztr.toInt(&ok,10);


    QPen pen;
    QPainter painter(this);
    painter.setPen(pen);
        painter.drawLine(w,q,t,z);

}

void picturemap::on_pushButton_clicked()
{

    update();
    ui->label_5->clear();
    ui->label_6->clear();

}
