#include <iostream>
#include <cstdlib>
using namespace std;

///////////////////////Point 클래스 정의 ////////////// 클래스의 정의는 header에 들어감 서버도 알고 클라이언트도 알아야 함으로
////////////////point.h////////////
class Point
{
	int x;
	int y;
public: //  클래스 밖에서
	Point(int _x = 0, int _y = 0);
	void Print() const;
};

//////////////////////// 멤버 함수 정의(구현) ///////////////
////////////point.cpp ////////////////////////
Point::Point(int _x, int _y) 
{
	x = _x;
	y = _y;
}
void Point::Print() const // 내부에 상태 멤버를 변경하지 않겠다는 것. (read만 가능)
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
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//	//private: // 클래스 안에서만 사용 가능 // 생략하면 보안 속성이 높은 것으로 자동으로 지정됨
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point(int _x = 0, int _y = 0) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const // 내부에 상태 멤버를 변경하지 않겠다는 것. (read만 가능)
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
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//	//private: // 클래스 안에서만 사용 가능 // 생략하면 보안 속성이 높은 것으로 자동으로 지정됨
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point(int _x = 0, int _y = 0) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const // 내부에 상태 멤버를 변경하지 않겠다는 것. (read만 가능)
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
//	Point pt1(2, 3); // 변경 가능한 객체 (R,W 가능)
//	const Point pt2; // 변경 불가능한 객체라는 뜻 (R만 가능)
//
//	pt1.SetX(1); // 변경 가능
//	//pt2.SetX(1); // 변경 불가능 const 메소드의 힘 
//	pt2.GetX();
//	/*
//	콘스트 메서드는 콘스트 객체만 호출 할 수 있음
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
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//	//private: // 클래스 안에서만 사용 가능 // 생략하면 보안 속성이 높은 것으로 자동으로 지정됨
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point() { x = 0; y = 0; } // 함수 중복
//	Point(int _x, int _y) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const // 내부에 상태 멤버를 변경하지 않겠다는 것.
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
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
////private: // 클래스 안에서만 사용 가능 // 생략하면 보안 속성이 높은 것으로 자동으로 지정됨
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point() { x = 0; y = 0; } // 함수 중복
//	Point(int _x, int _y) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
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
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//private: // 클래스 안에서만 사용 가능
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point(int _x = 0, int _y = 0) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
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
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//private: // 클래스 안에서만 사용 가능
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point(int _x = 0, int _y = 0) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
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
//	Point pt1(2, 3)/* 2,3으로 초기화해 줘*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.SetX(5); // 메세지 " x값을 5로 바꿔줘!"
//	pt2.SetX(9);
//
//	cout << pt1.GetX() << ',' << pt1.GetY() << endl;
//	pt2.Print();
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//private: // 클래스 안에서만 사용 가능
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point(int _x = 0, int _y = 0) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
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
//	Point pt1(2, 3)/* 2,3으로 초기화해 줘*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	pt1.SetX(5); // 메세지 " x값을 5로 바꿔줘!"
//	pt2.SetX(9);
//
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}



//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//private: // 클래스 안에서만 사용 가능
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point(int _x = 0, int _y = 0) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
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
//	Point pt1(2, 3)/* 2,3으로 초기화해 줘*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}



///*
//객체 지향(Object Oriented)의 핵심적인 요소
//1. 캡슐화
//2. 상속
//3. 다형성
//*/
//
//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//private: // 클래스 안에서만 사용 가능
//	int x;
//	int y;
//public: //  클래스 밖에서
//	Point(int _x = 0, int _y = 0) // 객체가 생성되고 초기화 될 필요가 있을 때 자동적으로 호출 되는 메서드 : 생성자 ( 클래스 이름과 똑같은 메서드 ) : 초기화를 목표로 하기때문에 return 값이 없다.
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
//	Point pt1(2,3)/* 2,3으로 초기화해 줘*/, pt2;
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}





///*
//객체 지향(Object Oriented)의 핵심적인 요소
//1. 캡슐화
//2. 상속
//3. 다형성
//*/
//
//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{
//private: // 클래스 안에서만 사용 가능
//	int x;
//	int y;
//public: //  클래스 밖에서
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
//	pt1.Init(2, 3); //Messege ( 메소드를 호출하는 것을 메세지를 보낸다고 함 )
//	pt2.Init(5, 7);
//	// pt1.x = 7 ; // 지금은 (private 멤버로) 접근 불가능
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}




