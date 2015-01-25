#include "customerwidget.h"
#include "ui_customerwidget.h"


CustomerWidget::CustomerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWidget)
{
    ui->setupUi(this);

}

CustomerWidget::~CustomerWidget()
{
    delete ui;
}

    void CustomerWidget::on_select1_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol1Path->setText(fileName);
    }

    void CustomerWidget::on_select2_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol2Path->setText(fileName);
    }

    void CustomerWidget::on_select3_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol3Path->setText(fileName);
    }

    void CustomerWidget::on_select4_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol4Path->setText(fileName);
    }

    void CustomerWidget::on_select5_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol5Path->setText(fileName);
    }

    void CustomerWidget::on_select6_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol6Path->setText(fileName);
    }

    void CustomerWidget::on_select7_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol7Path->setText(fileName);
    }

    void CustomerWidget::on_select8_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol8Path->setText(fileName);
    }

    void CustomerWidget::on_select9_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol9Path->setText(fileName);
    }

    void CustomerWidget::on_select10_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol10Path->setText(fileName);
    }

    void CustomerWidget::on_select11_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol11Path->setText(fileName);
    }

    void CustomerWidget::on_select12_clicked()
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",  tr("Music (*.mp3 *.ogg *.wav)"));

        //Opertation um sound zu setzen

        ui->symbol12Path->setText(fileName);
    }
