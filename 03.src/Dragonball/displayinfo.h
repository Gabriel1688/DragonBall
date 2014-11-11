#ifndef DISPLAYINFO_H
#define DISPLAYINFO_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

class DisplayInfo : public QWidget
{
    Q_OBJECT
public:

    explicit DisplayInfo(QString &text,QWidget *parent = 0);
    
signals:
    
public slots:
private slots:

private:
      QPushButton *funcButton[3];
      QLabel *titleLabel;
      QHBoxLayout *hTitleLayout;
      QHBoxLayout *hBottomLayout;
      QHBoxLayout *hButtonLayout;

      QVBoxLayout *vMainLayout;

      QLabel *textLabel;

    
};

#endif // DISPLAYINFO_H
