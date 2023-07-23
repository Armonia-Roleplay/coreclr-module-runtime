﻿#include "font.h"


#ifdef ALT_CLIENT_API
uint32_t Font_GetID(alt::IFont* font)
{
    return font->GetID();
}

alt::IBaseObject* Font_GetBaseObject(alt::IFont* font)
{
    return dynamic_cast<alt::IBaseObject*>(font);
}
#endif
