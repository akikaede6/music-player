#include "mainwindow.h"
#include "playerfilelist.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    PlayerFileList *fileList = new PlayerFileList;
    setCentralWidget(fileList);
}

MainWindow::~MainWindow() {}
