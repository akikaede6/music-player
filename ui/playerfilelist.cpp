#include "playerfilelist.h"

#include <QFileDialog>
#include <QListWidget>
#include <QGridLayout>
#include <QDebug>

PlayerFileList::PlayerFileList(QWidget *parent) : QWidget(parent)
{
    initUI();
    initConnection();
}

void PlayerFileList::initUI()
{
    m_addFileBtn = new QToolButton(this);
    QListWidget *playerList = new QListWidget(this);
    QGridLayout *mainLayout = new QGridLayout(this);

    m_addFileBtn->setText("+");

    mainLayout->addWidget(m_addFileBtn, 0, 2);
    mainLayout->addWidget(playerList, 1, 0, 1, 3);
}

void PlayerFileList::initConnection()
{
    connect(m_addFileBtn, &QToolButton::clicked, this, [&]() {
        m_filePath = QFileDialog::getOpenFileName(this, tr("add music file"), "/home/aki/Music", "File(*.mp3)");
        qInfo() << m_filePath;
    });
}

PlayerFileList *PlayerFileList::Instance()
{
    return new PlayerFileList;
}
