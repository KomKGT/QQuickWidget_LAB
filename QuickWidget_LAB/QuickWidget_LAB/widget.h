#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QQuickItem>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void onSwitchClicked(bool checked);

    void on_btnOn_clicked();

    void on_btnOff_clicked();

    void onSwitch(bool changed);

    void onBTN(bool change);

private:
    Ui::Widget *ui;

    QQuickItem          *root_object;

    QQuickItem          *pole;

    QQuickItem *root_object2;

    QQuickItem *root_object3;

};

#endif // WIDGET_H
