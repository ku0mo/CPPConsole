#include <iostream>
#include "IntArray.h"
using namespace std;

void AddIntArray(IntArray& ia) // ��� �ڵ�
{
	cout << "���� �Է�:";
	int data;
	cin >> data;
	//if( ia.size < 100 ) // �뷮 ������� ���� ����! �����ϵ��� -> �׷��� ���ؼ� ���� ����� �ʿ��� ����� ���� � ��������
	if (ia.size < ia.capacity)
		ia.dArray[ia.size++] = data;
}
void PrintIntArray(const IntArray& ia) // ��� �ڵ�
{
	for (int i = 0; i < ia.size; ++i)
		cout << "[" << i << "]: " << ia.dArray[i] << endl;
}
void SearchIntArray(const IntArray& ia) // ��� �ڵ�
{
	cout << "�˻��� ���� �Է�:";
	int data;
	cin >> data;
	for (int i = 0; i < ia.size; ++i)
		if (ia.dArray[i] == data) // ��� ������ ���ؼ�
		{
			cout << "�˻� ����: ";
			cout << "[" << i << "]:" << ia.dArray[i] << endl;
		}
}
void RemoveIntArray(IntArray& ia) // ��� �ڵ�
{
	cout << "������ ���� �Է�:";
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
	ia.dArray = new int[capacity]; //Ŭ���̾�Ʈ�� �Է��� ���� ��ŭ �޸𸮸� �����Ѵ�.
	ia.size = 0;
}
void UninitIntArray(IntArray& ia)
{
	delete[] ia.dArray;
}