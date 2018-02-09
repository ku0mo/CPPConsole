#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class String
{
	char* buf;
public:
	String(const char* s = "")  
	{
		buf = new char[strlen(s) + 1];
		strcpy_s(buf, strlen(s) + 1, s);
	} 
	~String() { delete[] buf; }
	const char* GetString() const
	{
		return buf;
	}
};
ostream& operator<<(ostream& o, const String& s)
{
	o << s.GetString();
	return o;
}
void PrintString(const string& s)
{
	cout << "string:  " << s << endl;
}
void PrintString(const String& s)
{
	cout << "String:  " << s << endl;
}
void main()
{
	const char* s = "Hello!";
	const char arr[] = "Hello!";
	const string str = "Hello!";
	const String str2 = "Hello!";

	PrintString(string(s));
	PrintString(String(arr));
	PrintString(str);
	PrintString(str2);

	system("pause");
}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//void PrintString(const string& s)
//{
//	cout << "string:  " << s << endl;
//}
//void main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello!";
//	const string str = "Hello!";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(string(s));
//	PrintString(string(arr));
//	PrintString(str);
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//void PrintString(const string& s)
//{
//	cout << "string:  " << s << endl;
//}
//void main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello!";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(string(s));
//	PrintString(string(arr));
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//void PrintString(string s)
//{
//	cout << "string:  " << s << endl;
//}
//void main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello!";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(s);
//	PrintString(arr);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//template <typename T>
//void PrintString(const T& s)
//{
//	cout << "string:  ";
//	for (int i = 0; s[i]; ++i)
//		cout << s[i];
//	cout << endl;
//}
//void main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello!";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(s);
//	PrintString(arr);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//template <typename T>
//void PrintString(const T& s)
//{
//	cout << "string:  " << s << endl;
//}
//void main()
//{
//	const char* s = "Hello!";
//	const char arr[] = "Hello!";
//
//	cout << s << endl;
//	cout << arr << endl;
//
//	PrintString(s);
//	PrintString(arr);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <functional> // greater
//#include <time.h>
//using namespace std;
//template <typename T>
//struct Greater
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		if (a.GetX() > b.GetX())
//			return true;
//		else if (a.GetX() < b.GetX())
//			return false;
//		else
//			return a.GetY() < b.GetY();
//	}
//};
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
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
//void main()
//{
//	vector<Point> v;
//	for (int i = 0; i < 100; ++i)
//		v.push_back(Point(rand() % 100, rand() % 100));
//	sort(v.begin(), v.end(), Greater<Point>());
//
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << "(" << iter->GetX() << "," << iter->GetY() << ")" << " ";
//	cout << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <functional> // greater
//using namespace std;
//template <typename T>
//struct Greater
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a/100 > b/100; // 많이 사용하는 방법
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	sort(v.begin(), v.end(), Greater<int>()); // 너무 많이 써서 많들어 놈 a > b
//	//sort(v.begin(), v.end(), less<int>()); // a < b // 디폴트
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <functional> // greater
//using namespace std;
//struct Pred
//{
//	bool operator()(int a, int b) const
//	{
//		return a > b; // 앞에 거가 크면 참 (내림 차순 정렬)
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	//sort(v.begin(), v.end(), greater<int>()); // 너무 많이 써서 많들어 놈 a > b
//	sort(v.begin(), v.end(), less<int>()); // a < b // 디폴트
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <functional> // greater
//using namespace std;
//struct Pred
//{
//	bool operator()(int a, int b) const
//	{
//		return a > b; // 앞에 거가 크면 참 (내림 차순 정렬)
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	//sort(v.begin(), v.end(), greater<int>()); // 너무 많이 써서 많들어 놈 a > b
//	sort(v.begin(), v.end(), less<int>()); // a < b // 디폴트
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct Pred
//{
//	bool operator()(int a, int b) const
//	{
//		return a > b; // 앞에 거가 크면 참 (내림 차순 정렬)
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	sort(v.begin(), v.end(), Pred());
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct Pred
//{
//	bool operator()(const T& a, const T& b)
//	{
//		return a > b;
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	sort(v.begin(), v.end(), Pred<int>());
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	sort(v.begin(), v.end());
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//		
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <set>
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n) const
//	{
//		cout << n << " ";
//	}
//};
//void Print(int n)
//{
//	cout << n << " ";
//}
//template <typename Iter, typename F>	 // 일반화 함수로 만들기 위해서
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name() << "," << typeid(F).name() << endl;
//	for (; siter != eiter; ++siter)
//		fun(*siter); // 모든 원소에 대해서
//}
//void main()
//{
//	set<int> v;
//
//	v.insert(10);
//	v.insert(20);
//	v.insert(30);
//	v.insert(40);
//	v.insert(50);
//
//	// 컴파일 시간에 매개변수 보고 타입 결정
//	For_each(v.begin(), v.end(), Print); // 순차열 (모든 순차열 ) 에 대해서 Print를 콜백해라
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <list>
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n) const
//	{
//		cout << n << " ";
//	}
//};
//void Print(int n)
//{
//	cout << n << " ";
//}
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name() << "," << typeid(F).name() << endl;
//	for (; siter != eiter; ++siter)
//		fun(*siter); // 모든 원소에 대해서
//}
//void main()
//{
//	list<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	// 컴파일 시간에 매개변수 보고 타입 결정
//	For_each(v.begin(), v.end(), Print); // 순차열 (모든 순차열 ) 에 대해서 Print를 콜백해라
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n) const
//	{
//		cout << n << " ";
//	}
//};
//void Print(int n)
//{
//	cout << n << " ";
//}
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name() << "," << typeid(F).name() << endl;
//	for (; siter != eiter; ++siter)
//		fun(*siter); // 모든 원소에 대해서
//}
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	For_each(v.begin(), v.end(), Print); // 순차열 (모든 순차열 ) 에 대해서 Print를 콜백해라
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n) const
//	{
//		cout << n << " ";
//	}
//};
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name() << "," << typeid(F).name() << endl;
//	for (; siter != eiter; ++siter)
//		fun(*siter); // 모든 원소에 대해서
//}
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	For_each(v.begin(), v.end(), PrintF<int>()); // 순차열 (모든 순차열 ) 에 대해서 Print를 콜백해라
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//template <typename T>
//struct PrintF
//{
//	void operator()(const T& n) const
//	{
//		cout << n << " ";
//	}
//};
//template <typename Iter, typename F>
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	for (; siter != eiter; ++siter)
//		fun(*siter); // 모든 원소에 대해서
//}
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	For_each(v.begin(), v.end(), PrintF<int>()); // 순차열 (모든 순차열 ) 에 대해서 Print를 콜백해라
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void Print(int n)
//{
//	cout << n << " ";
//}
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for_each(v.begin(), v.end(),Print); // 순차열 (모든 순차열 ) 에 대해서 Print를 콜백해라
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <typeinfo>
//using namespace std;
//class Parent
//{
//public:
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//	int child1;
//public:
//	Child1() : child1(100) {}
//	virtual void Message() const
//	{
//		cout << "Child1 MSG" << endl;
//	}
//	void PrintChild1() const
//	{
//		cout << "int: " << child1 << endl;
//	}
//};
//class Child2 : public Parent
//{
//	virtual void Message() const
//	{
//		cout << "Child2 MSG" << endl;
//	}
//};
//void main()
//{
//	Parent* p = new Child1;
//
//	p->Message();
//	delete p;
//
//	Parent* parr[5] = { new Child1, new Child2, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i) // 프로그램 하다보면 구체적인 타입(down casting)을 다뤄야 할 때가 옴.
//	{
//		cout << typeid(*parr[i]).name() << endl;// typeid 쓰면 실체 객체라는 뜻이 됨
//	}
//	for (int i = 0; i < 5; ++i)
//		delete parr[i];
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <typeinfo>
//using namespace std;
//class Parent
//{
//public:
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//	int child1;
//public:
//	Child1() : child1(100) {}
//	virtual void Message() const
//	{
//		cout << "Child1 MSG" << endl;
//	}
//	void PrintChild1() const
//	{
//		cout << "int: " << child1 << endl;
//	}
//};
//class Child2 : public Parent
//{
//	virtual void Message() const
//	{
//		cout << "Child2 MSG" << endl;
//	}
//};
//void main()
//{
//	Parent* p = new Child1;
//
//	p->Message();
//	delete p;
//
//	Parent* parr[5] = { new Child1, new Child2, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i) // 프로그램 하다보면 구체적인 타입(down casting)을 다뤄야 할 때가 옴.
//	{// 구체적인 타입을 골라내기 위해서, 즉 Child1만 가지고 있는 기능을 사용하기 위해서
//	 //((Child1*)parr[i])->PrintChild1(); // down casting // 이렇게 하면 모든 객체가 다운 캐스팅 됨
//		if (typeid(Child1) == typeid(*parr[i]))
//			((Child1*)parr[i])->PrintChild1();
//	}
//	for (int i = 0; i < 5; ++i)
//		delete parr[i];
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <typeinfo>
//using namespace std;
//class Parent
//{
//public:
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//	int child1;
//public:
//	Child1() : child1(100) {}
//	virtual void Message() const
//	{
//		cout << "Child1 MSG" << endl;
//	}
//	void PrintChild1() const
//	{
//		cout << "int: " << child1 << endl;
//	}
//};
//class Child2 : public Parent
//{
//	virtual void Message() const
//	{
//		cout << "Child2 MSG" << endl;
//	}
//};
//void main()
//{
//	Parent* p = new Child1;
//
//	p->Message();
//	delete p;
//
//	Parent* parr[5] = { new Child1, new Child2, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i)
//		parr[i]->Message();
//	for (int i = 0; i < 5; ++i)
//		delete parr[i];
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <typeinfo>
//using namespace std;
//class Parent
//{
//public:
//	virtual ~Parent() {}
//	virtual void Message() const = 0;
//};
//class Child1 : public Parent
//{
//	virtual void Message() const 
//	{
//		cout << "Child1 MSG" << endl;
//	}
//};
//class Child2 : public Parent
//{
//	virtual void Message() const
//	{
//		cout << "Child2 MSG" << endl;
//	}
//};
//void main()
//{
//	Parent* p = new Child1;
//
//	p->Message();
//	delete p;
//
//	Parent* parr[5] = { new Child1, new Child2, new Child2, new Child1, new Child2 };
//	for (int i = 0; i < 5; ++i)
//		parr[i]->Message();
//	for (int i = 0; i < 5; ++i)
//		delete parr[i];
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <typeinfo>
//using namespace std;
//void main()
//{
//	const type_info& ti = typeid(int); // typeinfo 객체는 복사본 생성x, 변경할 수 없어! 
//
//	cout << ti.name() << endl; 
//	if (ti == typeid(int))
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//void main()
//{
//	cout << typeid(int).name() << endl; // int에 대한 type 객체의 내임을 호출한거임
//	cout << typeid(double).name() << endl;
//	cout << typeid(int*).name() << endl;
//	cout << typeid(double*).name() << endl;
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//void main()
//{
//	cout << typeid(int).name() << endl;
//	cout << typeid(double).name() << endl;
//	cout << typeid(int*).name() << endl;
//	cout << typeid(double*).name() << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <exception>
//using namespace std;
//class ExF1 : public exception
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* what() const
//	{
//		return msg.c_str();
//	}
//};
//class ExF2 : public exception
//{
//	string msg;
//public:
//	ExF2(const char* s) : msg(s) {}
//	const char* what() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 예외 발생");
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const exception& e) //여기서 못 잡으면
//	{
//		cout << e.what() << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <exception>
//using namespace std;
//class ExF1 : public exception
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* what() const
//	{
//		return msg.c_str();
//	}
//};
//class ExF2 : public exception
//{
//	string msg;
//public:
//	ExF2(const char* s) : msg(s) {}
//	const char* what() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 예외 발생");
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const exception& e) //여기서 못 잡으면
//	{
//		cout << e.what() << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class Exception
//{
//public:
//	virtual const char* What() const = 0;
//};
//class ExF1 : public Exception
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//class ExF2 : public Exception
//{
//	string msg;
//public:
//	ExF2(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 예외 발생");
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const Exception& e) //여기서 못 잡으면
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//}; 
//class ExF2
//{
//	string msg;
//public:
//	ExF2(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 예외 발생");
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e) //여기서 못 잡으면
//	{
//		cout << e.What() << endl;
//	}
//	catch (const ExF2& e) //여기서 못 잡으면
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF1("function1 예외 발생");
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e) //여기서 못 잡으면
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e) //여기서 못 잡으면
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s) {}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const char* ex) //여기서 못 잡으면
//	{
//		cout << ex << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class ExF1
//{
//	string msg;
//public:
//	ExF1(const char* s) : msg(s){}
//	const char* What() const
//	{
//		return msg.c_str();
//	}
//};
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	throw ExF1("function1 예외 발생");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10);
//		function2(20);
//	}
//	catch (const char* ex) //여기서 못 잡으면
//	{
//		cout << ex << endl;
//	}
//	catch (...) //여기서 잡음.. 계층적 예외 처리
//	{
//		cout << "예외!" << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//////
//	//throw exc;//예외 객체를 던짐, 예외 객체는 예외에 대해 모든 것을 알고 있는 객체
//	throw "function1을 수행!, 예외 상황 발생!"; // 예외가 던져지면 무조건 잡아야 하는데 아무도 처리 안해주면 OS가 처리 함..
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // 만약 2가지의 함수가 종속적인 함수라면, 같은 try에 묶음, 만약 독립적이라면, try 따로, 만약 function1에서 예외 발생하면 나머지 함수들 실행 하지 않음
//		function1(10); 
//		function2(20); 
//	}
//	catch (const char* ex) //문자열을 잡아서 출력
//	{
//		cout << ex << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//////
//	//throw exc;//예외 객체를 던짐, 예외 객체는 예외에 대해 모든 것을 알고 있는 객체
//	throw "function1을 수행!, 예외 상황 발생!"; // 예외가 던져지면 무조건 잡아야 하는데 아무도 처리 안해주면 OS가 처리 함..
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{
//		function1(10); // function1을 실행하다가 예외가 발생하면
//	}
//	catch (const char* ex) //문자열을 잡아서 출력
//	{
//		cout << ex << endl;
//	}
//	function2(20);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//////
//	//throw exc;//예외 객체를 던짐, 예외 객체는 예외에 대해 모든 것을 알고 있는 객체
//	throw "function1을 수행!, 예외 상황 발생!"; // 예외가 던져지면 무조건 잡아야 하는데 아무도 처리 안해주면 OS가 처리 함..
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{
//		function1(10); // function1을 실행하다가 예외가 발생하면
//	}
//	catch (...) // 예외를 잡겠다 (...) 은 모든 예외에 대해서
//	{
//		cout << "어떤 예외 발생!";
//	}
//	function2(20);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//	//////
//	//throw exc;//예외 객체를 던짐, 예외 객체는 예외에 대해 모든 것을 알고 있는 객체
//	throw "function1을 수행!, 예외 상황 발생!"; // 무조건 잡아야 하는데 아무도 처리 안해주면 OS가 처리 함..
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	function1(10);
//	function2(20);
//	system("pause");
//}



///*
//server			/			 client
//클래스 예외				try, catch
//throw
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void function1(int n)
//{
//	cout << "function1 : " << n << endl;
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	function1(10);
//	function2(20);
//	system("pause");
//}

///*
//예외(Exception) - 예기치(예상치) 못하는 문제에 대한 프로그램 실행
//-> 실제 프로그램에 대한 예외 : 프로그램이 대처할 수 없는 프로그램 실행(문제) 오류
//ex) 네트워크 통신을 하고 있는데, 네트워크가 끊겼어..
//ex) 할당하고자 하는 메모리가 부족해. 
//이런 것들은 응용 프로그램이 잘못한게 아닌거!
//- 최소한 사용자들한테 왜 문제가 발생했는지 알림 + 적정한 처리 해주는 것
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void main()
//{
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool cmp(const int* a, const int* b)
//{
//	return *a < *b ? true : false;
//}
//struct Pred
//{
//	bool operator()(const int* a, const int* b)
//	{
//		return *a < *b ? true : false;
//	}
//};
//void main()
//{
//	vector<int*> v;// 정수의 참조를 보관
//
//	v.push_back(new int(30));
//	v.push_back(new int(30));
//	v.push_back(new int(20));
//	v.push_back(new int(50));
//	v.push_back(new int(10));
//	v.push_back(new int(40));
//
//	cout << Pred()(new int(10), new int(20)) << endl;
//	cout << Pred()(new int(50), new int(20)) << endl;
//
//	sort(v.begin(), v.end(), Pred()/*함수 객체(functor)*/);
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << *v[i] << " ";
//	cout << endl;
//	for (unsigned i = 0; i < v.size(); ++i)
//		delete v[i];
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool cmp(const int* a, const int* b)
//{
//	return *a < *b ? true : false;
//}
//struct Pred
//{
//	bool operator()(const int* a, const int* b)
//	{
//		return *a < *b ? true : false;
//	}
//};
//void main()
//{
//	vector<int*> v;// 정수의 참조를 보관
//
//	v.push_back(new int(30));
//	v.push_back(new int(30));
//	v.push_back(new int(20));
//	v.push_back(new int(50));
//	v.push_back(new int(10));
//	v.push_back(new int(40));
//
//	cout << Pred()(new int(10), new int(20)) << endl;
//	cout << Pred()(new int(50), new int(20)) << endl;
//
//	sort(v.begin(), v.end(), Pred()); 
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << *v[i] << " ";
//	cout << endl;
//	for (unsigned i = 0; i < v.size(); ++i)
//		delete v[i];
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool cmp(const int* a, const int* b)
//{
//	return *a < *b ? true : false;
//}
//void main()
//{
//	vector<int*> v;// 정수의 참조를 보관
//
//	v.push_back(new int(30));
//	v.push_back(new int(30));
//	v.push_back(new int(20));
//	v.push_back(new int(50));
//	v.push_back(new int(10));
//	v.push_back(new int(40));
//
//	sort(v.begin(), v.end(), cmp); // algorithm
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << *v[i] << " ";
//	cout << endl;
//	for (unsigned i = 0; i < v.size(); ++i)
//		delete v[i];
//	system("pause");
//}
//


//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//void main()
//{
//	vector<int*> v;// 정수의 참조를 보관
//
//	v.push_back(new int(10));
//	v.push_back(new int(20)); 
//	v.push_back(new int(30));
//	v.push_back(new int(40));
//	v.push_back(new int(50));
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << *v[i] << " ";
//	cout << endl;
//	for (unsigned i = 0; i < v.size(); ++i)
//		delete v[i];
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	system("pause");
//}