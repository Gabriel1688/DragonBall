#include "button.h"
#include <QToolButton>

Button::Button(const QString &text, QWidget *parent)
    :QToolButton(parent)
{
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    setText(text);

}


QSize Button::sizeHint() const
{
    QSize size = QToolButton::sizeHint();
    size.rheight() += 20;
    size.rwidth() = qMax(size.width(),size.height());
}
