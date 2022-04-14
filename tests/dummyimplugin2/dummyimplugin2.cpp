#include "dummyimplugin2.h"

#include <QtPlugin>


QString DummyImPlugin2::name() const
{
    return "DummyImPlugin2";
}

MAbstractInputMethod *
DummyImPlugin2::createInputMethod(MAbstractInputMethodHost *)
{
    return 0;
}

QSet<Maliit::HandlerState> DummyImPlugin2::supportedStates() const
{
    QSet<Maliit::HandlerState> result;

    result << Maliit::OnScreen << Maliit::Hardware << Maliit::Accessory;
    return result;
}
