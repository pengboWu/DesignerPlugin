#ifndef COLORCOMBOXPLUGINDESIGNER_H
#define COLORCOMBOXPLUGINDESIGNER_H

#include <QtUiPlugin/QDesignerCustomWidgetInterface>

//通过继承实现QDesignerCustomWidgetInterface可以让QT的插件系统识别插件信息
class  ColorComboxPluginDesigner : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    //声明QT识别的唯一标识符
    Q_PLUGIN_METADATA(IID "org.masteringqt.customWidget.ColorComboxPluginInterface")
    Q_INTERFACES(QDesignerCustomWidgetInterface)
public:
    ColorComboxPluginDesigner(QObject* parent = 0);
    //插件的名称
    QString name() const override;

    //插件属于哪个组
    QString group() const override;

    //插件的提示信息
    QString toolTip() const override;

    //插件的描述信息
    QString whatsThis() const override;

    //应该包含哪个文件
    QString includeFile() const override;

    //插件对应的图标
    QIcon icon() const override;

    //是否是一个容器
    bool isContainer() const override;

    //创建对应的widget
    QWidget* createWidget(QWidget* parent) override;

    //判断是否初始化了
    bool isInitialized() const override;
    void initialize(QDesignerFormEditorInterface* core) override;

private:
    bool mInitialized;
};

#endif // COLORCOMBOXPLUGINDESIGNER_H
