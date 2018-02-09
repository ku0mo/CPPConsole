#include <iostream>
#include <vector>
using namespace std;
class Array // 컨테이너 클래스
{
	int* buf;
	int size;
public:
	Array() :size(0)
	{
		buf = new int[100];
	}
	Array(const Array& arg)
	{
		this->buf = new int[100];
		for (int i = 0; i < arg.Size(); ++i)
		{
			this->buf[i] = arg.At(i);
		}
		this->size = arg.size;
	}
	~Array()
	{
		delete[] buf;
	}
	void Add(int data)
	{
		buf[size++] = data;
	}
	int Size() const
	{
		return size;
	}
	int At(int idx) const
	{
		return buf[idx];
	}
};
int main()
{
	Array arr; // 컨테이너 객체 ( 100, 200, 300 정수를 담고 있는 객체 ) 컬렉션 타입, 혹은 컨테이너 타입

	arr.Add(100);
	arr.Add(200);
	arr.Add(300);

	Array arr2(arr);

	for (int i = 0; i < arr.Size(); ++i)
		cout << arr.At(i) << endl;

	for (int i = 0; i < arr2.Size(); ++i)
		cout << arr2.At(i) << endl;

	system("pause");
}


//#include <iostream>
//#include <vector>
//using namespace std;
//class Array // 컨테이너 클래스
//{
//	int* buf;
//	int size;
//public:
//	Array() :size(0)
//	{
//		buf = new int[100];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(int data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	int At(int idx) const
//	{
//		return buf[idx];
//	}
//};
//int main()
//{
//	Array arr; // 컨테이너 객체 ( 100, 200, 300 정수를 담고 있는 객체 ) 컬렉션 타입, 혹은 컨테이너 타입
//
//	arr.Add(100);
//	arr.Add(200);
//	arr.Add(300);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr.At(i) << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//typedef vector<int> Array;
//
//int main()
//{
//	Array arr; // 컨테이너 객체 ( 100, 200, 300 정수를 담고 있는 객체 ) 컬렉션 타입, 혹은 컨테이너 타입
//
//	arr.push_back(100);
//	arr.push_back(200);
//	arr.push_back(300);
//
//	for(int i = 0 ; i < arr.size() ; ++i)
//		cout << arr.at(i) << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//typedef vector<int> Array;
//
//int main()
//{
//	Array arr; // 컨테이너 객체 ( 100, 200, 300 정수를 담고 있는 객체 ) 컬렉션 타입, 혹은 컨테이너 타입
//
//	arr.push_back(100);
//	arr.push_back(200);
//	arr.push_back(300);
//
//	cout << arr.at(0) << endl; // 0번 줘
//	cout << arr.at(1) << endl;
//	cout << arr.at(2) << endl;
//
//	system("pause");
//}


///*
//자료구조 객체
//Set(집합) 객체
//Collection 객체
//
//C++에서는 객체를 담는 객체를 컨테이너라고 함
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//typedef vector<int> Array;
//
//int main()
//{
//	Array arr; // 컨테이너 객체 ( 100, 200, 300 정수를 담고 있는 객체 ) 컬렉션 타입, 혹은 컨테이너 타입
//
//	arr.push_back(100);
//	arr.push_back(200);
//	arr.push_back(300);
//
//	cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << arr[2] << endl;
//
//	system("pause");
//}


///*
//기본 멤버 함수 (만들면 안만들어줘, 안만들면 만들어줘)
//1. 기본 생성자				Test() { }
//2. 기본 소멸자			    ~Test() { }
//3. 기본 복사 생성자			Test(const Test&) { }
//4. 기본 대입 연산자			const Test& operator=(const Test&)
//*/
//
//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//class Point
//{
//	int* px; //참조를 가짐
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL) // 일반 생성자
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	Point(const Point& arg)								// 복사 생성자
//	{
//		px = new int(*arg.px);
//		//*px = *arg.px;
//		py = new int(*arg.py);
//		//*py = *arg.py;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	Point p2;
//	p2 = p1; // 대입에서 C++에서 객체의 복사는 얕은 복사만 지원함 ( 만약 깊은 복사를 하려면, 복사 대입 연산자를 만들어야 함)
//
//	p2.Print();
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//class Point
//{
//	int* px; //참조를 가짐
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL) // 일반 생성자
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	Point(const Point& arg)								// 복사 생성자
//	{
//		px = new int(*arg.px);
//		//*px = *arg.px;
//		py = new int(*arg.py);
//		//*py = *arg.py;
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	Point p2(p1);
//	p2.Print();
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//class Point
//{
//	int* px; //참조를 가짐
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL) // 일반 생성자
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	Point(const Point& arg)								// 복사 생성자
//	{
//		px = new int(*arg.px);
//		py = new int(*arg.py);
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	Point p2(p1);
//	p2.Print();
//
//	p1.Print();
//	p2.Print();
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//class Point
//{
//	int* px; //참조를 가짐
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	Point(const Point& p)
//	{
//		px = new int(*(p.px));
//		py = new int(*(p.py));
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//	void Set(int x, int y)
//	{
//		delete px;
//		delete py;
//		this->px = new int(x);
//		this->py = new int(y);
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	Point p2(p1);
//	p2.Print();
//
//	p1.Set(4, 4);
//
//	p1.Print();
//	p2.Print();
//	system("pause");
//}


