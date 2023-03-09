#ifndef COLORCOMBOBOX_H
#define COLORCOMBOBOX_H

#include <QComboBox>

class ColorComboBox : public QComboBox
{
    Q_OBJECT
public:
    explicit ColorComboBox(QWidget *parent = 0);
private slots:
    void currentIndexChanged(int index);

public:
    bool getShowColorName();
    QString getColorName();

public slots:
    void setShowColorName(bool showColorName);
    void setColorName(const QString &colorName);
    void initColorItems();

signals:
    //名称和颜色变化信号
    void colorChanged(const QString &colorName);
    void colorChanged(const QColor &color);

private:
    //是否显示英文名称
    bool menableColorName;
    //当前颜色名称
    QString mcolorName;
};

#endif // COLORCOMBOBOX_H
