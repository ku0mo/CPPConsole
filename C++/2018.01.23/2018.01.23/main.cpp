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

	//cout << Print << endl; // �Լ��� �̸��� �Լ��� �����ϴ� �ּҴ�. �̷� �Լ� �־�? ����
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
//template <typename T>// T��� Ÿ���� �̷��� Ŭ���̾�Ʈ�� �����ϴ� Ÿ���̴�. ( �Լ� ���ø� )
//void Print(T data) // T�� �̷��� Ŭ���̾�Ʈ�� �����Ѵ�.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//}
//
//int main()
//{
//	// �Լ� 2�� �ۿ� �� ������� ����
//	Print(100);
//	Print<const char*>("Hello");
//	Print<int>(200);
//	Print<int>('A'); // ���� Ÿ������ �Լ��� ȣ�� �Ǳ� ������!
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>// T��� Ÿ���� �̷��� Ŭ���̾�Ʈ�� �����ϴ� Ÿ���̴�. ( �Լ� ���ø� )
//void Print(T data) // T�� �̷��� Ŭ���̾�Ʈ�� �����Ѵ�.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//}
//
//int main()
//{
//	// ��¥ �̸���
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
//template <typename T>// T��� Ÿ���� �̷��� Ŭ���̾�Ʈ�� �����ϴ� Ÿ���̴�. ( �Լ� ���ø� )
//void Print(T data) // T�� �̷��� Ŭ���̾�Ʈ�� �����Ѵ�.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//}
//
//int main()
//{
//	// ��¥ �̸���
//	Print<int>(100);
//	Print<const char*>("Hello");
//	Print<double>(7.89);
//	Print<char>('A');
//
//	system("pause");
//}




//
///*
//���ø�
//
//1. �Լ� ���ø�(Ʋ)
//
//2. Ŭ���� ���ø�(Ʋ)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>// T��� Ÿ���� �̷��� Ŭ���̾�Ʈ�� �����ϴ� Ÿ���̴�. ( �Լ� ���ø� )
//void Print(T data) // T�� �̷��� Ŭ���̾�Ʈ�� �����Ѵ�.
//{
//	cout << typeid(T).name() << " " << data << endl; //
//	/*
//	Ŭ���̾�Ʈ�� �ڵ带 ����, TŸ���� �����ϴ� ��
//	�� Ʋ�� ���� ��������� �Լ��� �ν��Ͻ� �Լ�(���� �Լ�)��� ��
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
//template <typename T>// T��� Ÿ���� �̷��� Ŭ���̾�Ʈ�� �����ϴ� Ÿ���̴�.
//void Print(T data) // T�� �̷��� Ŭ���̾�Ʈ�� �����Ѵ�.
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
//Print( � Ÿ�� ) �� ���͵� �����ϰ� �ϰ� ����.
//�� ��� Ÿ�Կ� ���ؼ� ��� �����ϰ� ����� ����.
//*/
//template <typename T>// T��� Ÿ���� �̷��� Ŭ���̾�Ʈ�� �����ϴ� Ÿ���̴�.
//void Print(T data) // T�� �̷��� Ŭ���̾�Ʈ�� �����Ѵ�.
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
//Print( � Ÿ�� ) �� ���͵� �����ϰ� �ϰ� ����.
//�� ��� Ÿ�Կ� ���ؼ� ��� �����ϰ� ����� ����.
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

//// 2. operator Type() �� ��ȯ ���
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) : x(x), y(y) // �Ϲ����� ����ȯ�� ������� �ʴ´�. ( ��������θ� �� �����ڸ� ȣ�� �ϰڴ�.)
//	{
//		/*
//		���⿡�� 3���� �����ڰ� �ִ� ��
//		�μ� 0��, �μ� 1��, �μ� 2�� ������ ������
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
//	int x = p1;// p1.operator int() ��� �Լ��� �ִ��� Ȯ���غ���.
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
//	int size; // ���ڿ��� ���� ����
//public:
//	String(int n)// int ������ String(������) �������� ��ȯ �� �� �ִ�.
//	{
//		char temp[100];
//		sprintf_s(temp, "%d", n);// temp��� ���� ������ ��
//
//		size = strlen(temp);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, temp);
//	}
//	String(const char* s) /// char* ������ String �������� �ڵ������� ��ȯ�ϰڴ�. explicit �� ����
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
//	int size; // ���ڿ��� ���� ����
//public:
//	String(const char* s) /// char* ������ String �������� �ڵ������� ��ȯ�ϰڴ�. explicit �� ����
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
//	int size; // ���ڿ��� ���� ����
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
//	int size; // ���ڿ��� ���� ����
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
//���� ��ȯ
//1. ����� ����ȯ(explicit)
//2. �Ϲ��� ����ȯ(implicit) ex) P* p = &'c' // �ڽ��� �θ�� �� ��ȯ �� ���� �Ϲ������� �� ��ȯ �ȴ�.
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int x = 0, int y = 0) : x(x), y(y) // �Ϲ����� ����ȯ�� ������� �ʴ´�. ( ��������θ� �� �����ڸ� ȣ�� �ϰڴ�.)
//	{
//		/*
//		���⿡�� 3���� �����ڰ� �ִ� ��
//		�μ� 0��, �μ� 1��, �μ� 2�� ������ ������
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
//	p1 = (Point)10; // ���� ������ ��ȯ���ָ� ����
//	p1.Print();
//
//	p1 = Point(10);
//	p1.Print();
//
//	system("pause");
//}