///*
//객체 지향의 객체의 복사는 2가지 복사가 있다.
//
//1. 옅은 복사 (Shallow Copy) - 멤버 대 멤버 복사(비트 복사)
//- 객체의 내용을 그대로 복사 : 
//
//2. 깊은 복사 (Deep Copy)
//- 참조가 가지고 있는 내용물까지도 복사하는 것
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	char* name; //참조 상태 객체 (복사 동작을 주의해서 해야 함 )
//	int age;
//public:
//	Person(const char* n = "noname", int a = 0)
//	{
//		int slen = strlen(n);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		age = a;
//	}
//	Person(const Person& per) 
//	{
//		int slen = strlen(per.name);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, per.name);
//		this->age = per.age;
//	}
//	void Print() const
//	{
//		cout << "name: " << name << ','
//			<<	"age: " << age << endl;
//	}
//	~Person()
//	{
//		delete[] name;
//	}
//};
//
//int main()
//{
//	Person p1("Hong Gil-Dong", 25);
//	Person p2(p1);
//	p1.Print();
//	p2.Print();
//
//	//참조 상태 객체인데 다 얕은 복사가 진행되기 때문에 문제가 있는 코드
//	//초기화 복사
//	//Person p2(p1);
//	//p2.Print();
//
//	//대입 복사
//	//Person p2;
//	//p2 = p1;
//
//	system("pause");
//}



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	char* name; //참조 상태 객체 (복사 동작을 주의해서 해야 함 )
//	int age;
//public :
//	Person(const char* n = "noname", int a = 0)
//	{
//		int slen = strlen(n);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		age = a;
//		cout << "Person()" << endl;
//	}
//	void Print() const
//	{
//		cout << "name: " << name << ',' <<
//			"age:" << age << endl;
//	}
//	~Person()
//	{
//		cout << "~Person()" << endl;
//		delete[] name;
//	}
//};
//
//int main()
//{
//	{
//		Person p1("Hong Gil-Dong", 25);
//		p1.Print();
//	}
//	system("pause");
//}

