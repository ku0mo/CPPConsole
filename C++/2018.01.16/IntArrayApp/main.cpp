#include <iostream>
#include "IntArray.h"
using namespace std;

void Menu() // UI �ڵ� main�� ����
{
	cout << "1. ���� �Է�" << endl;
	cout << "2. ���� ���" << endl;
	cout << "3. ���� �˻�" << endl;
	cout << "4. ���� ����" << endl;
	cout << "0. ���α׷� ����" << endl;
}
int main()
{
	IntArray ia;		 // ����ü�� ��� ���Ҹ� 0���� �ʱ�ȭ �϶�
						 // ���� �̷��� �ʱ�ȭ �ϴ� ���� ���� �ȵ�. ia �� Ŭ���̾�Ʈ! Ŭ���̾�Ʈ �ڵ忡���� ������� ��� �Ǿ��ִ����� ��!
						 // ������� �� �� ����.! �׷��� ���ΰ��� ����� �ʿ���. �ʱ�ȭ �ϴ� �Լ��� �� ����ؾ� ��
						 //ia�� ���Ұ� ����� �ִ��� ���� ���ϴ� ������ ����// Ŭ���̾�Ʈ�� �޸� � ������� ������ �� �ֵ��� ��! �ʱ�ȭ �Լ�����!
	bool run = true;
	InitIntArray(ia, 1000); //Ŭ���̾�Ʈ���� ������ ����!

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
	UninitIntArray(ia); // �׻� ��� ������ �ʱ�ȭ �ϰ�, �������ϴ� �Լ�(��ȯ)
}
