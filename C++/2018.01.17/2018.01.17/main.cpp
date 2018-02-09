#include <iostream>
#include <vector>
using namespace std;
class Array // �����̳� Ŭ����
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
	Array arr; // �����̳� ��ü ( 100, 200, 300 ������ ��� �ִ� ��ü ) �÷��� Ÿ��, Ȥ�� �����̳� Ÿ��

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
//class Array // �����̳� Ŭ����
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
//	Array arr; // �����̳� ��ü ( 100, 200, 300 ������ ��� �ִ� ��ü ) �÷��� Ÿ��, Ȥ�� �����̳� Ÿ��
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
//	Array arr; // �����̳� ��ü ( 100, 200, 300 ������ ��� �ִ� ��ü ) �÷��� Ÿ��, Ȥ�� �����̳� Ÿ��
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
//	Array arr; // �����̳� ��ü ( 100, 200, 300 ������ ��� �ִ� ��ü ) �÷��� Ÿ��, Ȥ�� �����̳� Ÿ��
//
//	arr.push_back(100);
//	arr.push_back(200);
//	arr.push_back(300);
//
//	cout << arr.at(0) << endl; // 0�� ��
//	cout << arr.at(1) << endl;
//	cout << arr.at(2) << endl;
//
//	system("pause");
//}


///*
//�ڷᱸ�� ��ü
//Set(����) ��ü
//Collection ��ü
//
//C++������ ��ü�� ��� ��ü�� �����̳ʶ�� ��
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//typedef vector<int> Array;
//
//int main()
//{
//	Array arr; // �����̳� ��ü ( 100, 200, 300 ������ ��� �ִ� ��ü ) �÷��� Ÿ��, Ȥ�� �����̳� Ÿ��
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
//�⺻ ��� �Լ� (����� �ȸ������, �ȸ���� �������)
//1. �⺻ ������				Test() { }
//2. �⺻ �Ҹ���			    ~Test() { }
//3. �⺻ ���� ������			Test(const Test&) { }
//4. �⺻ ���� ������			const Test& operator=(const Test&)
//*/
//
//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//
//class Point
//{
//	int* px; //������ ����
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL) // �Ϲ� ������
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	Point(const Point& arg)								// ���� ������
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
//	p2 = p1; // ���Կ��� C++���� ��ü�� ����� ���� ���縸 ������ ( ���� ���� ���縦 �Ϸ���, ���� ���� �����ڸ� ������ ��)
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
//	int* px; //������ ����
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL) // �Ϲ� ������
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	Point(const Point& arg)								// ���� ������
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
//	int* px; //������ ����
//	int* py;
//public:
//	Point(int _x = 0, int _y = 0) : px(NULL), py(NULL) // �Ϲ� ������
//	{
//		px = new int(_x);
//		py = new int(_y);
//	}
//	Point(const Point& arg)								// ���� ������
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
//	int* px; //������ ����
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
//��ü ������ ��ü�� ����� 2���� ���簡 �ִ�.
//
//1. ���� ���� (Shallow Copy) - ��� �� ��� ����(��Ʈ ����)
//- ��ü�� ������ �״�� ���� : 
//
//2. ���� ���� (Deep Copy)
//- ������ ������ �ִ� ���빰������ �����ϴ� ��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	char* name; //���� ���� ��ü (���� ������ �����ؼ� �ؾ� �� )
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
//	//���� ���� ��ü�ε� �� ���� ���簡 ����Ǳ� ������ ������ �ִ� �ڵ�
//	//�ʱ�ȭ ����
//	//Person p2(p1);
//	//p2.Print();
//
//	//���� ����
//	//Person p2;
//	//p2 = p1;
//
//	system("pause");
//}



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//	char* name; //���� ���� ��ü (���� ������ �����ؼ� �ؾ� �� )
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

