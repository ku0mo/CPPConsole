#include <iostream>
#include <cstdlib>
using namespace std;
template <typename T1, typename T2>
void Print(T1 t1, T2 t2)
{
	cout << t1 << ',' << t2 << endl;
}
int main()
{
	Print(10, 'A');
	Print('A', 5.6);
	Print(5.56, "Hello");

	Print<int, char>(10, 'A');
	Print<char, double>('A', 5.6);
	Print<double, const char*>(5.56, "Hello");

	//cout << Print << endl; // 함수의 이름은 함수가 시작하는 주소다. 이런 함수 있어? 없다
	cout << Print<int, char> << endl; 
	system("pause");
}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//void Swap(T& t1, T& t2)
//{
//	T temp;
//	temp = t1;
//	t1 = t2;
//	t2 = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	double d1 = 5.67;
//	double d2 = 3.54;
//
//	Swap(a, b);
//	Swap(d1, d2);
//
//	cout << a << ',' << b << endl;
//	cout << d1 << ',' << d2 << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>// T라는 타입이 미래에 클라이언트가 결정하는 타입이다. ( 함수 템플릿 )
//void Print(T data) // T는 미래의 클라이언트가 결정한다.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//}
//
//int main()
//{
//	// 함수 2개 밖에 안 만들어진 상태
//	Print(100);
//	Print<const char*>("Hello");
//	Print<int>(200);
//	Print<int>('A'); // 정수 타입으로 함수가 호출 되기 때문에!
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>// T라는 타입이 미래에 클라이언트가 결정하는 타입이다. ( 함수 템플릿 )
//void Print(T data) // T는 미래의 클라이언트가 결정한다.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//}
//
//int main()
//{
//	// 진짜 이름은
//	Print<int>(100);
//	Print<const char*>("Hello");
//	Print<int>(200);
//	Print<char>('A');
//
//	system("pause");
//}
//


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>// T라는 타입이 미래에 클라이언트가 결정하는 타입이다. ( 함수 템플릿 )
//void Print(T data) // T는 미래의 클라이언트가 결정한다.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//}
//
//int main()
//{
//	// 진짜 이름은
//	Print<int>(100);
//	Print<const char*>("Hello");
//	Print<double>(7.89);
//	Print<char>('A');
//
//	system("pause");
//}




//
///*
//템플릿
//
//1. 함수 템플릿(틀)
//
//2. 클래스 템플릿(틀)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>// T라는 타입이 미래에 클라이언트가 결정하는 타입이다. ( 함수 템플릿 )
//void Print(T data) // T는 미래의 클라이언트가 결정한다.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//	/*
//	클라이언트의 코드를 보고, T타입을 결정하는 것
//	이 틀을 보고 만들어지는 함수를 인스턴스 함수(실제 함수)라고 함
//	*/
//}
//
//int main()
//{
//	Print(100);
//	Print("Hello");
//	Print(7.89);
//	Print('A');
//	system("pause");
//}
//


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>// T라는 타입이 미래에 클라이언트가 결정하는 타입이다.
//void Print(T data) // T는 미래의 클라이언트가 결정한다.
//{
//	cout << data << endl;
//}
//
//int main()
//{
//	Print(100);
//	Print("Hello");
//	Print(7.89);
//	Print('A');
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
///*
//Print( 어떤 타입 ) 이 들어와도 동작하게 하고 싶음.
//즉 모든 타입에 관해서 출력 가능하게 만들어 보자.
//*/
//template <typename T>// T라는 타입이 미래에 클라이언트가 결정하는 타입이다.
//void Print(T data) // T는 미래의 클라이언트가 결정한다.
//{
//	cout << data << endl;
//}
//
//int main()
//{
//	Print(100);
//	Print("Hello");
//	Print(7.89);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//using namespace std;
///*
//Print( 어떤 타입 ) 이 들어와도 동작하게 하고 싶음.
//즉 모든 타입에 관해서 출력 가능하게 만들어 보자.
//*/
//void Print(int data)
//{
//	cout << "int: " << data << endl;
//}
//void Print(char* s)
//{
//	cout << "string: " << s << endl;
//}
//void Print(double f)
//{
//	cout << "double: " << f << endl;
//}
//int main()
//{
//	Print(100);
//	Print("Hello");
//	Print(7.89);
//	system("pause");
//}
//



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Print(int data)
//{
//	cout << "int: " << data << endl;
//}
//void Print(char* s)
//{
//	cout << "string: " << s << endl;
//}
//void Print(double f)
//{
//	cout << "double: " << f << endl;
//}
//int main()
//{
//	Print(100);
//	Print("Hello");
//	Print(7.89);
//	system("pause");
//}
//

