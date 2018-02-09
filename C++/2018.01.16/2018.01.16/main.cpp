#include <iostream>
#include <cstdlib>
using namespace std;

///////////////////////Point Ŭ���� ���� ////////////// Ŭ������ ���Ǵ� header�� �� ������ �˰� Ŭ���̾�Ʈ�� �˾ƾ� ������
////////////////point.h////////////
class Point
{
	int x;
	int y;
public: //  Ŭ���� �ۿ���
	Point(int _x = 0, int _y = 0);
	void Print() const;
};

//////////////////////// ��� �Լ� ����(����) ///////////////
////////////point.cpp ////////////////////////
Point::Point(int _x, int _y) 
{
	x = _x;
	y = _y;
}
void Point::Print() const // ���ο� ���� ����� �������� �ʰڴٴ� ��. (read�� ����)
{
	cout << x << ',' << y << endl;
}

/////// main.cpp
int main()
{
	Point pt1(2, 3);
	pt1.Print();

	system("pause");
}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//	//private: // Ŭ���� �ȿ����� ��� ���� // �����ϸ� ���� �Ӽ��� ���� ������ �ڵ����� ������
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point(int _x = 0, int _y = 0) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const // ���ο� ���� ����� �������� �ʰڴٴ� ��. (read�� ����)
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	Point pt1(2, 3);
//	pt1.Print();
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//	//private: // Ŭ���� �ȿ����� ��� ���� // �����ϸ� ���� �Ӽ��� ���� ������ �ڵ����� ������
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point(int _x = 0, int _y = 0) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const // ���ο� ���� ����� �������� �ʰڴٴ� ��. (read�� ����)
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	Point pt1(2, 3); // ���� ������ ��ü (R,W ����)
//	const Point pt2; // ���� �Ұ����� ��ü��� �� (R�� ����)
//
//	pt1.SetX(1); // ���� ����
//	//pt2.SetX(1); // ���� �Ұ��� const �޼ҵ��� �� 
//	pt2.GetX();
//	/*
//	�ܽ�Ʈ �޼���� �ܽ�Ʈ ��ü�� ȣ�� �� �� ����
//	*/
//
//	pt1.SetX(pt1.GetX() * 2);
//	pt1.SetY(pt1.GetY() * 2);
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}



//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//	//private: // Ŭ���� �ȿ����� ��� ���� // �����ϸ� ���� �Ӽ��� ���� ������ �ڵ����� ������
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point() { x = 0; y = 0; } // �Լ� �ߺ�
//	Point(int _x, int _y) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const // ���ο� ���� ����� �������� �ʰڴٴ� ��.
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	Point pt1(2, 3), pt2;
//	pt1.SetX(pt1.GetX() * 2);
//	pt1.SetY(pt1.GetY() * 2);
//
//	pt1.Print();
//	pt2.Print();
//
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
////private: // Ŭ���� �ȿ����� ��� ���� // �����ϸ� ���� �Ӽ��� ���� ������ �ڵ����� ������
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point() { x = 0; y = 0; } // �Լ� �ߺ�
//	Point(int _x, int _y) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	Point pt1(2, 3), pt2;
//	pt1.SetX(pt1.GetX() * 2);
//	pt1.SetY(pt1.GetY() * 2);
//
//	pt1.Print();
//	pt2.Print();
//
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//private: // Ŭ���� �ȿ����� ��� ����
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point(int _x = 0, int _y = 0) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	Point pt1(2, 3), pt2;
//	pt1.SetX(pt1.GetX() * 2);
//	pt1.SetY(pt1.GetY() * 2);
//
//	pt1.Print();
//	pt2.Print();
//
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//private: // Ŭ���� �ȿ����� ��� ����
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point(int _x = 0, int _y = 0) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//int main()
//{
//	Point pt1(2, 3)/* 2,3���� �ʱ�ȭ�� ��*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.SetX(5); // �޼��� " x���� 5�� �ٲ���!"
//	pt2.SetX(9);
//
//	cout << pt1.GetX() << ',' << pt1.GetY() << endl;
//	pt2.Print();
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//private: // Ŭ���� �ȿ����� ��� ����
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point(int _x = 0, int _y = 0) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void SetX(int _x) { x = _x; }
//	void SetY(int _y) { y = _y; }
//};
//
//int main()
//{
//	Point pt1(2, 3)/* 2,3���� �ʱ�ȭ�� ��*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.SetX(5); // �޼��� " x���� 5�� �ٲ���!"
//	pt2.SetX(9);
//
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}