//4����



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x; //������ ����
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
//	��ü�� �����ϴ� ���
//	1. �ʱ�ȭ�� ���� ��ü�� ���� : �� ���� ��ü�� ���翡�� ������ �߻����� ����, ���� ���� ��ü�� ������ �߻�
//	2. ������ ���� ��ü�� ���� 
//	*/
//	//Point p2 = p1; // ���� Ÿ���� ��ü������ ���簡 ������ , �ʱ�ȭ
//	Point p2(p1); //�ʱ�ȭ�� �� �� C++ ������ �̷��� �� (������ ������ ����)
//
//	p2.Print();
//
//	Point p3;
//	p3 = p1; // ���� // �޸� ���� ( ����� ��� ���� , ��Ʈ �޸� ����)
//	p3.Print();
//	system("pause");
//}



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x; //������ ����
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
//	��ü�� �����ϴ� ��� 
//	1. �ʱ�ȭ�� ���� ��ü�� ����
//	2. ������ ���� ��ü�� ����
//	*/
//	Point p2 = p1; // ���� Ÿ���� ��ü������ ���簡 ������ , �ʱ�ȭ
//	p2.Print(); 
//
//	Point p3;
//	p3 = p1; // ���� // �޸� ���� ( ����� ��� ���� , ��Ʈ �޸� ����)
//	p3.Print();
//	system("pause");
//}



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int* px; //������ ����
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
//	���� ���� �����ϴ� ��� 
//	���� ��ġ�� �����ϴ� ���
//	*/
//	/*
//	�� ���� ��ü : ���¸� ������ ������ ���� (���� ������)
//	���� ���� ��ü : ���¸� �ּ�(����)�� ������ ����  (���� ����)
//	*/
//	Point p1(2, 3);
//	p1.Print();
//	system("pause");
//}
//// 3����


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // �̰� ��¥ �ʱ�ȭ 
//	{
//		/*
//		�ʱ�ȭ : �޸𸮸� �����ϰ� ���ʷ� ���� �Ҵ��ϴ� ��
//		��	�� : �ʱ�ȭ �ϰ� �� �������� ���� �ִ� ��
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


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // �̰� ��¥ �ʱ�ȭ 
//	{
//		/*
//		�ʱ�ȭ : �޸𸮸� �����ϰ� ���ʷ� ���� �Ҵ��ϴ� ��
//		��	�� : �ʱ�ȭ �ϰ� �� �������� ���� �ִ� ��
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
//		Point arr[5] = { Point(5,6), Point(3,4) }; // �迭�� �ʱ�ȭ �Ǹ� �ʱ�ȭ ���� ������, ������ �⺻ �����ڰ�
//		for (int i = 0; i < 5; ++i)
//			arr[i].Print();
//	}
//	system("pause");
//}


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // �̰� ��¥ �ʱ�ȭ 
//	{
//		/*
//		�ʱ�ȭ : �޸𸮸� �����ϰ� ���ʷ� ���� �Ҵ��ϴ� ��
//		��	�� : �ʱ�ȭ �ϰ� �� �������� ���� �ִ� ��
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
//		Point arr[5] = { Point(5,6), Point(3,4) }; // �迭�� �ʱ�ȭ �Ǹ� �ʱ�ȭ ���� ������, ������ �⺻ �����ڰ�
//		for (int i = 0; i < 5; ++i)
//			arr[i].Print();
//	}
//	system("pause");
//}


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y) // �̰� ��¥ �ʱ�ȭ 
//	{
//		/*
//		�ʱ�ȭ : �޸𸮸� �����ϰ� ���ʷ� ���� �Ҵ��ϴ� ��
//		��	�� : �ʱ�ȭ �ϰ� �� �������� ���� �ִ� ��
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


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
//	{
//		this->x = x; // this�� �� �޼ҵ尡 ����� ���� ���� ��ü�� �ּ�
//		this->y = y; // ���������! 
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



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
//	{
//		/*
//
//		*/
//		this->x = x; // this�� �� �޼ҵ尡 ����� ���� ���� ��ü�� �ּ�
//		this->y = y; // ���������! 
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
//	cout << &p1 << " : "; p1.Print(); // �� �Լ��� ȣ�� �� ��, �� �Լ��� ȣ���� ��ü�� �ּҰ�(�ڱ� �ڽ��� �ּ�)�� �Ѿ��.
//	cout << &p2 << " : "; p2.Print(); // ��������� this�� &p2 // p2�� �ּ�
//	cout << &p3 << " : "; p3.Print();
//
//	system("pause");
//}



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
//	{
//		/*
//		
//		*/
//		this->x = x; // this�� �� �޼ҵ尡 ����� ���� ���� ��ü�� �ּ�
//		this->y = y; // ���������! 
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
//	p1.Print(); // �� �Լ��� ȣ�� �� ��, �� �Լ��� ȣ���� ��ü�� �ּҰ�(�ڱ� �ڽ��� �ּ�)�� �Ѿ��.
//	p2.Print(); // ��������� this�� &p2 // p2�� �ּ�
//	p3.Print();
//
//	system("pause");
//}


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
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
//void PrintPoint(const Point* p /* �ܽ�Ʈ ��ü�� ���� Write ���ϰ� */)
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




