#ifndef __GIMAGE_H__
#define __GIMAGE_H__

#include "cocos2d.h"
#include "ui/UIScale9Sprite.h"
#include "FairyGUIMacros.h"
#include "GObject.h"

NS_FGUI_BEGIN

class CC_DLL GImage : public GObject, public IColorGear
{
public:
    GImage();
    virtual ~GImage();

    CREATE_FUNC(GImage);

    FlipType getFlip() const;
    void setFlip(FlipType value);

    cocos2d::Color3B getColor() const override { return _content->getColor(); }
    void setColor(const cocos2d::Color3B& value) override;

    virtual void constructFromResource() override;

protected:
    virtual void handleInit() override;
    virtual void handleSizeChanged() override;
    virtual void handleGrayedChanged() override;
    virtual void setup_beforeAdd(ByteBuffer* buffer, int beginPos) override;

private:
    cocos2d::Sprite* _content;
};

NS_FGUI_END

#endif
