#include "colorcombox.h"

ColorComboBox::ColorComboBox(QWidget *parent) : QComboBox(parent),
  menableColorName(true)
{
    initColorItems();
    connect(this, SIGNAL(currentIndexChanged(int)), this, SLOT(slot_currentIndexChanged(int)));
}

void ColorComboBox::slot_currentIndexChanged(int index)
{
    if (index >= 0)
    {
        mcolorName = QColor::colorNames().at(index);
        emit colorChanged(mcolorName);
        emit colorChanged(QColor(mcolorName));
    }
}

bool ColorComboBox::getShowColorName()
{
    return menableColorName;
}

QString ColorComboBox::getColorName()
{
    return mcolorName;
}

void ColorComboBox::setShowColorName(bool showColorName)
{
    if (menableColorName != showColorName) {
        menableColorName = showColorName;
    }
}

void ColorComboBox::setColorName(QString colorName)
{
    if (mcolorName != colorName)
    {
        mcolorName = colorName;
        int index = QColor::colorNames().indexOf(colorName);
        this->setCurrentIndex(index);
    }
}

void ColorComboBox::initColorItems()
{
    clear();
    QStringList colorList = QColor::colorNames();
    for(QString strColor: colorList)
    {
        QPixmap pix(this->iconSize());
        pix.fill(strColor);
        this->addItem(QIcon(pix), menableColorName ? strColor : "");
    }
}