//4교시



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x; //참조를 가짐
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_x)
//	{
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	/*
//	객체를 복사하는 방법
//	1. 초기화를 통해 객체를 복사 : 값 상태 객체는 복사에서 문제가 발생하지 않음, 참조 상태 객체는 문제가 발생
//	2. 대입을 통해 객체를 복사 
//	*/
//	//Point p2 = p1; // 같은 타입의 객체끼리는 복사가 가능함 , 초기화
//	Point p2(p1); //초기화를 쓸 때 C++ 에서는 이렇게 씀 (위에랑 동일한 문법)
//
//	p2.Print();
//
//	Point p3;
//	p3 = p1; // 대입 // 메모리 덤프 ( 멤버대 멤버 복사 , 비트 메모리 복사)
//	p3.Print();
//	system("pause");
//}



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x; //참조를 가짐
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_x)
//	{
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//
//	/*
//	객체를 복사하는 방법 
//	1. 초기화를 통해 객체를 복사
//	2. 대입을 통해 객체를 복사
//	*/
//	Point p2 = p1; // 같은 타입의 객체끼리는 복사가 가능함 , 초기화
//	p2.Print(); 
//
//	Point p3;
//	p3 = p1; // 대입 // 메모리 덤프 ( 멤버대 멤버 복사 , 비트 메모리 복사)
//	p3.Print();
//	system("pause");
//}



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int* px; //참조를 가짐
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL)
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	~Point()
//	{
//		delete px;
//		delete py;
//	}
//	void Print() const
//	{
//		cout << *px << ',' << *py << endl;
//	}
//};
//
//int main()
//{
//	/*
//	실제 값을 보관하는 방법 
//	값의 위치를 보관하는 방법
//	*/
//	/*
//	값 상태 객체 : 상태를 값으로 가지고 있음 (보통 데이터)
//	참조 상태 객체 : 상태를 주소(참조)로 가지고 있음  (보통 서비스)
//	*/
//	Point p1(2, 3);
//	p1.Print();
//	system("pause");
//}
//// 3교시


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // 이게 진짜 초기화 
//	{
//		/*
//		초기화 : 메모리를 생성하고 최초로 값을 할당하는 것
//		대	입 : 초기화 하고 난 다음부터 값을 넣는 것
//		*/
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point* arr = new Point[5];
//		for (int i = 0; i < 5; ++i)
//			arr[i].Print();
//	}
//	system("pause");
//}


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // 이게 진짜 초기화 
//	{
//		/*
//		초기화 : 메모리를 생성하고 최초로 값을 할당하는 것
//		대	입 : 초기화 하고 난 다음부터 값을 넣는 것
//		*/
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point arr[5] = { Point(5,6), Point(3,4) }; // 배열은 초기화 되면 초기화 값을 갖지만, 없으면 기본 생성자값
//		for (int i = 0; i < 5; ++i)
//			arr[i].Print();
//	}
//	system("pause");
//}


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // 이게 진짜 초기화 
//	{
//		/*
//		초기화 : 메모리를 생성하고 최초로 값을 할당하는 것
//		대	입 : 초기화 하고 난 다음부터 값을 넣는 것
//		*/
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point arr[5] = { Point(5,6), Point(3,4) }; // 배열은 초기화 되면 초기화 값을 갖지만, 없으면 기본 생성자값
//		for (int i = 0; i < 5; ++i)
//			arr[i].Print();
//	}
//	system("pause");
//}


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // 이게 진짜 초기화 
//	{
//		/*
//		초기화 : 메모리를 생성하고 최초로 값을 할당하는 것
//		대	입 : 초기화 하고 난 다음부터 값을 넣는 것
//		*/
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point* p = new Point(4, 5);
//
//	cout << &p1 << " : "; p1.Print();
//	cout << p << " : "; p->Print();
//
//	delete p;
//	system("pause");
//}


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		this->x = x; // this는 이 메소드가 실행될 때의 실제 객체의 주소
//		this->y = y; // 명시적으로! 
//	}
//	void Print() const
//	{
//		cout << this << ": " << this->x << ',' << this->y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point* p = new Point(4, 5);
//
//	cout << &p1 << " : "; p1.Print();
//	cout << p << " : "; p->Print();
//
//	delete p;
//	system("pause");
//}



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		/*
//
//		*/
//		this->x = x; // this는 이 메소드가 실행될 때의 실제 객체의 주소
//		this->y = y; // 명시적으로! 
//	}
//	void Print() const
//	{
//		cout << this << ": " << this->x << ',' << this->y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point p2(2, 3);
//	Point p3(2, 3);
//
//	cout << &p1 << " : "; p1.Print(); // 이 함수가 호출 될 때, 이 함수를 호출한 객체의 주소가(자기 자신의 주소)가 넘어간다.
//	cout << &p2 << " : "; p2.Print(); // 결론적으로 this는 &p2 // p2의 주소
//	cout << &p3 << " : "; p3.Print();
//
//	system("pause");
//}



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		/*
//		
//		*/
//		this->x = x; // this는 이 메소드가 실행될 때의 실제 객체의 주소
//		this->y = y; // 명시적으로! 
//	}
//	void Print() const
//	{
//		cout << this << ": " << this->x << ',' << this->y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	Point p2(2, 3);
//	Point p3(2, 3);
//
//	p1.Print(); // 이 함수가 호출 될 때, 이 함수를 호출한 객체의 주소가(자기 자신의 주소)가 넘어간다.
//	p2.Print(); // 결론적으로 this는 &p2 // p2의 주소
//	p3.Print();
//
//	system("pause");
//}


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//	int GetX() const
//	{
//		return x;
//	}
//	int GetY() const
//	{
//		return y;
//	}
//};
//
//void PrintPoint(const Point* p /* 콘스트 객체로 만들어서 Write 못하게 */)
//{
//	//cout << p->GetX() << ',' << p->GetY() << endl;
//	p->Print();
//}
//
//int main()
//{
//	Point p1(2, 3);
//
//	PrintPoint(&p1); // 2,3 
//
//	system("pause");
//}




////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//	void SetX(int _x)
//	{
//		x = _x;
//	}
//	void SetY(int _y)
//	{
//		y = _y;
//	}
//};
//
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	p1.Set(5, 8);
//	p1.Print();
//	p1.SetX(0);
//	p1.SetY(6);
//	p1.Print();
//	system("pause");
//}



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		x = _x;
//		y = _y;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	void Set(int _x, int _y)
//	{
//		x = _x;
//		y = _y;
//	}
//};
//
//int main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	p1.Set(5, 8);
//	p1.Print();
//	system("pause");
//}




