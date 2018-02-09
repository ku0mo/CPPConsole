#include <iostream>
#include <stdlib.h>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y)
	{
		cout << "Point()" << endl;
	}
	~Point()
	{
		cout << "~Point()" << endl;
	}
	void Print() const
	{
		cout << x << ',' << y << endl;
	}
};
void main()
{
	{ // 임시 객체가 3번 만들어졌다가 3번 사라짐 - 다른 언어에서는 이런 류의 임시객체가 존재하지 않음 - 일반적으로 바로 복사하려고 할 때 사용 됨.
		Point(2, 3); // 무명 객체 or 템포러리 객체 or 임시 객체
		Point(2, 3);
		Point(2, 3);
	}
	system("pause");
}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	{
//		Point m;
//		m = Point(2, 3); // 중요!! // 임시 객체 *** 객체에는 이름이 없다... 이 문장에서 만들어지고 이 문장에서 사라짐
//		m.Print();
//		// 객체 2개
//	}
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
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
//void main()
//{
//	Point n(1,2); // 초기화 코드
//	Point m;
//	m = Point(2,3); // 중요!! // 임시 객체 *** 객체에는 이름이 없다... 이 문장에서 만들어지고 이 문장에서 사라짐
//	Point k;
//	k = Point(); //임시 객체 복사하고 이곳에서 사라짐
//
//	n.Print();
//	m.Print();
//	k.Print();
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void main()
//{
//	int n(10); // 초기화 코드
//	int m;
//	m = int(10); // 최초값을 인트형식 10으로 만들어라 // 생성자를 이용한 형변환 혹은 초기화
//	int k;
//	k = int(); //기본 생성자 0 값 들어감 
//
//	cout << n << ',' << m << ','<< k << endl;
//	system("pause");
//}
//


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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	cout << arr.At(0) << endl;
//	cout << arr.At(1) << endl;
//	cout << arr.At(2) << endl;
//
//	cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << arr[2] << endl;
//
//	system("pause");
//}


///*
//연속한 객체에서 [] 를 사용하번 그 객체는 컨테이너 객체라는 것 - 내부적으로 연속한 메모리로 객체들을 담고 있다.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//	int operator[](int idx) const
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	int operator[](int idx)
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	const Point operator++(int)
//	{
//		//Point t(x, y); // 증가하기 전의 원소를 넘기는 것 // 근데 지역객체이기 때문에 이렇게 넘기면 안됨
//		Point t(Point(x, y));
//		++x; ++y;
//		return t;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	int x = pt1[0]; // pt1.operator[](0)
//	int y = pt1[1]; // pt1.operaotr[](1)
//
//	cout << x << "," << y << endl;
//	system("pause");
//}




///*
//연속한 객체에서 [] 를 사용하번 그 객체는 컨테이너 객체라는 것 - 내부적으로 연속한 메모리로 객체들을 담고 있다.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//	int operator[](int idx) const
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	int operator[](int idx)
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	const Point operator++(int)
//	{
//		//Point t(x, y); // 증가하기 전의 원소를 넘기는 것 // 근데 지역객체이기 때문에 이렇게 넘기면 안됨
//		Point t(Point(x, y));
//		++x; ++y;
//		return t;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	int x = pt1[0]; // pt1.operator[](0)
//	int y = pt1[1]; // pt1.operaotr[](1)
//
//	cout << x << "," << y << endl;
//	system("pause");
//}
//


//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//	const Point operator++(int)
//	{
//		//Point t(x, y); // 증가하기 전의 원소를 넘기는 것 // 근데 지역객체이기 때문에 이렇게 넘기면 안됨
//		Point t = Point(x, y);
//		++x; ++y;
//		return t;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//
//	pt2 = pt1++; // 전위 - pt1.operator++() // 전위랑 후위랑 구별하기 위한 방법이 필요함, 후위 - pt1.operator(0) 이렇게 해석함! 약속
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}



//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//
//	pt2 = ++pt1; //pt1.operator++()
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	void operator++()
//	{
//		++x; ++y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//
//	++pt1; //pt1.operator++()
//	pt1.Print();
//	system("pause");
//}