//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//private: // Ŭ���� �ȿ����� ��� ����
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point(int _x = 0, int _y = 0) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point pt1(2, 3)/* 2,3���� �ʱ�ȭ�� ��*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}



///*
//��ü ����(Object Oriented)�� �ٽ����� ���
//1. ĸ��ȭ
//2. ���
//3. ������
//*/
//
//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//private: // Ŭ���� �ȿ����� ��� ����
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	Point(int _x = 0, int _y = 0) // ��ü�� �����ǰ� �ʱ�ȭ �� �ʿ䰡 ���� �� �ڵ������� ȣ�� �Ǵ� �޼��� : ������ ( Ŭ���� �̸��� �Ȱ��� �޼��� ) : �ʱ�ȭ�� ��ǥ�� �ϱ⶧���� return ���� ����.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point pt1(2,3)/* 2,3���� �ʱ�ȭ�� ��*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}





///*
//��ü ����(Object Oriented)�� �ٽ����� ���
//1. ĸ��ȭ
//2. ���
//3. ������
//*/
//
//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{
//private: // Ŭ���� �ȿ����� ��� ����
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//		Print();
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point pt1, pt2;
//
//	pt1.Init(2, 3); //Messege ( �޼ҵ带 ȣ���ϴ� ���� �޼����� �����ٰ� �� )
//	pt2.Init(5, 7);
//	// pt1.x = 7 ; // ������ (private �����) ���� �Ұ���
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}




///*
//��ü ����(Object Oriented)�� �ٽ����� ���
//1. ĸ��ȭ
//2. ���
//3. ������
//*/
//
//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//class Point
//{ 
//private: // Ŭ���� �ȿ����� ��� ����
//	int x;
//	int y;
//public: //  Ŭ���� �ۿ���
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point pt1, pt2;
//
//	pt1.Init(2, 3); //Messege ( �޼ҵ带 ȣ���ϴ� ���� �޼����� �����ٰ� �� )
//	pt2.Init(5, 7);
//	// pt1.x = 7 ; // ������ (private �����) ���� �Ұ���
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//struct Point
//{ // �ʵ� // ��� ���� // ������Ƽ // Ư�� // �Ӽ� // ���� (����) �� ���� ��
//	int x;
//	int y;
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point pt1, pt2;
//
//	pt1.Init(2, 3); //Messege ( �޼ҵ带 ȣ���ϴ� ���� �޼����� �����ٰ� �� )
//	pt2.Init(5, 7);
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//struct Point
//{ // �ʵ� // ��� ���� // ������Ƽ // Ư�� // �Ӽ� // ���� (����) �� ���� ��
//	int x;
//	int y;
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point pt1, pt2;
//
//	pt1.Init(2, 3);
//	pt2.Init(5, 7);
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}

//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//struct Point
//{ // �ʵ� // ��� ���� // ������Ƽ // Ư�� // �Ӽ� // ���� (����) �� ���� ��
//	int x;
//	int y;
//	void Init(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//
//int main()
//{
//	//Point pt1 = { 2, 3 }, pt2 = { 5, 8 }; 
//	//�����δ� �ʱ�ȭ�� �̷��� �Ұž�
//
//	Point pt1, pt2;
//	// pt1.x = 10; // ��ü���⿡���� �̷��� ���� ���� �̷��� �ϸ� ĸ��ȭ�� ���� ĸ��ȭ�� ������, �������� ���� ( �׻� �������̽�(�޼ҵ�, �Լ�)�� ���ؼ� ��ü�� �̾߱� ��)
//	pt1.Init(2, 3);
//	pt2.Init(5, 7);
//	cout << pt1.x << ',' << pt1.y << endl; // ���� �����ͼ� ����ϸ� �� ����! ��? ( ���� ��� x, y�� �α� ������ ����� �ʹٰ� �غ�, �� ��� ������� �̷��� ���� �ȵ�)
//	system("pause");
//}





