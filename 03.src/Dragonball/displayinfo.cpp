#include "displayinfo.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include "dragonball.h"




DisplayInfo::DisplayInfo(QString &text, QWidget *parent)
{
    resize(WIDTH,HEIGHT);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    hTitleLayout = new QHBoxLayout();
    hBottomLayout = new QHBoxLayout();
    vMainLayout = new QVBoxLayout();

    hButtonLayout = new QHBoxLayout();

    titleLabel = new QLabel("Dragon Ball");
    titleLabel->setFont(QFont("Trebuchet",20,QFont::Bold));
    hTitleLayout->addWidget(titleLabel,1,Qt::AlignCenter);

    textLabel = new QLabel(text);
    textLabel->setFont(QFont("Trebuchet",20,QFont::Bold));
    hButtonLayout->addWidget(textLabel);

    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);


    funcButton[0] = new QPushButton("Cancel");
    funcButton[1] =  new QPushButton("Back");
    funcButton[2] =  new QPushButton("Next");
    hBottomLayout->setContentsMargins(0,0,20,20);
    hBottomLayout->addStretch(0);
    hBottomLayout->addWidget(funcButton[0]);
    funcButton[0]->setFont(QFont("Trebuchet",24,QFont::Bold));
    hBottomLayout->addWidget(funcButton[1]);
    funcButton[1]->setFont(QFont("Trebuchet",24,QFont::Bold));
    hBottomLayout->addWidget(funcButton[2]);
    funcButton[2]->setFont(QFont("Trebuchet",24,QFont::Bold));
    funcButton[0]->setSizePolicy(sizePolicy1);
    funcButton[1]->setSizePolicy(sizePolicy1);

    funcButton[2]->setSizePolicy(sizePolicy1);



    vMainLayout->addLayout(hTitleLayout);
    vMainLayout->addLayout(hButtonLayout);
    vMainLayout->addLayout(hBottomLayout);

    setLayout(vMainLayout);
    //setStyleSheet("background-image: url(:/home/james/work/qt/Dragonball/image/image-bg.jpg)");
    //create button

    QPixmap bkgnd("/home/james/work/qt/Dragonball/image/image-bg.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}