///*
//객체 지향(Object Oriented)의 핵심적인 요소
//1. 캡슐화
//2. 상속
//3. 다형성
//*/
//
//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
//class Point
//{ 
//private: // 클래스 안에서만 사용 가능
//	int x;
//	int y;
//public: //  클래스 밖에서
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
//	pt1.Init(2, 3); //Messege ( 메소드를 호출하는 것을 메세지를 보낸다고 함 )
//	pt2.Init(5, 7);
//	// pt1.x = 7 ; // 지금은 (private 멤버로) 접근 불가능
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
//struct Point
//{ // 필드 // 멤버 변수 // 프로퍼티 // 특성 // 속성 // 상태 (변수) 다 같은 말
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
//	pt1.Init(2, 3); //Messege ( 메소드를 호출하는 것을 메세지를 보낸다고 함 )
//	pt2.Init(5, 7);
//
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}


//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
//struct Point
//{ // 필드 // 멤버 변수 // 프로퍼티 // 특성 // 속성 // 상태 (변수) 다 같은 말
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
///* 객체는 독립성이 있어야 한다.!!! */
//struct Point
//{ // 필드 // 멤버 변수 // 프로퍼티 // 특성 // 속성 // 상태 (변수) 다 같은 말
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
//	//앞으로는 초기화를 이렇게 할거야
//
//	Point pt1, pt2;
//	// pt1.x = 10; // 객체지향에서는 이렇게 하지 않음 이렇게 하면 캡슐화가 깨짐 캡슐화가 깨지면, 유연성이 깨짐 ( 항상 인터페이스(메소드, 함수)를 통해서 객체와 이야기 함)
//	pt1.Init(2, 3);
//	pt2.Init(5, 7);
//	cout << pt1.x << ',' << pt1.y << endl; // 직접 가져와서 출력하면 안 좋음! 왜? ( 예를 들어 x, y를 로그 정보를 남기고 싶다고 해봐, 다 기록 남기려면 이렇게 쓰면 안됨)
//	system("pause");
//}





//#include <iostream>
//using namespace std;
///* 객체는 독립성이 있어야 한다.!!! */
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
//		cout << "정수 입력:";
//		int data;
//		cin >> data;
//		if (size < capacity)
//			dArray[size++] = data;
//	}
//	void Print() // 기능 코드
//	{
//		for (int i = 0; i < size; ++i)
//			cout << "[" << i << "]: " << dArray[i] << endl;
//	}
//	void Search() // 기능 코드
//	{
//		cout << "검색할 정수 입력:";
//		int data;
//		cin >> data;
//		for (int i = 0; i < size; ++i)
//			if (dArray[i] == data) // 모든 정수에 대해서
//			{
//				cout << "검색 정수: ";
//				cout << "[" << i << "]:" << dArray[i] << endl;
//			}
//	}
//	void Remove() // 기능 코드
//	{
//		cout << "삭제할 정수 입력:";
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
//		dArray = new int[capacity]; //클라이언트가 입력한 개수 만큼 메모리를 생성한다.
//		size = 0;
//	}
//	void Uninit()
//	{
//		delete[] dArray;
//	}
//};
//void Menu() // UI 코드 main과 밀접
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	IntArray ia, ia2, ia3; // 독립적인 멤버 변수와, 멤버 함수가 만들어진다. // 객체가 만들어짐!
//
//	bool run = true;
//	ia.Init(1000); //클라이언트에게 사이즈 정함!
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
//	ia.Uninit(); // 항상 모든 변수를 초기화 하고, 마무리하는 함수(반환)
//}



