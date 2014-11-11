#include "showmonthes.h"
#include "dragonball.h"
// show

ShowMonthes::ShowMonthes(QWidget *parent) :
    QWidget(parent)
{



}


ShowMonthes::ShowMonthes(QList <QString> &list,QWidget *parent) :
    QWidget(parent)

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

    // create 8 buttons

    for (int i = 0; i < NumOfMonths; i++) {
        if (list.isEmpty() == false) {
            monthButton[i] = createButton(list.first() , SLOT(monthButtonClicked()));
            list.removeFirst();
        } else {
            monthButton[i] = createButton("" , SLOT(monthButtonClicked()));
            monthButton[i]->setDisabled(true);
        }
        monthButton[i]->setFont(QFont("Trebuchet",20,QFont::Bold));
    }
    // create back , next and cancel button

    QGridLayout *mainLayout = new QGridLayout();

    for (int i = 0; i < NumOfMonths; i++) {
        int row = i / 4 + 1;
        int column = ((i) %4 ) +1;
        qDebug("row = %d , column = %d",row,column);
        mainLayout->addWidget(monthButton[i],row,column);
    }
    mainLayout->setContentsMargins(20,100,20,100);
   // hButtonLayout->setContentsMargins(0,80,0,80);


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



    hButtonLayout->addLayout(mainLayout);
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


 void ShowMonthes::monthButtonClicked()
 {
 }

 void ShowMonthes::functoinClicked()
 {
 }



 Button *ShowMonthes::createButton(const QString &text, const char *member)
 {
     Button *button = new Button(text);
     connect(button,SIGNAL(clicked()),this,member);
     return button;
 }

