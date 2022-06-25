#ifndef PLAYERFILEINFO_H
#define PLAYERFILEINFO_H

#include <QWidget>

class PlayerFileInfo : public QWidget
{
public:
    explicit PlayerFileInfo(QWidget *parent = nullptr);

    void initUI();
    void initConnection();
};

#endif // PLAYERFILEINFO_H
