#ifndef PICTUREMAP_H
#define PICTUREMAP_H

#include <QWidget>
#include <QtGui>
#include <QPixmap>

namespace Ui {
class picturemap;
}

class picturemap : public QWidget
{
    Q_OBJECT
    
public:
    explicit picturemap(QWidget *parent = 0);
     void mousePressEvent(QMouseEvent *);
      QPixmap pix;
      qreal width;
      qreal height;

    ~picturemap();
protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::picturemap *ui;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    bool hasclicked;
    bool i;

};

#endif // PICTUREMAP_H
