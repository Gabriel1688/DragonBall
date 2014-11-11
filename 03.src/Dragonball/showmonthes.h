#ifndef SHOWMONTHES_H
#define SHOWMONTHES_H

#include <QWidget>
#include "button.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QList>
#include <QPushButton>
#include "button.h"

class ShowMonthes : public QWidget
{
    Q_OBJECT
public:
    explicit ShowMonthes(QWidget *parent = 0);
    explicit ShowMonthes(QList<QString> &list,QWidget *parent = 0);
    
signals:
    
public slots:
private slots:
    void monthButtonClicked();
    void functoinClicked();
    
private:
    enum { NumOfMonths = 8 };
    Button *monthButton[NumOfMonths];
    QPushButton *funcButton[3];
    QLabel *titleLabel;

    QHBoxLayout *hTitleLayout;
    QHBoxLayout *hBottomLayout;
    QHBoxLayout *hButtonLayout;

    QVBoxLayout *vMainLayout;


    Button *createButton(const QString &text,const char *member);

};

#endif // SHOWMONTHES_H
