#ifndef PLAYERFILELIST_H
#define PLAYERFILELIST_H

#include <QToolButton>
#include <QWidget>

class PlayerFileList : public QWidget
{
public:
    PlayerFileList();

    void initUI();
    void initConnection();

    static PlayerFileList *Instance();

private:
    QToolButton *m_addFileBtn;
};

#endif // PLAYERFILELIST_H
