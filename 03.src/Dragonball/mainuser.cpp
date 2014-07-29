#include "mainuser.h"
#include "dragonball.h"
#include <QSize>

MainUser::MainUser(QWidget *parent) :
    QWidget(parent)
{

    resize(WIDTH,HEIGHT);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    hTitleLayout = new QHBoxLayout();
    vMainLayout = new QVBoxLayout();

    titleLabel = new QLabel("Dragon Ball");
    titleLabel->setFont(QFont("Trebuchet",20,QFont::Bold));
    hTitleLayout->addWidget(titleLabel,1,Qt::AlignHCenter);

    //create buttons
    chargerButton = new QPushButton("Charger");
    chargerButton->setFont(QFont("Trebuchet",20,QFont::Bold));


    langButton = new QPushButton("change Language");
    langButton->setFont(QFont("Trebuchet",20,QFont::Bold));

    binderButton = new QPushButton("Binder");
    binderButton->setFont(QFont("Trebuchet",20,QFont::Bold));

    balanceButton = new QPushButton("Balance");
    balanceButton->setFont(QFont("Trebuchet",20,QFont::Bold));

    recButton = new QPushButton("Record");
    recButton->setFont(QFont("Trebuchet",20,QFont::Bold));

    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(chargerButton->sizePolicy().hasHeightForWidth());

    chargerButton->setSizePolicy(sizePolicy1);
    vLeftLayout = new QVBoxLayout();

    vLeftLayout->setSpacing(15);
    vLeftLayout->setContentsMargins(10,50,20,80);
    vLeftLayout->addWidget(chargerButton);



    sizePolicy1.setHeightForWidth(binderButton->sizePolicy().hasHeightForWidth());
    binderButton->setSizePolicy(sizePolicy1);
    sizePolicy1.setHeightForWidth(balanceButton->sizePolicy().hasHeightForWidth());
    balanceButton->setSizePolicy(sizePolicy1);
    sizePolicy1.setHeightForWidth(recButton->sizePolicy().hasHeightForWidth());
    recButton->setSizePolicy(sizePolicy1);
    sizePolicy1.setHeightForWidth(langButton->sizePolicy().hasHeightForWidth());
    langButton->setSizePolicy(sizePolicy1);



    vRightLayout = new QVBoxLayout();
    vRightLayout->addWidget(binderButton);
    vRightLayout->addWidget(balanceButton);
    vRightLayout->addWidget(recButton);
    vRightLayout->addWidget(langButton);
    vRightLayout->setContentsMargins(0,50,10,80);
    vRightLayout->setSpacing(25);


    hButtonLayout = new QHBoxLayout();

    hButtonLayout->addLayout(vLeftLayout);
    hButtonLayout->addLayout(vRightLayout);

    vMainLayout->addLayout(hTitleLayout);
    vMainLayout->addLayout(hButtonLayout);

    connect(chargerButton,SIGNAL(clicked()),this,SLOT(close()));
    setLayout(vMainLayout);
    //setStyleSheet("background-image: url(:/home/james/work/qt/Dragonball/image/image-bg.jpg)");
    //create button

    QPixmap bkgnd("/home/james/work/qt/Dragonball/image/image-bg.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


}

MainUser::~MainUser()
{

}