//#include <iostream>
//using namespace std;
///* ��ü�� �������� �־�� �Ѵ�.!!! */
//struct Point 
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	Point pt1 = { 2, 3 }, pt2 = { 5, 8 };
//
//	cout << pt1.x << ',' << pt1.y << endl;
//	system("pause");
//}


//#include <iostream>
//using namespace std;
//
//struct IntArray
//{
//	int* dArray; 
//	int size;
//	int capacity;
//
//	void Add()
//	{
//		cout << "���� �Է�:";
//		int data;
//		cin >> data;
//		if (size < capacity)
//			dArray[size++] = data;
//	}
//	void Print() // ��� �ڵ�
//	{
//		for (int i = 0; i < size; ++i)
//			cout << "[" << i << "]: " << dArray[i] << endl;
//	}
//	void Search() // ��� �ڵ�
//	{
//		cout << "�˻��� ���� �Է�:";
//		int data;
//		cin >> data;
//		for (int i = 0; i < size; ++i)
//			if (dArray[i] == data) // ��� ������ ���ؼ�
//			{
//				cout << "�˻� ����: ";
//				cout << "[" << i << "]:" << dArray[i] << endl;
//			}
//	}
//	void Remove() // ��� �ڵ�
//	{
//		cout << "������ ���� �Է�:";
//		int data;
//		cin >> data;
//		for (int i = 0; i < size; ++i)
//			if (dArray[i] == data)
//			{
//				for (int j = i; j < size - 1; ++j)
//					dArray[j] = dArray[j + 1];
//				--size;
//				break;
//			}
//	}
//	void Init(int cap = 100)
//	{
//		capacity = cap;
//		dArray = new int[capacity]; //Ŭ���̾�Ʈ�� �Է��� ���� ��ŭ �޸𸮸� �����Ѵ�.
//		size = 0;
//	}
//	void Uninit()
//	{
//		delete[] dArray;
//	}
//};
//void Menu() // UI �ڵ� main�� ����
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	IntArray ia, ia2, ia3; // �������� ��� ������, ��� �Լ��� ���������. // ��ü�� �������!
//
//	bool run = true;
//	ia.Init(1000); //Ŭ���̾�Ʈ���� ������ ����!
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			ia.Add();
//			break;
//		case 2:
//			ia.Print();
//			break;
//		case 3:
//			ia.Search();
//			break;
//		case 4:
//			ia.Remove();
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	ia.Uninit(); // �׻� ��� ������ �ʱ�ȭ �ϰ�, �������ϴ� �Լ�(��ȯ)
//}