//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	// 멤버 변수 ( 상태 변수 )
//	//int dArray[100]; // 정적 배열 ( 컴파일 단계에 크기가 정해짐 )
//	int* dArray; // 메모리의 크기를 고정하지 않기 위해서
//	int size;
//	int capacity; // 메모리의 용량을 저장하기 위해서
//
//	// 멤버 함수 
//	void Add() // 기능 코드
//	{
//		cout << "정수 입력:";
//		int data;
//		cin >> data;
//		//if( ia.size < 100 ) // 용량 사이즈보다 작을 때만! 가능하도록 -> 그렇기 위해선 상태 멤버가 필요함 사이즈가 현재 어떤 상태인지
//		if (size < capacity)
//			dArray[size++] = data;
//	}
//	void Print() // 기능 코드
//	{
//		/*	for (int i = 0; i < ia.size; ++i)
//			cout << "[" << i << "]: " << ia.dArray[i] << endl;*/
//		for (int i = 0; i < size; ++i)
//			cout << "[" << i << "]: " << dArray[i] << endl;
//	}
//	void Search() // 기능 코드
//	{
//		//cout << "검색할 정수 입력:";
//		//int data;
//		//cin >> data;
//		//for (int i = 0; i < ia.size; ++i)
//		//	if (ia.dArray[i] == data) // 모든 정수에 대해서
//		//	{
//		//		cout << "검색 정수: ";
//		//		cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		//	}
//		cout << "검색할 정수 입력:";
//		int data;
//		cin >> data;
//		for (int i = 0; i < size; ++i)
//			if (dArray[i] == data) // 모든 정수에 대해서
//			{
//				cout << "검색 정수: ";
//				cout << "[" << i << "]:" << dArray[i] << endl;
//			}
//	}
//	void Remove() // 기능 코드
//	{
//		//cout << "삭제할 정수 입력:";
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
//		cout << "삭제할 정수 입력:";
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
//		//ia.dArray = new int[capacity]; //클라이언트가 입력한 개수 만큼 메모리를 생성한다.
//		//ia.size = 0;
//		capacity = cap;
//		dArray = new int[capacity]; //클라이언트가 입력한 개수 만큼 메모리를 생성한다.
//		size = 0;
//	}
//	void Uninit()
//	{
//		delete[] dArray;
//	}
//};
//void Menu() // UI 코드 main과 밀접
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	IntArray ia;		 // 구조체의 모든 원소를 0으로 초기화 하라
//						 // 원래 이렇게 초기화 하는 것은 말이 안됨. ia 는 클라이언트! 클라이언트 코드에서는 멤버들이 어떻게 되어있는지도 모름!
//						 // 마음대로 할 수 없음.! 그래서 서로간에 약속이 필요함. 초기화 하는 함수를 꼭 사용해야 함
//						 //ia가 원소가 몇개까지 있는지 알지 못하는 문제가 있음// 클라이언트가 메모리 몇개 사용할지 결정할 수 있도록 함! 초기화 함수에서!
//	bool run = true;
//	ia.Init(1000); //클라이언트에게 사이즈 정함!
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
//	ia.Uninit(); // 항상 모든 변수를 초기화 하고, 마무리하는 함수(반환)
//}



//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	//int dArray[100]; // 정적 배열 ( 컴파일 단계에 크기가 정해짐 )
//	int* dArray; // 메모리의 크기를 고정하지 않기 위해서
//	int size;
//	int capacity; // 메모리의 용량을 저장하기 위해서
//};
//
//void AddIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "정수 입력:";
//	int data;
//	cin >> data;
//	//if( ia.size < 100 ) // 용량 사이즈보다 작을 때만! 가능하도록 -> 그렇기 위해선 상태 멤버가 필요함 사이즈가 현재 어떤 상태인지
//	if (ia.size < ia.capacity)
//		ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // 기능 코드
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // 기능 코드
//{
//	cout << "검색할 정수 입력:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // 모든 정수에 대해서
//		{
//			cout << "검색 정수: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "삭제할 정수 입력:";
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
//	ia.dArray = new int[capacity]; //클라이언트가 입력한 개수 만큼 메모리를 생성한다.
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//void Menu() // UI 코드 main과 밀접
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	IntArray ia;		 // 구조체의 모든 원소를 0으로 초기화 하라
//						 // 원래 이렇게 초기화 하는 것은 말이 안됨. ia 는 클라이언트! 클라이언트 코드에서는 멤버들이 어떻게 되어있는지도 모름!
//						 // 마음대로 할 수 없음.! 그래서 서로간에 약속이 필요함. 초기화 하는 함수를 꼭 사용해야 함
//						 //ia가 원소가 몇개까지 있는지 알지 못하는 문제가 있음// 클라이언트가 메모리 몇개 사용할지 결정할 수 있도록 함! 초기화 함수에서!
//	bool run = true;
//	InitIntArray(ia, 1000); //클라이언트에게 사이즈 정함!
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
//	UninitIntArray(ia); // 항상 모든 변수를 초기화 하고, 마무리하는 함수(반환)
//}




