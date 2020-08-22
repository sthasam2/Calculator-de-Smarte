#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtCore"
#include "QtGui"
#include "QDebug"
#include "QMessageBox"
#include <QVector>
#include <cmath>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    customPlot = new QCustomPlot(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButtonSwap_clicked()
{
    // generate some data:
    QVector<double> x(101), y(101);
    for (int i = 0; i < 101; ++i)
    {
        x[i] = i / 50.0 - 1; // x goes from -1 to 1
        y[i] = x[i] * x[i];  // let's plot a quadratic function
    }
    this->customPlot->addGraph();
    this->customPlot->graph(0)->setData(x, y);
    this->customPlot->xAxis->setLabel("x");
    this->customPlot->yAxis->setLabel("y");
    this->customPlot->xAxis->setRange(-1, 1);
    this->customPlot->yAxis->setRange(0, 1);
    this->customPlot->replot();
}