//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	// ��� ���� ( ���� ���� )
//	//int dArray[100]; // ���� �迭 ( ������ �ܰ迡 ũ�Ⱑ ������ )
//	int* dArray; // �޸��� ũ�⸦ �������� �ʱ� ���ؼ�
//	int size;
//	int capacity; // �޸��� �뷮�� �����ϱ� ���ؼ�
//
//	// ��� �Լ� 
//	void Add() // ��� �ڵ�
//	{
//		cout << "���� �Է�:";
//		int data;
//		cin >> data;
//		//if( ia.size < 100 ) // �뷮 ������� ���� ����! �����ϵ��� -> �׷��� ���ؼ� ���� ����� �ʿ��� ����� ���� � ��������
//		if (size < capacity)
//			dArray[size++] = data;
//	}
//	void Print() // ��� �ڵ�
//	{
//		/*	for (int i = 0; i < ia.size; ++i)
//			cout << "[" << i << "]: " << ia.dArray[i] << endl;*/
//		for (int i = 0; i < size; ++i)
//			cout << "[" << i << "]: " << dArray[i] << endl;
//	}
//	void Search() // ��� �ڵ�
//	{
//		//cout << "�˻��� ���� �Է�:";
//		//int data;
//		//cin >> data;
//		//for (int i = 0; i < ia.size; ++i)
//		//	if (ia.dArray[i] == data) // ��� ������ ���ؼ�
//		//	{
//		//		cout << "�˻� ����: ";
//		//		cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		//	}
//		cout << "�˻��� ���� �Է�:";
//		int data;
//		cin >> data;
//		for (int i = 0; i < size; ++i)
//			if (dArray[i] == data) // ��� ������ ���ؼ�
//			{
//				cout << "�˻� ����: ";
//				cout << "[" << i << "]:" << dArray[i] << endl;
//			}
//	}
//	void Remove() // ��� �ڵ�
//	{
//		//cout << "������ ���� �Է�:";
//		//int data;
//		//cin >> data;
//		//for (int i = 0; i < ia.size; ++i)
//		//	if (ia.dArray[i] == data)
//		//	{
//		//		for (int j = i; j < ia.size - 1; ++j)
//		//			ia.dArray[j] = ia.dArray[j + 1];
//		//		--ia.size;
//		//		break;
//		//	}
//		cout << "������ ���� �Է�:";
//		int data;
//		cin >> data;
//		for (int i = 0; i < size; ++i)
//			if (dArray[i] == data)
//			{
//				for (int j = i; j < size - 1; ++j)
//					dArray[j] = dArray[j + 1];
//				--size;
//				break;
//			}
//	}
//	void Init(int cap = 100)
//	{
//		//ia.capacity = capacity;
//		//ia.dArray = new int[capacity]; //Ŭ���̾�Ʈ�� �Է��� ���� ��ŭ �޸𸮸� �����Ѵ�.
//		//ia.size = 0;
//		capacity = cap;
//		dArray = new int[capacity]; //Ŭ���̾�Ʈ�� �Է��� ���� ��ŭ �޸𸮸� �����Ѵ�.
//		size = 0;
//	}
//	void Uninit()
//	{
//		delete[] dArray;
//	}
//};
//void Menu() // UI �ڵ� main�� ����
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	IntArray ia;		 // ����ü�� ��� ���Ҹ� 0���� �ʱ�ȭ �϶�
//						 // ���� �̷��� �ʱ�ȭ �ϴ� ���� ���� �ȵ�. ia �� Ŭ���̾�Ʈ! Ŭ���̾�Ʈ �ڵ忡���� ������� ��� �Ǿ��ִ����� ��!
//						 // ������� �� �� ����.! �׷��� ���ΰ��� ����� �ʿ���. �ʱ�ȭ �ϴ� �Լ��� �� ����ؾ� ��
//						 //ia�� ���Ұ� ����� �ִ��� ���� ���ϴ� ������ ����// Ŭ���̾�Ʈ�� �޸� � ������� ������ �� �ֵ��� ��! �ʱ�ȭ �Լ�����!
//	bool run = true;
//	ia.Init(1000); //Ŭ���̾�Ʈ���� ������ ����!
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			ia.Add();
//			break;
//		case 2:
//			ia.Print();
//			break;
//		case 3:
//			ia.Search();
//			break;
//		case 4:
//			ia.Remove();
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	ia.Uninit(); // �׻� ��� ������ �ʱ�ȭ �ϰ�, �������ϴ� �Լ�(��ȯ)
//}



//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	//int dArray[100]; // ���� �迭 ( ������ �ܰ迡 ũ�Ⱑ ������ )
//	int* dArray; // �޸��� ũ�⸦ �������� �ʱ� ���ؼ�
//	int size;
//	int capacity; // �޸��� �뷮�� �����ϱ� ���ؼ�
//};
//
//void AddIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "���� �Է�:";
//	int data;
//	cin >> data;
//	//if( ia.size < 100 ) // �뷮 ������� ���� ����! �����ϵ��� -> �׷��� ���ؼ� ���� ����� �ʿ��� ����� ���� � ��������
//	if (ia.size < ia.capacity)
//		ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	cout << "�˻��� ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // ��� ������ ���ؼ�
//		{
//			cout << "�˻� ����: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "������ ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//				ia.dArray[j] = ia.dArray[j + 1];
//			--ia.size;
//			break;
//		}
//}
//void InitIntArray(IntArray& ia, int capacity = 100)
//{
//	ia.capacity = capacity;
//	ia.dArray = new int[capacity]; //Ŭ���̾�Ʈ�� �Է��� ���� ��ŭ �޸𸮸� �����Ѵ�.
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//void Menu() // UI �ڵ� main�� ����
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	IntArray ia;		 // ����ü�� ��� ���Ҹ� 0���� �ʱ�ȭ �϶�
//						 // ���� �̷��� �ʱ�ȭ �ϴ� ���� ���� �ȵ�. ia �� Ŭ���̾�Ʈ! Ŭ���̾�Ʈ �ڵ忡���� ������� ��� �Ǿ��ִ����� ��!
//						 // ������� �� �� ����.! �׷��� ���ΰ��� ����� �ʿ���. �ʱ�ȭ �ϴ� �Լ��� �� ����ؾ� ��
//						 //ia�� ���Ұ� ����� �ִ��� ���� ���ϴ� ������ ����// Ŭ���̾�Ʈ�� �޸� � ������� ������ �� �ֵ��� ��! �ʱ�ȭ �Լ�����!
//	bool run = true;
//	InitIntArray(ia, 1000); //Ŭ���̾�Ʈ���� ������ ����!
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchIntArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	UninitIntArray(ia); // �׻� ��� ������ �ʱ�ȭ �ϰ�, �������ϴ� �Լ�(��ȯ)
//}




