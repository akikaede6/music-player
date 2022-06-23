#ifndef PLAYERFILEMODEL_H
#define PLAYERFILEMODEL_H

#include <QObject>

class PlayerFileModel : QObject
{
public:
    PlayerFileModel();
    static PlayerFileModel *Instance();
};

#endif // PLAYERFILEMODEL_H
