#include "ColorComboxPluginDesigner.h"
#include "colorcombox.h"

ColorComboxPluginDesigner::ColorComboxPluginDesigner(QObject* parent) :
    QObject(parent),
    mInitialized(false)
{
}

QString ColorComboxPluginDesigner::name() const
{
    return "ColorComboBox";
}

QString ColorComboxPluginDesigner::group() const
{
    return "MyPlugin";
}

QString ColorComboxPluginDesigner::toolTip() const
{
    return "choose color from combobox";
}

QString ColorComboxPluginDesigner::whatsThis() const
{
    return "choose color value from combo";
}

QString ColorComboxPluginDesigner::includeFile() const
{
    return "colorcombox.h";
}

QIcon ColorComboxPluginDesigner::icon() const
{
    return QIcon(":/logo.png");
}

bool ColorComboxPluginDesigner::isContainer() const
{
    return false;
}

QWidget* ColorComboxPluginDesigner::createWidget(QWidget* parent)
{
    return new ColorComboBox(parent);
}

bool ColorComboxPluginDesigner::isInitialized() const
{
    return mInitialized;
}

void ColorComboxPluginDesigner::initialize(QDesignerFormEditorInterface* /*core*/)
{
    if (mInitialized)
        return;

    mInitialized = true;
}