//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	//int dArray[100]; // 정적 배열 ( 컴파일 단계에 크기가 정해짐 )
//	int* dArray; // 메모리의 크기를 고정하지 않기 위해서
//	int size;
//	int capacity; // 메모리의 용량을 저장하기 위해서
//};
//
//void AddIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "정수 입력:";
//	int data;
//	cin >> data;
//	//if( ia.size < 100 ) // 용량 사이즈보다 작을 때만! 가능하도록 -> 그렇기 위해선 상태 멤버가 필요함 사이즈가 현재 어떤 상태인지
//	if (ia.size < ia.capacity)
//		ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // 기능 코드
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // 기능 코드
//{
//	cout << "검색할 정수 입력:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // 모든 정수에 대해서
//		{
//			cout << "검색 정수: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "삭제할 정수 입력:";
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
//	ia.dArray = new int[capacity]; //클라이언트가 입력한 개수 만큼 메모리를 생성한다.
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//void Menu() // UI 코드 main과 밀접
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	IntArray ia;		 // 구조체의 모든 원소를 0으로 초기화 하라
//						 // 원래 이렇게 초기화 하는 것은 말이 안됨. ia 는 클라이언트! 클라이언트 코드에서는 멤버들이 어떻게 되어있는지도 모름!
//						 // 마음대로 할 수 없음.! 그래서 서로간에 약속이 필요함. 초기화 하는 함수를 꼭 사용해야 함
//						 //ia가 원소가 몇개까지 있는지 알지 못하는 문제가 있음// 클라이언트가 메모리 몇개 사용할지 결정할 수 있도록 함! 초기화 함수에서!
//	bool run = true;
//	InitIntArray(ia, 1000); //클라이언트에게 사이즈 정함!
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
//	UninitIntArray(ia); // 항상 모든 변수를 초기화 하고, 마무리하는 함수(반환)
//}


//#include <iostream>
////#include <stdlib.h>
//using namespace std;
//
//struct IntArray
//{
//	//int dArray[100]; // 정적 배열 ( 컴파일 단계에 크기가 정해짐 )
//	int* dArray; // 메모리의 크기를 고정하지 않기 위해서
//	int size;
//};
//
//void AddIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "정수 입력:";
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // 기능 코드
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // 기능 코드
//{
//	cout << "검색할 정수 입력:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // 모든 정수에 대해서
//		{
//			cout << "검색 정수: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "삭제할 정수 입력:";
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
//	ia.dArray = new int[capacity]; //클라이언트가 입력한 개수 만큼 메모리를 생성한다.
//	ia.size = 0;
//}
//void UninitIntArray(IntArray& ia)
//{
//	delete[] ia.dArray;
//}
//void Menu() // UI 코드 main과 밀접
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	IntArray ia;		 // 구조체의 모든 원소를 0으로 초기화 하라
//						 // 원래 이렇게 초기화 하는 것은 말이 안됨. ia 는 클라이언트! 클라이언트 코드에서는 멤버들이 어떻게 되어있는지도 모름!
//						 // 마음대로 할 수 없음.! 그래서 서로간에 약속이 필요함. 초기화 하는 함수를 꼭 사용해야 함
//
//	//ia가 원소가 몇개까지 있는지 알지 못하는 문제가 있음// 클라이언트가 메모리 몇개 사용할지 결정할 수 있도록 함! 초기화 함수에서!
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
//	UninitIntArray(ia); // 항상 모든 변수를 초기화 하고, 마무리하는 함수(반환)
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
//void AddIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "정수 입력:";
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // 기능 코드
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // 기능 코드
//{
//	cout << "검색할 정수 입력:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // 모든 정수에 대해서
//		{
//			cout << "검색 정수: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "삭제할 정수 입력:";
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
//void Menu() // UI 코드 main과 밀접
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	IntArray ia = { 0 }; // 구조체의 모든 원소를 0으로 초기화 하라
//	// 원래 이렇게 초기화 하는 것은 말이 안됨. ia 는 클라이언트! 클라이언트 코드에서는 멤버들이 어떻게 되어있는지도 모름!
//	// 마음대로 할 수 없음.! 그래서 서로간에 약속이 필요함. 초기화 하는 함수를 꼭 사용해야 함
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
//	UninitIntArray(ia); // 항상 모든 변수를 초기화 하고, 마무리하는 함수(반환)
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
//void AddIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "정수 입력:";
//	int data;
//	cin >> data;
//	ia.dArray[ia.size++] = data;
//}
//void PrintIntArray(const IntArray& ia) // 기능 코드
//{
//	for (int i = 0; i < ia.size; ++i)
//		cout << "[" << i << "]: " << ia.dArray[i] << endl;
//}
//void SearchIntArray(const IntArray& ia) // 기능 코드
//{
//	cout << "검색할 정수 입력:";
//	int data;
//	cin >> data;
//	for (int i = 0; i < ia.size; ++i)
//		if (ia.dArray[i] == data) // 모든 정수에 대해서
//		{
//			cout << "검색 정수: ";
//			cout << "[" << i << "]:" << ia.dArray[i] << endl;
//		}
//}
//void RemoveIntArray(IntArray& ia) // 기능 코드
//{
//	cout << "삭제할 정수 입력:";
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
//void Menu() // UI 코드 main과 밀접
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	IntArray ia = { 0 }; // 구조체의 모든 원소를 0으로 초기화 하라
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
//void AddIntArray(int dArray[], int& size) // 기능 코드
//{
//	cout << "정수 입력:";
//	int data;
//	cin >> data;
//	dArray[size++] = data;
//}
//void PrintIntArray(const int dArray[], int size) // 기능 코드
//{
//	for (int i = 0; i < size; ++i)
//		cout << "[" << i << "]: " << dArray[i] << endl;
//}
//void SearchIntArray(const int dArray[], int size) // 기능 코드
//{
//	cout << "검색할 정수 입력:";
//	int data;
//	cin >> data;
//	for(int i = 0; i < size; ++i)
//		if (dArray[i] == data) // 모든 정수에 대해서
//		{
//			cout << "검색 정수: ";
//			cout << "[" << i << "]:" << dArray[i] << endl;
//		}
//}
//void RemoveIntArray(int dArray[], int& size) // 기능 코드
//{
//	cout << "삭제할 정수 입력:";
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
//void Menu() // UI 코드
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
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


