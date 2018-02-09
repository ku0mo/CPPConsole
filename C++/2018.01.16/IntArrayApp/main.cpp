#include <iostream>
#include "IntArray.h"
using namespace std;

void Menu() // UI 코드 main과 밀접
{
	cout << "1. 정수 입력" << endl;
	cout << "2. 정수 출력" << endl;
	cout << "3. 정수 검색" << endl;
	cout << "4. 정수 삭제" << endl;
	cout << "0. 프로그램 종료" << endl;
}
int main()
{
	IntArray ia;		 // 구조체의 모든 원소를 0으로 초기화 하라
						 // 원래 이렇게 초기화 하는 것은 말이 안됨. ia 는 클라이언트! 클라이언트 코드에서는 멤버들이 어떻게 되어있는지도 모름!
						 // 마음대로 할 수 없음.! 그래서 서로간에 약속이 필요함. 초기화 하는 함수를 꼭 사용해야 함
						 //ia가 원소가 몇개까지 있는지 알지 못하는 문제가 있음// 클라이언트가 메모리 몇개 사용할지 결정할 수 있도록 함! 초기화 함수에서!
	bool run = true;
	InitIntArray(ia, 1000); //클라이언트에게 사이즈 정함!

	while (run)
	{
		int n;
		Menu();
		cin >> n;

		switch (n)
		{
		case 1:
			AddIntArray(ia);
			break;
		case 2:
			PrintIntArray(ia);
			break;
		case 3:
			SearchIntArray(ia);
			break;
		case 4:
			RemoveIntArray(ia);
			break;
		case 0:
			run = false;
			break;
		}
	}
	UninitIntArray(ia); // 항상 모든 변수를 초기화 하고, 마무리하는 함수(반환)
}