///*
//���� ��ȯ
//1. ����� ����ȯ(explicit) 
//2. �Ϲ��� ����ȯ(implicit) ex) P* p = &'c' // �ڽ��� �θ�� �� ��ȯ �� ���� �Ϲ������� �� ��ȯ �ȴ�.
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
//		���⿡�� 3���� �����ڰ� �ִ� ��
//		�μ� 0��, �μ� 1��, �μ� 2�� ������ ������
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
//	// �Ϲ��� ����ȯ
//	p1 = 10; //  �̷��� ���� 
//			 //p1 = Point(10); //�ӽ� ��ü�� ����� ����. �����Ϸ���
//			 /*
//			 ������ ȣ���� �̿��� ���� ��ȯ
//			 - �����ڸ� ���ؼ� ������ ��ȯ�Ǵ��� �����Ϸ��� �غ�
//			 */
//	p1.Print();
//	system("pause");
//}


///*
//���� ��ȯ
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
//	p1 = 10; //  �̷��� ���� 
//	//p1 = Point(10); //�ӽ� ��ü�� ����� ����. �����Ϸ���
//	/*
//	������ ȣ���� �̿��� ���� ��ȯ
//	- �����ڸ� ���ؼ� ������ ��ȯ�Ǵ��� �����Ϸ��� �غ�
//	*/
//	p1.Print();
//	system("pause");
//}



///*
//���� ��ȯ
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
//	int size; // ���ڿ��� ���� ����
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
//	int size; // ���ڿ��� ���� ����
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
//���� �����ڿ��� ���� ���� ���� ������ Ŭ���� ������ �ƴ� ��� ��� ������ �ߺ��� �� �� ����. 
//�׷��� ���� �Լ� ������ �ߺ����� �ؾ� �Ѵ�.
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
//ostream& operator<<(ostream& o, const Point& pt) // ���ϴ� ��ü���� const ���� �ȵ�
//{
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//int main()
//{
//	Point p1(2, 3);
//	//cout << p1 << endl; // �̷��� ��� �ϰ� ���� �ž�.
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
//	cout << 100 << endl; // <<�� ������ (��� ��Ʈ�� ������) cout�� ��� ��Ʈ�� ��ü
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
//���� ������ �ߺ�
//
//- ��� �Լ� ������ �ߺ�
//
//
//- ���� �Լ� ������ �ߺ�
//����Լ��� �� �� ���� �� ��� �� (���� ��ü�� Ŭ������ ������ �� �ִ� ��ü�� �ƴϱ� ������)
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
//	//Point p3 = p1 + 10; //�Ѵ� 10�� ���ض�
//	Point p3 = 10 + p1; //�Ѵ� 10�� ���ض� //������ ��ȯ ��Ģ�� �ǾߵǴµ�, ��� �Լ��� �̿��� ������ �ߺ����δ� �Ұ���
//	// ->  operator+(10, p1); �����Ϸ��� �̷� ���� �Լ��� �ִ��� ������ ��ӵ� �Լ�
//	/*
//	�ٸ� ������ ����Լ��� ������ �ߺ��� �� ��.
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
//	Point p3 = p1 + 10; //�Ѵ� 10�� ���ض�
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
//	int size; // ���ڿ��� ���� ����
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
//	for (int i = 0; s[i]; ++i) // null���ڳ� �ƴϸ� ��� // null �̸� ���� ����
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
//	int size; // ���ڿ��� ���� ����
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
//	int size; // ���ڿ��� ���� ����
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
//	int size; // ���ڿ��� ���� ����
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
//	���� �޸𸮷� �ּҸ� ������ �ִ� �Ͱ� �ٸ� ���� �޸� �Ҵ� �ް� �ּҸ� ������ �ִ� �Ͱ��� �ٸ���.
//	�������� ��Ʈ���� ����� ���ؼ� �������� !
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