//#include <iostream> // 제거 개념
//#include <stdlib.h>
//using namespace std;
//int main()
//{ // 배열에서 원소의 제거는 원래 입력한 적이 없었던 것 처럼 되는 것
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
//void AddIntArray(int dArray[], int& size) // 기능 코드
//{
//	cout << "정수 입력:";
//	int data;
//	cin >> data;
//	dArray[size++] = data;
//}
//void PrintIntArray(const int dArray[], int size) // 기능 코드
//{
//	for (int i = 0; i < size; ++i)
//		cout << "[" << i << "]: " << dArray[i] << endl;
//}
//void SearchIntArray(const int dArray[], int size) // 기능 코드
//{
//	cout << "검색 정수 입력:";
//	int data;
//	cin >> data;
//	for(int i = 0; i < size; ++i)
//		if (dArray[i] == data) // 모든 정수에 대해서
//		{
//			cout << "검색 정수: ";
//			cout << "[" << i << "]:" << dArray[i] << endl;
//		}
//}
//void RemoveIntArray(int dArray[], int& size) // 기능 코드
//{
//
//}
//void Menu() // UI 코드
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
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
//void AddIntArray(int dArray[], int& size) // 기능 코드
//{
//	dArray[size++] = 100 + size;
//}
//void PrintIntArray(const int dArray[], int size) // 기능 코드
//{
//	for (int i = 0; i < size; ++i)
//		cout << "[" << i << "]: " << dArray[i] << endl;
//}
//void SearchIntArray(const int dArray[], int size) // 기능 코드
//{
//
//}
//void RemoveIntArray(int dArray[], int& size) // 기능 코드
//{
//
//}
//void Menu() // UI 코드
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
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
//void AddIntArray(int dArray[], int& size) // 기능 코드
//{
//
//}
//void PrintIntArray(const int dArray[], int size) // 기능 코드
//{
//
//}
//void SearchIntArray(const int dArray[], int size) // 기능 코드
//{
//
//}
//void RemoveIntArray(int dArray[], int& size) // 기능 코드
//{
//
//}
//void Menu() // UI 코드
//{
//	cout << "1. 정수 입력" << endl;
//	cout << "2. 정수 출력" << endl;
//	cout << "3. 정수 검색" << endl;
//	cout << "4. 정수 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
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