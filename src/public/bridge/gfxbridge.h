#ifndef GFX_BRIDGE_H
#define GFX_BRIDGE_H

#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum UcodeHandlers {
    ucode_f3d,
    ucode_f3dex,
    ucode_f3dex2,
    ucode_s2dex,
    ucode_max,
} UcodeHandlers;

void GfxSetNativeDimensions(uint32_t width, uint32_t height);
void GfxGetPixelDepthPrepare(float x, float y);
uint16_t GfxGetPixelDepth(float x, float y);

#ifdef __cplusplus
}
#endif

#endif
