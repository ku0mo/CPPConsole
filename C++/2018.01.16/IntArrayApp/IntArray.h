#pragma once // ��������� �� ���� �����ϰڴ� (��ó��)
struct IntArray
{
	int* dArray; // �޸��� ũ�⸦ �������� �ʱ� ���ؼ�
	int size;
	int capacity; // �޸��� �뷮�� �����ϱ� ���ؼ�
};
void AddIntArray(IntArray& ia); // ��� �ڵ�
void PrintIntArray(const IntArray& ia); // ��� �ڵ�
void SearchIntArray(const IntArray& ia); // ��� �ڵ�
void RemoveIntArray(IntArray& ia); // ��� �ڵ�
void InitIntArray(IntArray& ia, int capacity = 100); // ����� cpp �� �Ѵ� ����Ʈ ���� ������ �ȵ�
void UninitIntArray(IntArray& ia);
