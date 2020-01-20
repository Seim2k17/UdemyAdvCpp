#pragma once

#include <cstdint>

using namespace std;

// pad on 2bytes boundary
#pragma pack(2)

namespace fractalCreator
{
    // Information about the bitmap-file we´ll write
    struct BitmapFileHeader
    {
        // for BitmapFiles it will start with "BM"
        char header[2]{'B', 'M'};
        // we need to guarantee that int is 32 bits (4bytes) ; e.g. on different platforms it happen that int has different sizes
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };
} // namespace fractalCreator

#pragma pack()