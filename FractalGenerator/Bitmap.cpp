#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"
#include <cstdint>
#include <fstream>
#include <iostream>

using namespace fractalCreator;
using namespace std;

fractalCreator::Bitmap::Bitmap(int width, int height)
    : m_width(width)
    , m_height(height)
    , m_pPixels(new uint8_t[width * height * 3]{0}) // allocate widhtxheightxRGB bytes

{
}

fractalCreator::Bitmap::~Bitmap()
{
}

void fractalCreator::Bitmap::setPixel(int posX, int posY, uint8_t red, uint8_t green, uint8_t blue)
{
	// point at the start of the allocated Pixel-Mem
	uint8_t* pPixel = m_pPixels.get();

	// and move to the needed position
	pPixel += (posY *3 * m_width) + posX;
	
	pPixel[0] = blue;
	pPixel[1] = green;
	pPixel[2] = red;

}

bool fractalCreator::Bitmap::write(string fileName)
{
	
	
	
    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;

    fileHeader.fileSize = sizeof(BitmapInfoHeader) + sizeof(BitmapFileHeader)
                          + (m_height * m_height * 3);
    fileHeader.dataOffset = sizeof(BitmapInfoHeader) + sizeof(BitmapFileHeader);

    infoHeader.bitmapWidth = m_width;
    infoHeader.bitmapHeight = m_height;
	
	

    ofstream file;
	
    file.open(fileName, ios::out | ios::binary);


    // if st. like no writing rights
    if (!file)
    {
		cout << "Hm. An Etrror happen." << endl;
        return false;
    }

    //1rst arg is a char pointer, so ne adress of fileheader and cast to char*
    file.write((char*)&fileHeader, sizeof(fileHeader));
    file.write((char*)&infoHeader, sizeof(infoHeader));

	for(int ix =0;ix<m_width;ix++)
	{
		for(int iy=0;iy <m_height;iy++)
		{
			setPixel(ix,iy,23+5*ix,261+10*iy,112+4*ix+5*iy);
		}
			
	}
	


    // for the raw imagedata we need a raw pointer and enough space (imageSizeX*Y*RGB)
    file.write((char*)m_pPixels.get(), m_width * m_height * 3);

    file.close();
	
	cout << "Hm. Start writing." << endl;

    // if closing the file went bad
    if (!file)
    {
        return false;
    }

    return true;
}

void fractalCreator::Bitmap::showImagedata()
{
    for (int i = 0; i < (m_width * m_height * 3); i++)
    {
        cout << m_pPixels[i];
    }
}
