#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

template<class T>
class ring
{
private:
    // Pointer to a dynamic Array of Pointers
    int m_size;
    int m_pos;
    T* m_values;

public:
    class iterator;

public:
    ring()
        : m_size(0)
        , m_pos(0)
        , m_values(NULL)
    {
		
    }
    ring(int size)
        : m_size(size)
        , m_pos(0)
        , m_values(NULL)
    {
        // allocate size for a array / if we allocate memory we need to DEallocate the memory -> see Destructor
        m_values = new T[size];
    }
    ~ring()
    {
        delete[] m_values;
    };

    int size()
    {
        return m_size;
    }

    void add(T value)
    {
        m_values[m_pos] = value;
        m_pos++;

        if (m_pos == m_size)
        {
            m_pos = 0;
        }
    }

    T& get(int pos)
    {
        if (pos < m_size)
        {
            return m_values[pos];
        }

        cout << "Item out OF bounds. Last element Is" << endl;
        return m_values[m_size - 1];
    }
    // we have to pass the positions and a reference to the needed data (=this)
    iterator begin()
    {
        return iterator(0, *this);
    }

    iterator end()
    {
        return iterator(m_size, *this);
    }
};

template<class T>
class ring<T>::iterator
{
public:
    int m_pos;

    // no need to copy the whole ringBuffer so we need just a reference to it
    ring& m_ring;
// 
//     iterator()
//         : m_pos(0)
//         , m_ring(nullptr)
//     {
//     }

    iterator(int pos, ring& ringBuf)
        : m_pos(pos)
        , m_ring(ringBuf)
    {
    }

    // for incrementing the iterator we need to override the operator ++
    // for prefix ++ the operator don´t need a parameter; postfix need a parameter, but the parameter itself is useless and only there to differenciate btw. post and prefix !

    iterator& operator++()
    {
        m_pos++;
        return *this;
    }

    // for postfixOperator only add a parameterlist
    iterator& operator++(int bla)
    {
        m_pos++;
        return *this;
    }

    T& operator*()
    {
        return m_ring.get(m_pos);
    }

    bool operator!=(const iterator& other) const
    {
        return (m_pos != other.m_pos);
    }

    // just for testpurposes
    void print()
    {
        cout << "Print from finalNestedClass It" << typeid(T).name() << endl;
    }
};
