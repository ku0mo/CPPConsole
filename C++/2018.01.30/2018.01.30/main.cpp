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
//		return a/100 > b/100; // ���� ����ϴ� ���
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	sort(v.begin(), v.end(), Greater<int>()); // �ʹ� ���� �Ἥ ����� �� a > b
//	//sort(v.begin(), v.end(), less<int>()); // a < b // ����Ʈ
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
//		return a > b; // �տ� �Ű� ũ�� �� (���� ���� ����)
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	//sort(v.begin(), v.end(), greater<int>()); // �ʹ� ���� �Ἥ ����� �� a > b
//	sort(v.begin(), v.end(), less<int>()); // a < b // ����Ʈ
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
//		return a > b; // �տ� �Ű� ũ�� �� (���� ���� ����)
//	}
//};
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; ++i)
//		v.push_back(rand() % 10000);
//
//	//sort(v.begin(), v.end(), greater<int>()); // �ʹ� ���� �Ἥ ����� �� a > b
//	sort(v.begin(), v.end(), less<int>()); // a < b // ����Ʈ
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
//		return a > b; // �տ� �Ű� ũ�� �� (���� ���� ����)
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
//template <typename Iter, typename F>	 // �Ϲ�ȭ �Լ��� ����� ���ؼ�
//void For_each(Iter siter, Iter eiter, F fun)
//{
//	cout << typeid(Iter).name() << "," << typeid(F).name() << endl;
//	for (; siter != eiter; ++siter)
//		fun(*siter); // ��� ���ҿ� ���ؼ�
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
//	// ������ �ð��� �Ű����� ���� Ÿ�� ����
//	For_each(v.begin(), v.end(), Print); // ������ (��� ������ ) �� ���ؼ� Print�� �ݹ��ض�
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
//		fun(*siter); // ��� ���ҿ� ���ؼ�
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
//	// ������ �ð��� �Ű����� ���� Ÿ�� ����
//	For_each(v.begin(), v.end(), Print); // ������ (��� ������ ) �� ���ؼ� Print�� �ݹ��ض�
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
//		fun(*siter); // ��� ���ҿ� ���ؼ�
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
//	For_each(v.begin(), v.end(), Print); // ������ (��� ������ ) �� ���ؼ� Print�� �ݹ��ض�
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
//		fun(*siter); // ��� ���ҿ� ���ؼ�
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
//	For_each(v.begin(), v.end(), PrintF<int>()); // ������ (��� ������ ) �� ���ؼ� Print�� �ݹ��ض�
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
//		fun(*siter); // ��� ���ҿ� ���ؼ�
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
//	For_each(v.begin(), v.end(), PrintF<int>()); // ������ (��� ������ ) �� ���ؼ� Print�� �ݹ��ض�
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
//	for_each(v.begin(), v.end(),Print); // ������ (��� ������ ) �� ���ؼ� Print�� �ݹ��ض�
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
//	for (int i = 0; i < 5; ++i) // ���α׷� �ϴٺ��� ��ü���� Ÿ��(down casting)�� �ٷ�� �� ���� ��.
//	{
//		cout << typeid(*parr[i]).name() << endl;// typeid ���� ��ü ��ü��� ���� ��
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
//	for (int i = 0; i < 5; ++i) // ���α׷� �ϴٺ��� ��ü���� Ÿ��(down casting)�� �ٷ�� �� ���� ��.
//	{// ��ü���� Ÿ���� ��󳻱� ���ؼ�, �� Child1�� ������ �ִ� ����� ����ϱ� ���ؼ�
//	 //((Child1*)parr[i])->PrintChild1(); // down casting // �̷��� �ϸ� ��� ��ü�� �ٿ� ĳ���� ��
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
//	const type_info& ti = typeid(int); // typeinfo ��ü�� ���纻 ����x, ������ �� ����! 
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
//	cout << typeid(int).name() << endl; // int�� ���� type ��ü�� ������ ȣ���Ѱ���
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
//	//throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 ���� �߻�");
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const exception& e) //���⼭ �� ������
//	{
//		cout << e.what() << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	//throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 ���� �߻�");
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const exception& e) //���⼭ �� ������
//	{
//		cout << e.what() << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	//throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 ���� �߻�");
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const Exception& e) //���⼭ �� ������
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	//throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF2("function2 ���� �߻�");
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e) //���⼭ �� ������
//	{
//		cout << e.What() << endl;
//	}
//	catch (const ExF2& e) //���⼭ �� ������
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	//throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//	throw ExF1("function1 ���� �߻�");
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e) //���⼭ �� ������
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const ExF1& e) //���⼭ �� ������
//	{
//		cout << e.What() << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const char* ex) //���⼭ �� ������
//	{
//		cout << ex << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	throw ExF1("function1 ���� �߻�");
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10);
//		function2(20);
//	}
//	catch (const char* ex) //���⼭ �� ������
//	{
//		cout << ex << endl;
//	}
//	catch (...) //���⼭ ����.. ������ ���� ó��
//	{
//		cout << "����!" << endl;
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
//	//throw exc;//���� ��ü�� ����, ���� ��ü�� ���ܿ� ���� ��� ���� �˰� �ִ� ��ü
//	throw "function1�� ����!, ���� ��Ȳ �߻�!"; // ���ܰ� �������� ������ ��ƾ� �ϴµ� �ƹ��� ó�� �����ָ� OS�� ó�� ��..
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{ // ���� 2������ �Լ��� �������� �Լ����, ���� try�� ����, ���� �������̶��, try ����, ���� function1���� ���� �߻��ϸ� ������ �Լ��� ���� ���� ����
//		function1(10); 
//		function2(20); 
//	}
//	catch (const char* ex) //���ڿ��� ��Ƽ� ���
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
//	//throw exc;//���� ��ü�� ����, ���� ��ü�� ���ܿ� ���� ��� ���� �˰� �ִ� ��ü
//	throw "function1�� ����!, ���� ��Ȳ �߻�!"; // ���ܰ� �������� ������ ��ƾ� �ϴµ� �ƹ��� ó�� �����ָ� OS�� ó�� ��..
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{
//		function1(10); // function1�� �����ϴٰ� ���ܰ� �߻��ϸ�
//	}
//	catch (const char* ex) //���ڿ��� ��Ƽ� ���
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
//	//throw exc;//���� ��ü�� ����, ���� ��ü�� ���ܿ� ���� ��� ���� �˰� �ִ� ��ü
//	throw "function1�� ����!, ���� ��Ȳ �߻�!"; // ���ܰ� �������� ������ ��ƾ� �ϴµ� �ƹ��� ó�� �����ָ� OS�� ó�� ��..
//}
//void function2(int n)
//{
//	cout << "function2 : " << n << endl;
//}
//void main()
//{
//	try
//	{
//		function1(10); // function1�� �����ϴٰ� ���ܰ� �߻��ϸ�
//	}
//	catch (...) // ���ܸ� ��ڴ� (...) �� ��� ���ܿ� ���ؼ�
//	{
//		cout << "� ���� �߻�!";
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
//	//throw exc;//���� ��ü�� ����, ���� ��ü�� ���ܿ� ���� ��� ���� �˰� �ִ� ��ü
//	throw "function1�� ����!, ���� ��Ȳ �߻�!"; // ������ ��ƾ� �ϴµ� �ƹ��� ó�� �����ָ� OS�� ó�� ��..
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
//Ŭ���� ����				try, catch
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
//����(Exception) - ����ġ(����ġ) ���ϴ� ������ ���� ���α׷� ����
//-> ���� ���α׷��� ���� ���� : ���α׷��� ��ó�� �� ���� ���α׷� ����(����) ����
//ex) ��Ʈ��ũ ����� �ϰ� �ִµ�, ��Ʈ��ũ�� �����..
//ex) �Ҵ��ϰ��� �ϴ� �޸𸮰� ������. 
//�̷� �͵��� ���� ���α׷��� �߸��Ѱ� �ƴѰ�!
//- �ּ��� ����ڵ����� �� ������ �߻��ߴ��� �˸� + ������ ó�� ���ִ� ��
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
//	vector<int*> v;// ������ ������ ����
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
//	sort(v.begin(), v.end(), Pred()/*�Լ� ��ü(functor)*/);
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
//	vector<int*> v;// ������ ������ ����
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
//	vector<int*> v;// ������ ������ ����
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
//	vector<int*> v;// ������ ������ ����
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