//// 2. operator Type() 형 변환 방식
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) : x(x), y(y) // 암묵적인 형변환을 허락하지 않는다. ( 명시적으로만 이 생성자를 호출 하겠다.)
//	{
//		/*
//		여기에는 3개의 생성자가 있는 것
//		인수 0개, 인수 1개, 인수 2개 가지는 생성자
//		*/
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	operator int() const
//	{
//		return x;
//	}
//};
//void main()
//{
//	Point p1(2, 3);
//
//	int x = p1;// p1.operator int() 라는 함수가 있는지 확인해본다.
//	cout << x << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(int n)// int 형식을 String(생성자) 형식으로 변환 할 수 있다.
//	{
//		char temp[100];
//		sprintf_s(temp, "%d", n);// temp라는 곳에 정수를 씀
//
//		size = strlen(temp);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, temp);
//	}
//	String(const char* s) /// char* 형식을 String 형식으로 자동적으로 변환하겠다. explicit 안 쓰면
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s = "Hello";
//
//	s = 125;
//	cout << s << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(const char* s) /// char* 형식을 String 형식으로 자동적으로 변환하겠다. explicit 안 쓰면
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s = "Hello";
//
//	s = "Hi~";
//	cout << s << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	explicit String(const char* s)
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s = (String)"Hello";
//	//String s = String("Hello");
//
//	s = (String)"Hi~"; //String("Hi~");
//	cout << s << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	explicit String(const char* s )
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s("Hello");
//
//	s = (String)"Hi~"; //String("Hi~");
//	cout << s << endl;
//	system("pause");
//}


///*
//형식 변환
//1. 명시적 형변환(explicit)
//2. 암묵적 형변환(implicit) ex) P* p = &'c' // 자식이 부모로 형 변환 될 때는 암묵적으로 형 변환 된다.
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) : x(x), y(y) // 암묵적인 형변환을 허락하지 않는다. ( 명시적으로만 이 생성자를 호출 하겠다.)
//	{
//		/*
//		여기에는 3개의 생성자가 있는 것
//		인수 0개, 인수 1개, 인수 2개 가지는 생성자
//		*/
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	Point p1(2, 3);
//
//	//p1 = 10; //Point(10);
//	p1 = (Point)10; // 직접 형식을 변환해주면 가능
//	p1.Print();
//
//	p1 = Point(10);
//	p1.Print();
//
//	system("pause");
//}


///*
//형식 변환
//1. 명시적 형변환(explicit) 
//2. 암묵적 형변환(implicit) ex) P* p = &'c' // 자식이 부모로 형 변환 될 때는 암묵적으로 형 변환 된다.
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x=0, int y=0) : x(x), y(y)
//	{
//		/*
//		여기에는 3개의 생성자가 있는 것
//		인수 0개, 인수 1개, 인수 2개 가지는 생성자
//		*/
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	Point p1(2, 3);
//	// 암묵적 형변환
//	p1 = 10; //  이렇게 쓰면 
//			 //p1 = Point(10); //임시 객체를 만들어 본다. 컴파일러가
//			 /*
//			 생성자 호출을 이용한 형식 변환
//			 - 생성자를 통해서 형식이 변환되는지 컴파일러가 해봄
//			 */
//	p1.Print();
//	system("pause");
//}


///*
//형식 변환
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int xy) : x(xy), y(xy)
//	{
//
//	}
//	Point(int x, int y) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	Point p1(2, 3);
//	p1 = 10; //  이렇게 쓰면 
//	//p1 = Point(10); //임시 객체를 만들어 본다. 컴파일러가
//	/*
//	생성자 호출을 이용한 형식 변환
//	- 생성자를 통해서 형식이 변환되는지 컴파일러가 해봄
//	*/
//	p1.Print();
//	system("pause");
//}



///*
//형식 변환
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	Point p1(2, 3);
//	p1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Array
//{
//private:
//	int* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100) : capacity(cap), size(0)
//	{
//		buf = new int[capacity];
//	}
//	Array(const Array& arg) : capacity(arg.capacity), size(arg.size)
//	{
//		buf = new int[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		if (capacity != arg.capacity)
//		{
//			delete[] buf;
//			buf = new int[arg.capacity];
//		}
//
//		capacity = arg.capacity;
//		size = arg.size;
//
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//
//		return *this;
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
//	int operator[](int idx) const 
//	{
//		return buf[idx];
//	}
//};
//
//ostream& operator<<(ostream& out, const Array& arr)
//{
//	for (int i = 0; i < arr.Size(); ++i)
//		out << arr.At(i) << " ";
//
//	return out;
//}
//
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	cout << arr << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s("Hello");
//	// cout << s.c_str() << endl;
//	cout << s << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//
//ostream& operator<<(ostream& o, const String& s)
//{
//	o << s.c_str();
//	return o;
//}
//int main()
//{
//	String s("Hello");
//	// cout << s.c_str() << endl;
//	cout << s << endl;
//	system("pause");
//}



