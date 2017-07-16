#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QSlider>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("enter your age");

    QSpinBox *box = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);
    QPushButton *button = new QPushButton("quit");

    box->setRange(0,130);
    slider->setRange(0,130);

    QObject::connect(box,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),box,SLOT(setValue(int)));
    QObject::connect(button,SIGNAL(clicked(bool)),&a,SLOT(quit()));

    box->setValue(35);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(box);
    layout->addWidget(slider);
    layout->addWidget(button);
    window->setLayout(layout);
    window->show();
    return a.exec();
}