//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	//int dArray[100]; // ���� �迭 ( ������ �ܰ迡 ũ�Ⱑ ������ )
//	int* dArray; // �޸��� ũ�⸦ �������� �ʱ� ���ؼ�
//	int size;
//	int capacity; // �޸��� �뷮�� �����ϱ� ���ؼ�
//};
//
//void AddIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "���� �Է�:";
//	int data;
//	cin >> data;
//	//if( ia.size < 100 ) // �뷮 ������� ���� ����! �����ϵ��� -> �׷��� ���ؼ� ���� ����� �ʿ��� ����� ���� � ��������
//	if (ia.size < ia.capacity)
//		ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	cout << "�˻��� ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // ��� ������ ���ؼ�
//		{
//			cout << "�˻� ����: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "������ ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//				ia.dArray[j] = ia.dArray[j + 1];
//			--ia.size;
//			break;
//		}
//}
//void InitIntArray(IntArray& ia, int capacity = 100)
//{
//	ia.capacity = capacity;
//	ia.dArray = new int[capacity]; //Ŭ���̾�Ʈ�� �Է��� ���� ��ŭ �޸𸮸� �����Ѵ�.
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//void Menu() // UI �ڵ� main�� ����
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	IntArray ia;		 // ����ü�� ��� ���Ҹ� 0���� �ʱ�ȭ �϶�
//						 // ���� �̷��� �ʱ�ȭ �ϴ� ���� ���� �ȵ�. ia �� Ŭ���̾�Ʈ! Ŭ���̾�Ʈ �ڵ忡���� ������� ��� �Ǿ��ִ����� ��!
//						 // ������� �� �� ����.! �׷��� ���ΰ��� ����� �ʿ���. �ʱ�ȭ �ϴ� �Լ��� �� ����ؾ� ��
//						 //ia�� ���Ұ� ����� �ִ��� ���� ���ϴ� ������ ����// Ŭ���̾�Ʈ�� �޸� � ������� ������ �� �ֵ��� ��! �ʱ�ȭ �Լ�����!
//	bool run = true;
//	InitIntArray(ia, 1000); //Ŭ���̾�Ʈ���� ������ ����!
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchIntArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	UninitIntArray(ia); // �׻� ��� ������ �ʱ�ȭ �ϰ�, �������ϴ� �Լ�(��ȯ)
//}


