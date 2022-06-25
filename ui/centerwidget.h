#ifndef CENTERWIDGET_H
#define CENTERWIDGET_H

#include "playerfilelist.h"

#include <QWidget>

class CenterWidget : public QWidget
{
public:
    explicit CenterWidget(QWidget *parent = nullptr);

private:
    PlayerFileList *playerFileList;
};

#endif // CENTERWIDGET_H
