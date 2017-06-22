#include "mywidget1.h"
#include <QApplication>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //  myWidget1 w;
 //   w.show();

    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    QWidget* widget = new QWidget(0,Qt::Dialog);
    widget->setWindowTitle(QObject::tr("I am widget"));

    QLabel* label = new QLabel(0,Qt::SplashScreen);
    label->setWindowTitle(QObject::tr("I am label"));
    label->setText(QObject::tr("label:I am a window"));
    label->resize(180,20);

    QLabel* label2 = new QLabel(widget);
    label2->setText(QObject::tr("label2:I am not single window but child of window"));
    label2->resize(500,20);

    label->show();
    widget->show();
    int ret = a.exec();
    delete label;
    delete widget;
    return ret;
}