//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	//int dArray[100]; // ���� �迭 ( ������ �ܰ迡 ũ�Ⱑ ������ )
//	int* dArray; // �޸��� ũ�⸦ �������� �ʱ� ���ؼ�
//	int size;
//};
//
//void AddIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "���� �Է�:";
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	cout << "�˻��� ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // ��� ������ ���ؼ�
//		{
//			cout << "�˻� ����: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "������ ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//				ia.dArray[j] = ia.dArray[j + 1];
//			--ia.size;
//			break;
//		}
//}
//void InitIntArray(IntArray& ia, int capacity = 100)
//{
//	ia.dArray = new int[capacity]; //Ŭ���̾�Ʈ�� �Է��� ���� ��ŭ �޸𸮸� �����Ѵ�.
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//void Menu() // UI �ڵ� main�� ����
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	IntArray ia;		 // ����ü�� ��� ���Ҹ� 0���� �ʱ�ȭ �϶�
//						 // ���� �̷��� �ʱ�ȭ �ϴ� ���� ���� �ȵ�. ia �� Ŭ���̾�Ʈ! Ŭ���̾�Ʈ �ڵ忡���� ������� ��� �Ǿ��ִ����� ��!
//						 // ������� �� �� ����.! �׷��� ���ΰ��� ����� �ʿ���. �ʱ�ȭ �ϴ� �Լ��� �� ����ؾ� ��
//
//	//ia�� ���Ұ� ����� �ִ��� ���� ���ϴ� ������ ����// Ŭ���̾�Ʈ�� �޸� � ������� ������ �� �ֵ��� ��! �ʱ�ȭ �Լ�����!
//	InitIntArray(ia, 1000);
//
//	bool run = true;
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchIntArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	UninitIntArray(ia); // �׻� ��� ������ �ʱ�ȭ �ϰ�, �������ϴ� �Լ�(��ȯ)
//}




//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	int dArray[100];
//	int size;
//};
//
//void AddIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "���� �Է�:";
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	cout << "�˻��� ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // ��� ������ ���ؼ�
//		{
//			cout << "�˻� ����: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "������ ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//				ia.dArray[j] = ia.dArray[j + 1];
//			--ia.size;
//			break;
//		}
//}
//void InitIntArray(IntArray& ia)
//{
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//
//}
//void Menu() // UI �ڵ� main�� ����
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	IntArray ia = { 0 }; // ����ü�� ��� ���Ҹ� 0���� �ʱ�ȭ �϶�
//	// ���� �̷��� �ʱ�ȭ �ϴ� ���� ���� �ȵ�. ia �� Ŭ���̾�Ʈ! Ŭ���̾�Ʈ �ڵ忡���� ������� ��� �Ǿ��ִ����� ��!
//	// ������� �� �� ����.! �׷��� ���ΰ��� ����� �ʿ���. �ʱ�ȭ �ϴ� �Լ��� �� ����ؾ� ��
//
//	InitIntArray(ia);
//
//	bool run = true;
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchIntArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	UninitIntArray(ia); // �׻� ��� ������ �ʱ�ȭ �ϰ�, �������ϴ� �Լ�(��ȯ)
//}




//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	int dArray[100];
//	int size;
//};
//
//void AddIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "���� �Է�:";
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // ��� �ڵ�
//{
//	cout << "�˻��� ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // ��� ������ ���ؼ�
//		{
//			cout << "�˻� ����: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // ��� �ڵ�
//{
//	cout << "������ ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data)
//		{
//			for (int j = i; j < ia.size - 1; ++j)
//				ia.dArray[j] = ia.dArray[j + 1];
//			--ia.size;
//			break;
//		}
//}
//void Menu() // UI �ڵ� main�� ����
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	IntArray ia = { 0 }; // ����ü�� ��� ���Ҹ� 0���� �ʱ�ȭ �϶�
//
//	bool run = true;
//
//	while (run)
//	{
//		int n;
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(ia);
//			break;
//		case 2:
//			PrintIntArray(ia);
//			break;
//		case 3:
//			SearchIntArray(ia);
//			break;
//		case 4:
//			RemoveIntArray(ia);
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//}




//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//void AddIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//	cout << "���� �Է�:";
//	int data;
//	cin >> data;
//	dArray[size++] = data;
//}
//void PrintIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//	for (int i = 0; i < size; ++i)
//		cout << "[" << i << "]: " << dArray[i] << endl;
//}
//void SearchIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//	cout << "�˻��� ���� �Է�:";
//	int data;
//	cin >> data;
//	for(int i = 0; i < size; ++i)
//		if (dArray[i] == data) // ��� ������ ���ؼ�
//		{
//			cout << "�˻� ����: ";
//			cout << "[" << i << "]:" << dArray[i] << endl;
//		}
//}
//void RemoveIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//	cout << "������ ���� �Է�:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < size; ++i)
//		if (dArray[i] == data)
//		{
//			for (int j = i; j < size - 1; ++j)
//				dArray[j] = dArray[j + 1];
//			--size;
//			break;
//		}
//}
//void Menu() // UI �ڵ�
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	int dArray[100];
//	int size = 0;
//	bool run = true;
//	int n;
//	while (run)
//	{
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(dArray, size);
//			break;
//		case 2:
//			PrintIntArray(dArray, size);
//			break;
//		case 3:
//			SearchIntArray(dArray, size);
//			break;
//		case 4:
//			RemoveIntArray(dArray, size);
//			break;
//		case 0 :
//			run = false;
//			break;
//		}
//	}
//}