////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		x = _x;
//		y = _y;
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point p1(2, 3);
//		Point* p = new Point(2, 3);
//
//		p1.Print();
//		p->Print(); //p가 가리키는  Point객체가 안 사라짐
//
//		delete p;
//	}
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}

//2 교시

////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		x = _x;
//		y = _y;
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point p1(10);		// x만 초기화
//		Point p2;			// 알아서 초기화
//		Point p3(2, 3);		//2개다 초기화 (인수를 2개 받는 초기화 생성자(함수)가 없음.)
//
//		p1.Print();
//		p2.Print();
//		p3.Print();
//	} //소멸자 호출
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}




//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0) //인수를 안주면 기본 값으로 0을 사용
//	{
//		x = _x;
//		y = 0;
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point p1(10);
//		Point p2;
//
//		p1.Print();
//		p2.Print();
//	} //소멸자 호출
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}





////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0)
//	{
//		x = _x;
//		y = 0;
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point p1(10); 
//
//		p1.Print();
//	} //소멸자 호출
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}
//


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	//int n = 10; 
//	int n(10); // 초기화를 이렇게 해도 됨 (c++의 문법) // C++ INT 타입(형식) 클래스라고 불러도 됨 (int 클래스)
//	cout << n << endl;
//	system("pause");
//}




////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = 0; y = 0;
//		cout << "Point()" << endl;
//	} // 생성자 ( 안 만들어놔도 자동적으로 만듬 - 기본 생성자 - 디폴트 생성자)
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}// 소멸자 ( 안 만들어놔도 자동적으로 만듬 - 기본 소멸자 - 디폴트 소멸자)
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point p1; // p1이 생성될때 자동으로 생성자 호출 //p1이 사라질때 자동으로 소멸자 호출 ( 스택에서 없어 질 때 블록이 끝날 때)
//
//		p1.Print();
//	} //소멸자 호출
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point()
//	{ 
//		x = 0; y = 0;
//		cout << "Point()" << endl;
//	} // 생성자 ( 안 만들어놔도 자동적으로 만듬 - 기본 생성자 - 디폴트 생성자)
//	~Point() 
//	{
//		cout << "~Point()" << endl;
//	}// 소멸자 ( 안 만들어놔도 자동적으로 만듬 - 기본 소멸자 - 디폴트 소멸자)
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1; // p1이 생성될때 자동으로 생성자 호출 //p1이 사라질때 자동으로 소멸자 호출 ( 스택에서 없어 질 때 블록이 끝날 때)
//
//	p1.Print();
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}



////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	void Init()
//	{
//		x = 0;
//		y = 0;
//	}
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	p1.Init();
//	p1.Print();
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}





////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point 
//{
////private: // class는 생략하면 프라이빗
//	int x;
//	int y;
//public:
//	void InitPoint()
//	{
//		x = 0;
//		y = 0;
//	}
//	void PrintPoint()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	p1.InitPoint();
//	p1.PrintPoint();
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}
//


////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Point // 아무것도 안쓰면 외부로 공개됨 ( 공개 안시키려면 private
//{
//private:
//	int x;
//	int y;
//public:
//	void InitPoint()
//	{
//		x = 0;
//		y = 0;
//	}
//	void PrintPoint()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	p1.InitPoint();
//	p1.PrintPoint();
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}




////C++ 객체지향에서는 전역함수를 만들지 않음( 전역함수 - 독립적으로 존재하는 함수 )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//	void InitPoint()
//	{
//		x = 0;
//		y = 0;
//	}
//	void PrintPoint()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1;
//	p1.InitPoint();
//	p1.PrintPoint();
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}

//// C 스타일 (절차 지향적- 프로세스 중심적)
///*
//객체지향은 그렇게 하지말자! 관련성 갖는 데이터와 명령어들을 하나로 묶자!
//실세계에서는 객체는 정적인 요소와 동적인 요소를 갖는 단위
//컴퓨터 세계에서 객체는 이 실세계에 존재하는 모든 것이 되는 것
//ex) 물도 객체, 공간도 객체, 사람 등등 다 객체 (우리가 객체를 만들어 내야 함)
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//void InitPoint(Point* p)
//{
//	p->x = 0;
//	p->y = 0;
//}
//void PrintPoint(Point* p)
//{
//	cout << p->x << ',' << p->y << endl;
//}
//int main()
//{
//	Point p1;
//	InitPoint(&p1);
//	PrintPoint(&p1);
//	system("pause");
//	return 0; // 생략하면 0을 알아서 반환
//}

//1 교시