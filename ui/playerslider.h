#ifndef PLAYERSLIDER_H
#define PLAYERSLIDER_H

#include <QWidget>

class QSlider;
class PlayerSlider : public QSlider
{
public:
    explicit PlayerSlider(QWidget *parent = nullptr);
};

#endif // PLAYERSLIDER_H
