#ifndef PLAYERFILELIST_H
#define PLAYERFILELIST_H

#include <QToolButton>
#include <QWidget>

class PlayerFileList : public QWidget
{
public:
    explicit PlayerFileList(QWidget *parent = nullptr);

    void initUI();
    void initConnection();

    static PlayerFileList *Instance();

private:
    QToolButton *m_addFileBtn;
    QString m_filePath;
};

#endif // PLAYERFILELIST_H
