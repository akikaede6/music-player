#include "playerfilelist.h"

#include <QFileDialog>
#include <QListWidget>

PlayerFileList::PlayerFileList()
{
    initUI();
    initConnection();
}

void PlayerFileList::initUI()
{
    m_addFileBtn = new QToolButton;
    QListWidget *playerList = new QListWidget;
}

void PlayerFileList::initConnection()
{
    connect(m_addFileBtn, &QToolButton::clicked, this, [&]() {
        QFileDialog(this, "add music file", "/home");
    });
}

PlayerFileList *PlayerFileList::Instance()
{
    return new PlayerFileList;
}
