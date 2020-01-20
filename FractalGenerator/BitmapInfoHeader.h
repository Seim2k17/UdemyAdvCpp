#pragma once

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace fractalCreator
{
    struct BitmapInfoHeader
    {
        int32_t headerSize{40};
        int32_t bitmapWidth;
        int32_t bitmapHeight;
        int16_t colorPlanes{1};
        // one byte for everry Color: RGB
        int16_t bitsPerPixel{24};
        int32_t compression{0};
        int32_t dataSize{0};
        int32_t horizontalResolution{2400};
        int32_t verticalResolution{2400};
        int32_t colors{0};
        int32_t importantColors{0};
    };
} // namespace fractalCreator

#pragma pack()