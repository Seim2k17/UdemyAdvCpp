// A RingBuffer starts writing again at the beginning when Buffer is full and more Data needs to be written; so a MemoryCrash is prevented,
// but Data can be lost
// lecture 42

#pragma once
#include <queue>
#include <iostream>
#include <string>
using namespace std;

template <class T>
class RingBuffer
{
public:
	// as we can declare classes everywhere we can 
	// put implementation here would lead to ugly code (and its not good practice)
	// so we can put the implementation outside the class and mark the class as a subclass only with:
	class iterator;
};

template <class T>
//and we need here tp secify which is the BaseClass (befor ::)
class RingBuffer<T>::iterator
{
public:
	void print()
	{
		cout << "Call from Iterator as nested class from RingBuffer." << T() << endl;
	}
};

/* first own implementation for a templated ringbuffer
template<class T>
class RingBuffer
{
private:
    int maxSize;
	int curSize;
	queue<T> content;
	// tried also an array but when it´s coming to recopying values from one index to another I thought it´s not an efficient datastructure for this task, 
	// on the other side we can´t iterate through a deque or a queue, nvm

public:
    RingBuffer():maxSize(5),curSize(0)
    {
        cout << "Init Buffer in Container from Type: " << typeid(content).name() << endl;
    }

    RingBuffer(int _size)
        : maxSize(_size),curSize(0)
    {
		cout << "Init Buffer in Container from Type: " << typeid(content).name() << endl;
    }

    ~RingBuffer()
    {
    }

    int getMaxSize()
    {
        return maxSize;
    }

	int getCurrentSize()
	{
		return curSize;
	}

    void add(T element)
    {
		if (curSize != maxSize)
		{
			curSize++;
			content.push(element);
		}
		else 
		{
			content.pop();
			content.push(element);
		}

    }

    auto get(int index)
    {
		if (index > curSize)
		{
			cout << "There aren´t this much elements in the buffer. Size is " << curSize;
			string error = "Error";
			return error;
		}
		else
		{
			queue<T> tmp = content;
			while (curSize != index)
			{
				tmp.pop();
				curSize--;
			}

			return tmp.back();
		}
    }
};
*/

