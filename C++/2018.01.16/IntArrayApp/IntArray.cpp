#include <iostream>
#include "IntArray.h"
using namespace std;

void AddIntArray(IntArray& ia) // 기능 코드
{
	cout << "정수 입력:";
	int data;
	cin >> data;
	//if( ia.size < 100 ) // 용량 사이즈보다 작을 때만! 가능하도록 -> 그렇기 위해선 상태 멤버가 필요함 사이즈가 현재 어떤 상태인지
	if (ia.size < ia.capacity)
		ia.dArray[ia.size++] = data;
}
void PrintIntArray(const IntArray& ia) // 기능 코드
{
	for (int i = 0; i < ia.size; ++i)
		cout << "[" << i << "]: " << ia.dArray[i] << endl;
}
void SearchIntArray(const IntArray& ia) // 기능 코드
{
	cout << "검색할 정수 입력:";
	int data;
	cin >> data;
	for (int i = 0; i < ia.size; ++i)
		if (ia.dArray[i] == data) // 모든 정수에 대해서
		{
			cout << "검색 정수: ";
			cout << "[" << i << "]:" << ia.dArray[i] << endl;
		}
}
void RemoveIntArray(IntArray& ia) // 기능 코드
{
	cout << "삭제할 정수 입력:";
	int data;
	cin >> data;
	for (int i = 0; i < ia.size; ++i)
		if (ia.dArray[i] == data)
		{
			for (int j = i; j < ia.size - 1; ++j)
				ia.dArray[j] = ia.dArray[j + 1];
			--ia.size;
			break;
		}
}
void InitIntArray(IntArray& ia, int capacity)
{
	ia.capacity = capacity;
	ia.dArray = new int[capacity]; //클라이언트가 입력한 개수 만큼 메모리를 생성한다.
	ia.size = 0;
}
void UninitIntArray(IntArray& ia)
{
	delete[] ia.dArray;
}