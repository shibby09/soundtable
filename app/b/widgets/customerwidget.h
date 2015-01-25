#ifndef CUSTOMERWIDGET_H
#define CUSTOMERWIDGET_H

#include <QWidget>
#include <QFileDialog>

namespace Ui {
class CustomerWidget;
}

class CustomerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerWidget(QWidget *parent = 0);
    ~CustomerWidget();

private:
    Ui::CustomerWidget *ui;

private slots:
    void on_select1_clicked();
    void on_select2_clicked();
    void on_select3_clicked();
    void on_select4_clicked();
    void on_select5_clicked();
    void on_select6_clicked();
    void on_select7_clicked();
    void on_select8_clicked();
    void on_select9_clicked();
    void on_select10_clicked();
    void on_select11_clicked();
    void on_select12_clicked();


};

#endif // CUSTOMERWIDGET_H
