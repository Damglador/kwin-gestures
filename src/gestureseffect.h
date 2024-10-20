#pragma once

#include "effect/effect.h"
#include "inputfilter.h"
#include "virtualkeyboard.h"

class GesturesEffect : public KWin::Effect
{
public:
    GesturesEffect();
    ~GesturesEffect() override;

    static bool supported() { return true; };
    static bool enabledByDefault() { return false; };

    void reconfigure(ReconfigureFlags flags) override;

private:
    std::unique_ptr<GestureInputEventFilter> m_inputEventFilter;
};