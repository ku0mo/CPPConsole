// 메소드의 시그니쳐만
#pragma once
namespace MyName
{
	class IntArray
	{
		int* buf;
		int size;
		int capacity;
	public:
		IntArray(int cap = 100);
		IntArray(const IntArray& arg);
		~IntArray();
		void Add(int data);
		int Size() const;
		int At(int idx) const;

	};
}