//#include <iostream> // ���� ����
//#include <stdlib.h>
//using namespace std;
//int main()
//{ // �迭���� ������ ���Ŵ� ���� �Է��� ���� ������ �� ó�� �Ǵ� ��
//	int arr[100] = { 40, 50, 60, 70, 80 };
//	int size = 5;
//
//	for (int i = 1; i < size - 1; ++i)
//		arr[i] = arr[i + 1];
//	--size;
//
//	for (int i = 0; i < size; ++i)
//		cout << "[" << i << "]:" << arr[i] << endl;
//
//	system("pause");
//}



//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//void AddIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//	cout << "���� �Է�:";
//	int data;
//	cin >> data;
//	dArray[size++] = data;
//}
//void PrintIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//	for (int i = 0; i < size; ++i)
//		cout << "[" << i << "]: " << dArray[i] << endl;
//}
//void SearchIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//	cout << "�˻� ���� �Է�:";
//	int data;
//	cin >> data;
//	for(int i = 0; i < size; ++i)
//		if (dArray[i] == data) // ��� ������ ���ؼ�
//		{
//			cout << "�˻� ����: ";
//			cout << "[" << i << "]:" << dArray[i] << endl;
//		}
//}
//void RemoveIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//
//}
//void Menu() // UI �ڵ�
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	int dArray[100];
//	int size = 0;
//	bool run = true;
//	int n;
//	while (run)
//	{
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(dArray, size);
//			break;
//		case 2:
//			PrintIntArray(dArray, size);
//			break;
//		case 3:
//			SearchIntArray(dArray, size);
//			break;
//		case 0:
//			RemoveIntArray(dArray, size);
//			run = false;
//			break;
//		}
//	}
//}



//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//void AddIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//	dArray[size++] = 100 + size;
//}
//void PrintIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//	for (int i = 0; i < size; ++i)
//		cout << "[" << i << "]: " << dArray[i] << endl;
//}
//void SearchIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//
//}
//void RemoveIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//
//}
//void Menu() // UI �ڵ�
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	int dArray[100];
//	int size = 0;
//	bool run = true;
//	int n;
//	while (run)
//	{
//		Menu();
//		cin >> n;
//
//		switch (n)
//		{
//		case 1:
//			AddIntArray(dArray, size);
//			break;
//		case 2:
//			PrintIntArray(dArray, size);
//			break;
//		case 3:
//			SearchIntArray(dArray, size);
//			break;
//		case 0:
//			RemoveIntArray(dArray, size);
//			run = false;
//			break;
//		}
//	}
//}


//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//void AddIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//
//}
//void PrintIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//
//}
//void SearchIntArray(const int dArray[], int size) // ��� �ڵ�
//{
//
//}
//void RemoveIntArray(int dArray[], int& size) // ��� �ڵ�
//{
//
//}
//void Menu() // UI �ڵ�
//{
//	cout << "1. ���� �Է�" << endl;
//	cout << "2. ���� ���" << endl;
//	cout << "3. ���� �˻�" << endl;
//	cout << "4. ���� ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	int dArray[100];
//	int size = 0;
//	bool run = true;
//	Menu();
//	int n;
//	cin >> n;
//	while (run)
//	{
//		switch (n)
//		{
//		case 1:
//			AddIntArray(dArray, size);
//			break;
//		case 2:
//			PrintIntArray(dArray, size);
//			break;
//		case 3:
//			SearchIntArray(dArray, size);
//			break;
//		case 0:
//			RemoveIntArray(dArray, size);
//			run = false;
//			break;
//		}
//	}
//}