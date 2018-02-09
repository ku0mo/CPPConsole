#include "IntArray.h"
// ¹æ¹ý.1 namespace MyName
namespace MyName
{
	IntArray::IntArray(int cap)
	{
		capacity = cap;
		size = 0;
		buf = new int[capacity];
	}
	IntArray::IntArray(const IntArray& arg)
	{
		capacity = arg.capacity;
		size = arg.size;
		buf = new int[capacity];
		for (int i = 0; i < size; ++i)
			buf[i] = arg.buf[i];
	}
	IntArray::~IntArray()
	{
		delete[] buf;
	}
	void IntArray::Add(int data)
	{
		buf[size++] = data;
	}
	int IntArray::Size() const
	{
		return size;
	}
	int IntArray::At(int idx) const
	{
		return buf[idx];
	}
}