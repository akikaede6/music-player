#include "playerfilemodel.h"

PlayerFileModel::PlayerFileModel() {}

PlayerFileModel *PlayerFileModel::Instance()
{
    return new PlayerFileModel;
}
