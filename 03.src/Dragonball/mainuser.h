#ifndef MAINUSER_H
#define MAINUSER_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFont>
#include <QLineEdit>


class MainUser : public QWidget
{
    Q_OBJECT
public:
    explicit MainUser(QWidget *parent = 0);

    
signals:
    
public slots:
private:
    QLabel *titleLabel;

    QHBoxLayout *hTitleLayout;
    QHBoxLayout *hButtonLayout;

    QVBoxLayout *vMainLayout;
    QVBoxLayout *vLeftLayout;
    QVBoxLayout *vRightLayout;


    QPushButton *chargerButton;
    QPushButton *langButton;
    QPushButton *balanceButton;
    QPushButton *recButton;
    QPushButton *binderButton;

    QFont *labelFont;



};

#endif // MAINUSER_H