////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
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



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
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




////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
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
//		p->Print(); //p�� ����Ű��  Point��ü�� �� �����
//
//		delete p;
//	}
//	system("pause");
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}

//2 ����

////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) //�μ��� ���ָ� �⺻ ������ 0�� ���
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
//		Point p1(10);		// x�� �ʱ�ȭ
//		Point p2;			// �˾Ƽ� �ʱ�ȭ
//		Point p3(2, 3);		//2���� �ʱ�ȭ (�μ��� 2�� �޴� �ʱ�ȭ ������(�Լ�)�� ����.)
//
//		p1.Print();
//		p2.Print();
//		p3.Print();
//	} //�Ҹ��� ȣ��
//	system("pause");
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
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
//	Point(int _x=0) //�μ��� ���ָ� �⺻ ������ 0�� ���
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
//	} //�Ҹ��� ȣ��
//	system("pause");
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}





////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
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
//	} //�Ҹ��� ȣ��
//	system("pause");
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}
//


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	//int n = 10; 
//	int n(10); // �ʱ�ȭ�� �̷��� �ص� �� (c++�� ����) // C++ INT Ÿ��(����) Ŭ������� �ҷ��� �� (int Ŭ����)
//	cout << n << endl;
//	system("pause");
//}




////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
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
//	} // ������ ( �� �������� �ڵ������� ���� - �⺻ ������ - ����Ʈ ������)
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}// �Ҹ��� ( �� �������� �ڵ������� ���� - �⺻ �Ҹ��� - ����Ʈ �Ҹ���)
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	{
//		Point p1; // p1�� �����ɶ� �ڵ����� ������ ȣ�� //p1�� ������� �ڵ����� �Ҹ��� ȣ�� ( ���ÿ��� ���� �� �� ����� ���� ��)
//
//		p1.Print();
//	} //�Ҹ��� ȣ��
//	system("pause");
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
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
//	} // ������ ( �� �������� �ڵ������� ���� - �⺻ ������ - ����Ʈ ������)
//	~Point() 
//	{
//		cout << "~Point()" << endl;
//	}// �Ҹ��� ( �� �������� �ڵ������� ���� - �⺻ �Ҹ��� - ����Ʈ �Ҹ���)
//	void Print()
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1; // p1�� �����ɶ� �ڵ����� ������ ȣ�� //p1�� ������� �ڵ����� �Ҹ��� ȣ�� ( ���ÿ��� ���� �� �� ����� ���� ��)
//
//	p1.Print();
//	system("pause");
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}



////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
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
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}





////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Point 
//{
////private: // class�� �����ϸ� �����̺�
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
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}
//


////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Point // �ƹ��͵� �Ⱦ��� �ܺη� ������ ( ���� �Ƚ�Ű���� private
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
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}




////C++ ��ü���⿡���� �����Լ��� ������ ����( �����Լ� - ���������� �����ϴ� �Լ� )
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
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}

//// C ��Ÿ�� (���� ������- ���μ��� �߽���)
///*
//��ü������ �׷��� ��������! ���ü� ���� �����Ϳ� ��ɾ���� �ϳ��� ����!
//�Ǽ��迡���� ��ü�� ������ ��ҿ� ������ ��Ҹ� ���� ����
//��ǻ�� ���迡�� ��ü�� �� �Ǽ��迡 �����ϴ� ��� ���� �Ǵ� ��
//ex) ���� ��ü, ������ ��ü, ��� ��� �� ��ü (�츮�� ��ü�� ����� ���� ��)
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
//	return 0; // �����ϸ� 0�� �˾Ƽ� ��ȯ
//}

//1 ����