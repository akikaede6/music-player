#include "centerwidget.h"

#include <QGridLayout>

CenterWidget::CenterWidget(QWidget *parent) : QWidget(parent)
{
    playerFileList = new PlayerFileList(this);
    QGridLayout *mainLayout = new QGridLayout(this);

    mainLayout->addWidget(playerFileList);
}