///*
//이항 연산자에서 왼쪽 항이 내가 정의한 클래스 형식이 아닌 경우 멤버 연산자 중복을 쓸 수 없다. 
//그래서 전역 함수 연산자 중복으로 해야 한다.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
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
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//ostream& operator<<(ostream& o, const Point& pt) // 변하는 객체여서 const 쓰면 안됨
//{
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//int main()
//{
//	Point p1(2, 3);
//	//cout << p1 << endl; // 이렇게 출력 하고 싶은 거야.
//	operator<<(cout, p1).operator<<(endl);
//	system("pause");
//}
//



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
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
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//int main()
//{
//	cout << 100 << endl; // <<가 연산자 (출력 스트림 연산자) cout은 출력 스트림 객체
//	// cout.operator<<(100).operator<<(endl);
//
//	cout.operator<<(100);
//	cout.operator<<(endl);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
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
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//int main()
//{
//	cout << 100 << endl;
//	cout << 100;
//	cout << endl;
//	system("pause");
//}



///*
//이항 연산자 중복
//
//- 멤버 함수 연산자 중복
//
//
//- 전역 함수 연산자 중복
//멤버함수를 쓸 수 없을 때 사용 함 (왼쪽 객체가 클래스를 정의할 수 있는 객체가 아니기 때문에)
//*/
//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point operator+(int n)
//	{
//		return Point(x + n, y + n);
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
//const Point operator+(int n, const Point& pt)
//{
//	return Point(n + pt.GetX(), n + pt.GetY());
//}
//int main()
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//	//Point p3 = p1 + p2;
//	//Point p3 = p1 + 10; //둘다 10을 더해라
//	Point p3 = 10 + p1; //둘다 10을 더해라 //연산의 교환 법칙이 되야되는데, 멤버 함수를 이용한 연산자 중복으로는 불가능
//	// ->  operator+(10, p1); 컴파일러가 이런 전역 함수가 있는지 돌려봄 약속된 함수
//	/*
//	다른 언어에서는 멤버함수로 연산자 중복을 안 함.
//	*/
//
//	p1.Print();
//	p2.Print();
//	p3.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//	const Point& operator+(const Point& arg)
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator+(int n)
//	{
//		return Point(x + n, y + n);
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//	//Point p3 = p1 + p2;
//	Point p3 = p1 + 10; //둘다 10을 더해라
//
//	p1.Print();
//	p2.Print();
//	p3.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//int main()
//{
//	Point p1(2, 3);
//	Point p2(4, 5);
//
//	p1.Print();
//	p2.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//int main()
//{
//	String s = "Hello";
//	for (int i = 0; s[i]; ++i) // null문자냐 아니면 출력 // null 이면 빠져 나감
//		cout << s[i] << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if (buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//int main()
//{
//	String s = "Hello";
//
//	cout << s[0] << endl; // s.operator[](0);
//	cout << s[1] << endl;
//	cout << s[2] << endl;
//	cout << s[3] << endl;
//	cout << s[4] << endl;
//	cout << s[5] << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		size = arg.size;
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		if( buf != NULL)
//			delete[] buf;
//
//		size = strlen(arg.buf);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, arg.buf);
//
//		return *this;
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//int main()
//{
//	String s = "Hello";
//	cout << s.c_str() << endl;
//
//	String s2 = s;
//	cout << s2.c_str() << endl;
//
//	String s3 = "123";
//	s = s3;
//	cout << s.c_str() << endl;
//	cout << s2.c_str() << endl;
//	cout << s3.c_str() << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char* buf;
//	int size; // 문자열의 길이 저장
//public:
//	String(const char* s = "")
//	{
//		size = strlen(s); 
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//int main()
//{
//	String s = "Hello";
//
//	cout << s.c_str() << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class String
//{
//	char buf[100];
//public:
//	String(const char* s = "")
//	{
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//int main()
//{
//	String s = "Hello";
//	/*
//	동적 메모리로 주소를 가지고 있는 것과 다른 데서 메모리 할당 받고 주소만 가지고 있는 것과는 다르다.
//	범용적인 스트링을 만들기 위해선 동적으로 !
//	*/
//
//	cout << s.c_str() << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "")
//	{
//		int slen = strlen(s) + 1;
//		buf = new char[slen];
//		strcpy_s(buf, slen, s);
//	}
//	String(const String& arg) 
//	{
//		int slen = strlen(arg.buf) + 1;
//		buf = new char[slen];
//		strcpy_s(buf, slen, arg.buf);
//	}
//	const String& operator=(const String& arg)
//	{
//		delete[] buf;
//
//		int slen = strlen(arg.buf) + 1;
//		buf = new char[slen];
//		strcpy_s(buf, slen, arg.buf);
//
//		return buf;
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//int main()
//{
//	String s = "Hello";
//
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s = "Hello";
//	std::cout << 100 << std::endl;
//	std::cout << s << std::endl;
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std; // 
//
//int main()
//{
//	std::string s = "Hello";
//	std::cout << 100 << std::endl;
//	std::cout << s << std::endl;
//	system("pause");
//}