//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int *py;
//public:
//	Point(int x = 0, int y = 0) : x(x)
//	{
//		py = new int(y);
//	}
//	Point(const Point& arg) : x(arg.x)
//	{
//		py = new int(*arg.py);
//	}
//	const Point& operator=(const Point& arg)
//	{
//		delete py;
//
//		x = arg.x;
//		py = new int(*py);
//		return *this;
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print() const
//	{
//		cout << x << "," << *py << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2 = pt1;
//
//	pt1.Print();
//	pt2.Print();
//
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
//};
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
//	Array arr2;
//	arr = arr2 = arr;
//	arr2.Add(100);
//	arr2.Add(100);
//
//	PrintArray(arr2);
//	PrintArray(arr);
//
//	system("pause");
//}
//



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
//};
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
//	Array arr2;
//	arr2 = arr;
//	arr2.Add(100);
//	arr2.Add(100);
//
//	PrintArray(arr2);
//
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
//		capacity = arg.capacity;
//		size = arg.size;
//
//		delete[] buf;
//		buf = new int[arg.capacity];
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
//};
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	
//	PrintArray(arr);
//
//	Array arr2;
//	arr2 = arr;
//	arr2.Add(100);
//	arr2.Add(100);
//
//	PrintArray(arr2);
//
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int *py;
//public:
//	Point(int x = 0, int y = 0) : x(x)
//	{
//		py = new int(y);
//	}
//	Point(const Point& arg)
//	{
//		x = arg.x;
//		*py = *arg.py;
//	}
//	const Point& operator=(const Point& arg)
//	{
//		x = arg.x;
//		*py = *arg.py;
//		return *this;
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print() const
//	{
//		cout << x << "," << *py << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt2 = pt1;// pt2.operator=(pt1); 
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}




///*
//복사 함수
//-복사 생성자 : 초기화 ex) Point pt2(pt1);
//
//-복사 대입 연산자 : 이미 객체가 만들어진 상태에서 사용 됨 ex) Point pt1; pt1 = pt2;
//
//클래스를 정의 하면 아무 것도 안만들더라도
//class Test
//{ // 디폴트
//1. 기본 생성자
//2. 기본 소멸자
//3. 기본 복사 생성자 ( 얕은 복사 )
//4. 기본 복사 대입 연산자 ( 얕은 복사 )
//}
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt2 = pt1;// pt2.operator=(pt1); 
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}



///*
//연산자 중복
//-단항 연산자
//
//-이항 연산자
//
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg) const
//	{
//		//if (x == arg.x && y == arg.y)
//		//	return true;
//		//else
//		//	return false;
//		return  x == arg.x && y == arg.y ? true : false;
//	}
//	const Point& operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//		//this// 내 객체의 주소
//		return *this; // 객체 자신의 참조가 반환 됨
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	Point pt3 = pt1 += pt2; // pt1 = pt1 + pt2; // pt1.operator+=(pt2); //100% 동일한 코드
//	pt1.Print();
//	pt3.Print();
//
//	system("pause");
//}



///*
//연산자 중복
//-단항 연산자
//
//-이항 연산자
//
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg) const
//	{
//		//if (x == arg.x && y == arg.y)
//		//	return true;
//		//else
//		//	return false;
//		return  x == arg.x && y == arg.y ? true : false;
//	}
//	const Point& operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//		//return Ponit(x, y);
//		return *this;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	Point pt3 = pt1 += pt2; // pt1 = pt1 + pt2; // pt1.operator+=(pt2); //100% 동일한 코드
//	pt1.Print();
//	pt3.Print();
//
//	system("pause");
//}


///*
//연산자 중복
//-단항 연산자
//
//-이항 연산자
//
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg) const
//	{
//		//if (x == arg.x && y == arg.y)
//		//	return true;
//		//else
//		//	return false;
//		return  x == arg.x && y == arg.y ? true : false;
//	}
//	void operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt1 += pt2; // pt1 = pt1 + pt2; // pt1.operator+=(pt2); //100% 동일한 코드
//	pt1.Print();
//
//	system("pause");
//}


///*
//연산자 중복
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//
//	bool operator==(const Point& arg) const
//	{
//		if (x == arg.x && y == arg.y)
//			return true;
//		else
//			return false;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	if (pt1 == pt2) //pt1.operator==(pt2)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	system("pause");
//}



///*
//연산자 중복
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt3 = pt1 - pt2;
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}



///*
//연산자 중복
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	//Point pt3 = pt1.Add(pt2);
//	//Point pt3 = pt1 + pt2;
//	Point pt3 = pt1.operator+(pt2); // 컴파일러는 이렇게 해석함
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}



///*
//연산자 중복
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	//Point pt3 = pt1.Add(pt2);
//	Point pt3 = pt1+pt2;
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}



///*
//연산자 중복
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& Add(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2);
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}




///*
//연산자 중복
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& Add(const Point& arg) const
//	{
//		return Point( x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2);
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}
//


///*
//연산자 중복
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0, int _y=0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt1.Print();
//	pt2.Print();
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
//		buf = new int[capacity];
//		for( int i = 0 ; i < size; ++i)
//			buf[i] = arg.buf[i];
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
//void PrintArray(const Array& pa) // 객체는 복사하지 않는다.
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
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
//void PrintArray(const Array& pa) // 객체는 복사하지 않는다.
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//	/*
//	배열의 모든 원소를 출력하는 기능은 arr한테 메세지를 보낸 것이 아님. arr의 기능이 아니라는 뜻
//	*/
//	system("pause");
//}
//



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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	
//	PrintArray(arr);
//	system("pause");
//}
//

///*
//
//*/
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
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr.At(i) << endl;
//
//	system("pause");
//}