// A RingBuffer starts writing again at the beginning when Buffer is full and more Data needs to be written; so a MemoryCrash is prevented,
// but Data can be lost
// lecture 42 

#pragma once
#include <iostream>
#include <deque>
#include <string>

using namespace std;


template<class T>
class RingBuffer
{
private:
    int size;
    deque<T> content;

public:
    RingBuffer()
	{
		cout << "Init Buffer in Container from Type: " << typeid(content).name() << endl;
	};
    RingBuffer(int _size)
        : size(_size)
    {
    }
    ~RingBuffer(){};

	int getSize()
		{
		return size;
		}

	void add(T element)
	{
		if (content.size() == size)
		{
			content.pop_back();
			content.push_front(element);
		}
		else
		{
			content.push_back(element);
		}
	}

	auto get(int index)
	{
		int i = 1;
		for (auto el : content)
		{
			if (i == index)
			{
				return content.begin();
			}
			else
			{
				return content.end();
			}
		}
	}
};
