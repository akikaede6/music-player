#include "mainwindow.h"
#include "centerwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    CenterWidget *centerWidget = new CenterWidget;
    setCentralWidget(centerWidget);
}

MainWindow::~MainWindow() {}
