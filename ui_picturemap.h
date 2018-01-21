/********************************************************************************
** Form generated from reading UI file 'picturemap.ui'
**
** Created: Wed Oct 29 16:28:40 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREMAP_H
#define UI_PICTUREMAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_picturemap
{
public:
    QLabel *label;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_6;

    void setupUi(QWidget *picturemap)
    {
        if (picturemap->objectName().isEmpty())
            picturemap->setObjectName(QString::fromUtf8("picturemap"));
        picturemap->resize(575, 368);
        label = new QLabel(picturemap);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(174, 331, 41, 17));
        lineEdit_4 = new QLineEdit(picturemap);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(423, 330, 51, 27));
        label_2 = new QLabel(picturemap);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 332, 41, 17));
        label_3 = new QLabel(picturemap);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(268, 335, 16, 17));
        label_5 = new QLabel(picturemap);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 240, 66, 17));
        pushButton = new QPushButton(picturemap);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(454, 291, 98, 27));
        lineEdit_2 = new QLineEdit(picturemap);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(363, 330, 51, 27));
        label_4 = new QLabel(picturemap);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(417, 334, 16, 17));
        lineEdit_3 = new QLineEdit(picturemap);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(274, 331, 51, 27));
        lineEdit = new QLineEdit(picturemap);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(214, 331, 51, 27));
        pushButton_2 = new QPushButton(picturemap);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 331, 81, 27));
        label_6 = new QLabel(picturemap);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 240, 66, 17));

        retranslateUi(picturemap);

        QMetaObject::connectSlotsByName(picturemap);
    } // setupUi

    void retranslateUi(QWidget *picturemap)
    {
        picturemap->setWindowTitle(QApplication::translate("picturemap", "picturemap", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("picturemap", "start:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("picturemap", "end:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("picturemap", ",", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("picturemap", "clear", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("picturemap", ",", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("picturemap", "draw a line", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class picturemap: public Ui_picturemap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREMAP_H
