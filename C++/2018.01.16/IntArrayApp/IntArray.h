#pragma once // 헤더파일을 한 번만 포함하겠다 (전처리)
struct IntArray
{
	int* dArray; // 메모리의 크기를 고정하지 않기 위해서
	int size;
	int capacity; // 메모리의 용량을 저장하기 위해서
};
void AddIntArray(IntArray& ia); // 기능 코드
void PrintIntArray(const IntArray& ia); // 기능 코드
void SearchIntArray(const IntArray& ia); // 기능 코드
void RemoveIntArray(IntArray& ia); // 기능 코드
void InitIntArray(IntArray& ia, int capacity = 100); // 헤더와 cpp 에 둘다 디폴트 값이 있으면 안됨
void UninitIntArray(IntArray& ia);
