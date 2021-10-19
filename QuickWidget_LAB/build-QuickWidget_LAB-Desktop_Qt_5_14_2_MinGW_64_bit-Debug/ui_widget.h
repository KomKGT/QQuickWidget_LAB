/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QQuickWidget *qwidget1;
    QLineEdit *txtStatus;
    QPushButton *btnOn;
    QPushButton *btnOff;
    QQuickWidget *quickWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(625, 424);
        qwidget1 = new QQuickWidget(Widget);
        qwidget1->setObjectName(QString::fromUtf8("qwidget1"));
        qwidget1->setGeometry(QRect(10, 10, 121, 191));
        qwidget1->setResizeMode(QQuickWidget::SizeRootObjectToView);
        qwidget1->setSource(QUrl(QString::fromUtf8("qrc:/SwitchControl.qml")));
        txtStatus = new QLineEdit(Widget);
        txtStatus->setObjectName(QString::fromUtf8("txtStatus"));
        txtStatus->setGeometry(QRect(140, 10, 71, 20));
        btnOn = new QPushButton(Widget);
        btnOn->setObjectName(QString::fromUtf8("btnOn"));
        btnOn->setGeometry(QRect(140, 40, 75, 23));
        btnOff = new QPushButton(Widget);
        btnOff->setObjectName(QString::fromUtf8("btnOff"));
        btnOff->setGeometry(QRect(140, 70, 75, 23));
        quickWidget = new QQuickWidget(Widget);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setGeometry(QRect(229, 20, 421, 371));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        quickWidget->setSource(QUrl(QString::fromUtf8("qrc:/new/Switch.qml")));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnOn->setText(QCoreApplication::translate("Widget", "On", nullptr));
        btnOff->setText(QCoreApplication::translate("Widget", "Off", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
