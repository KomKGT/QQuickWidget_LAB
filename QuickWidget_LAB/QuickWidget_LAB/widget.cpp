#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    root_object = ui->qwidget1->rootObject();

    connect(root_object, SIGNAL(clicked(bool)),
            this, SLOT(onSwitchClicked(bool)));

    root_object2 = ui->quickWidget->rootObject();

    connect(root_object2,SIGNAL(checker(bool)),
            this,SLOT(onSwitch(bool)));

    root_object3 = ui->quickWidget->rootObject();

    connect(root_object3,SIGNAL(btn(bool)),
            this,SLOT(onBTN(bool)));

    root_object->setProperty("color", "gray");

    pole = root_object->findChild<QQuickItem*>("pole");

    pole->setProperty("color", "red");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::onSwitchClicked(bool checked)
{
    if (checked == true) {
        ui->txtStatus->setText("on");
    } else {
        ui->txtStatus->setText("off");
    }
}

void Widget::on_btnOn_clicked()
{
    QMetaObject::invokeMethod(root_object,
                              "setStatus",
                              Q_ARG(QVariant, true));
}

void Widget::on_btnOff_clicked()
{
    QMetaObject::invokeMethod(root_object,
                              "setStatus",
                              Q_ARG(QVariant, false));
}

void Widget::onSwitch(bool changed)
{
    if (changed == true) {
        qDebug() << "ON";
    } else {
        qDebug() << "OFF";
    }
}

void Widget::onBTN(bool change)
{
    if (change == true) {
        qDebug() << "YES";
    } else {
        qDebug() << "NO";
    }
}
