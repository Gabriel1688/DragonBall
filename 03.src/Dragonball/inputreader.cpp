#include "inputreader.h"
#include "dragonball.h"
#include <QSize>
#include "button.h"
// This class is responsible for Input amount/member /Credit card number

InputReader::InputReader(QWidget *parent) :
    QWidget(parent)
{

    resize(WIDTH,HEIGHT);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    hTitleLayout = new QHBoxLayout();
    hBottomLayout = new QHBoxLayout();
    vMainLayout = new QVBoxLayout();


    titleLabel = new QLabel("Dragon Ball");
    titleLabel->setFont(QFont("Trebuchet",20,QFont::Bold));
    hTitleLayout->addWidget(titleLabel,1,Qt::AlignCenter);



    vLeftLayout = new QVBoxLayout();
    vLeftLayout->setSpacing(15);
    vLeftLayout->setContentsMargins(10,50,20,50);

    tipLabel = new QLabel("Please swap member card\nor input your card number");
    tipLabel->setFont(QFont("Trebuchet",20,QFont::Bold));

    edit = new QLineEdit("0");
    edit->setFont(QFont("Trebuchet",20,QFont::Bold));

    vLeftLayout->addWidget(tipLabel);
    vLeftLayout->addWidget(edit);

    // create tool button

    for (int i = 0 ; i < NumDigitButton; ++i) {
        digitButtons[i] = createButton(QString::number(i) , SLOT(digitClicked()));
        digitButtons[i]->setFont(QFont("Trebuchet",20,QFont::Bold));
    }

    Button *pointButton = createButton(tr("."),SLOT(pointClicked()));
    Button *backspaceButton = createButton(tr("<"),SLOT(backspaceClicked()));

    QGridLayout *mainLayout = new QGridLayout();

    for (int i = 1; i < NumDigitButton; ++i) {
        int row = (9 -i) /3 + 1;
        int column = ((i -1) %3 ) +1;
        qDebug("row = %d , column = %d",row,column);
        mainLayout->addWidget(digitButtons[i],row,column);
    }

    mainLayout->addWidget(digitButtons[0],4,1);
    mainLayout->addWidget(pointButton,4,2);
    mainLayout->addWidget(backspaceButton,4,3);


    vRightLayout = new QVBoxLayout();
    vRightLayout->setContentsMargins(0,50,20,50);
    vRightLayout->setSpacing(5);
    vRightLayout->addLayout(mainLayout);

    // Bottom

    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);



    nextButton = new QPushButton("NEXT");
   // sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
    nextButton->setFont(QFont("Trebuchet",24,QFont::Bold));
    nextButton->setSizePolicy(sizePolicy1);
    backButton = new QPushButton("Back");
    //sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
    backButton->setFont(QFont("Trebuchet",24,QFont::Bold));
    backButton->setSizePolicy(sizePolicy1);
    cancelButton = new QPushButton("Cancel");
    cancelButton->setFont(QFont("Trebuchet",24,QFont::Bold));
    //sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
    cancelButton->setSizePolicy(sizePolicy1);

    hBottomLayout->addStretch(0);
    hBottomLayout->addWidget(cancelButton);
    hBottomLayout->addWidget(backButton);
    hBottomLayout->addWidget(nextButton);
    hBottomLayout->setContentsMargins(0,0,20,20);



    hButtonLayout = new QHBoxLayout();

    hButtonLayout->addLayout(vLeftLayout);
    hButtonLayout->addLayout(vRightLayout);

    vMainLayout->addLayout(hTitleLayout);
    vMainLayout->addLayout(hButtonLayout);
    vMainLayout->addLayout(hBottomLayout);
    //vMainLayout->setContentsMargins(0,0,0,30);

    setLayout(vMainLayout);
    //setStyleSheet("background-image: url(:/home/james/work/qt/Dragonball/image/image-bg.jpg)");
    //create button

    QPixmap bkgnd("./image/image-bg.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}


Button *InputReader::createButton(const QString &text, const char *member)
{
    Button *button = new Button(text);
    connect(button,SIGNAL(clicked()),this,member);
    return button;
}


void InputReader::digitClicked()
{
    Button *clickButton = qobject_cast<Button *> (sender());
    int digitValue = clickButton->text().toInt();
    if (edit->text() == "0" && digitValue == 0.0)
            return;
    edit->setText(edit->text() + QString::number(digitValue));

}

void InputReader::clear()
{

}

void InputReader::pointClicked()
{
    if (!edit->text().contains("."))
        edit->setText(edit->text() + tr("."));
}

void InputReader::backspaceClicked()
{
    QString text = edit->text();
    text.chop(1);
    if (text.isEmpty()) {
        text = "0";
    }

    edit->setText(text);
}
