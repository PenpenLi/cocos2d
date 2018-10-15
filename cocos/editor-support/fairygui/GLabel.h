#ifndef __GLABEL_H__
#define __GLABEL_H__

#include "cocos2d.h"
#include "FairyGUIMacros.h"
#include "GComponent.h"

NS_FGUI_BEGIN

class GTextField;

class CC_DLL GLabel : public GComponent
{
public:
    GLabel();
    virtual ~GLabel();

    CREATE_FUNC(GLabel);

    const std::string& getTitle() { return _title; }
    void setTitle(const std::string& value);

    virtual const std::string& getText() const override { return _title; }
    virtual void setText(const std::string& value) override { setTitle(value); }

    virtual const std::string& getIcon() const override { return _icon; }
    virtual void setIcon(const std::string& value) override;

    cocos2d::Color3B getTitleColor() const;
    void setTitleColor(const cocos2d::Color3B& value);

    int getTitleFontSize() const;
    void setTitleFontSize(int value);

    GTextField* getTextField() const;

protected:
    virtual void constructExtension(ByteBuffer* buffer) override;
    virtual void setup_afterAdd(ByteBuffer* buffer, int beginPos) override;

private:
    GObject* _titleObject;
    GObject* _iconObject;
    std::string _title;
    std::string _icon;
};

NS_FGUI_END

#endif
