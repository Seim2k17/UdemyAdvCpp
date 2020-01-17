#pragma once

#include <cstdint>
#include <string>

using namespace std;

namespace fractalCreator
{
    class Bitmap
    {
        int m_width{0};
        int m_height{0};

        unique_ptr<uint8_t[]> m_pPixels{nullptr};

    public:
        Bitmap(int width, int height);
        void setPixel(int posX, int posY, uint8_t red, uint8_t green, uint8_t blue);
        bool write(string fileName);

		void showImagedata();

        virtual ~Bitmap();
    };
} // namespace fractalCreator
