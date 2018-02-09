#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y)
	{

	}
	void Print() const
	{
		cout << x << ',' << y << endl;
	}
	int GetX() const { return x; }
	int GetY() const { return y; }
	void SetX(int x) { this->x = x; }
	void SetY(int x) { this->y = y; }
};
class Shape
{
public:
	virtual ~Shape() {}
	virtual void Print() const = 0;
};
class Rectangle : public Shape
{
	Point pts, pte;
public:
	Rectangle(int x1, int y1, int x2, int y2)
		:pts(x1, y1), pte(x2, y2)
	{

	}
	Rectangle(const Point& pts = Point(), const Point& pte = Point()) // �⺻ �� (�⺻ ������ ȣ�� (0,0)
		:pts(pts), pte(pte)
	{

	}
	void Print() const
	{
		cout << pts.GetX() << ',' << pts.GetY() << " - " <<
			pte.GetX() << ',' << pte.GetY() << endl;
	}
};
class Circle : public Shape
{
	int radius;
	Point origin; // ����
public:
	Circle(const Point& pt = Point(), int r = 0)
		:origin(pt), radius(r) {}
	void Print() const
	{
		cout << "r : " << radius << "-";
		origin.Print();
	}
};
int main()
{
	Rectangle r(Point(0, 0), Point(2, 3));
	Circle c(Point(2, 3), 100);

	Shape* arr[2] = { &r, &c };

	arr[0]->Print();
	arr[1]->Print();

	system("pause");
}


//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//
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
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int x) { this->y = y; }
//};
//class Shape
//{
//public:
//	virtual void Print() const = 0;
//};
//class Rectangle : public Shape
//{
//	Point pts, pte;
//public:
//	Rectangle(int x1, int y1, int x2, int y2)
//		:pts(x1, y1), pte(x2, y2)
//	{
//
//	}
//	Rectangle(const Point& pts = Point(), const Point& pte = Point()) // �⺻ �� (�⺻ ������ ȣ�� (0,0)
//		:pts(pts), pte(pte)
//	{
//
//	}
//	void Print() const
//	{
//		cout << pts.GetX() << ',' << pts.GetY() << " - " <<
//			pte.GetX() << ',' << pte.GetY() << endl;
//	}
//};
//class Circle : public Shape
//{
//	int radius;
//	Point origin; // ����
//public:
//	Circle(const Point& pt = Point(), int r = 0)
//		:origin(pt), radius(r) {}
//	void Print() const
//	{
//		cout << "r : " << radius << "-";
//		origin.Print();
//	}
//
//};
//int main()
//{
//	Rectangle r(Point(0, 0), Point(2, 3));
//	Circle c(Point(2, 3), 100);
//
//	Shape* arr[2] = { &r, &c };
//
//	arr[0]->Print();
//	arr[1]->Print();
//
//	system("pause");
//}



//#include <iostream>
//#include <string>
//#include <cstdlib>
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
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int x) { this->y = y; }
//};
//class Rectangle
//{
//	Point pts, pte;
//public:
//	Rectangle(int x1, int y1, int x2, int y2)
//		:pts(x1, y1), pte(x2, y2)
//	{
//
//	}
//	Rectangle(const Point& pts = Point(), const Point& pte = Point()) // �⺻ �� (�⺻ ������ ȣ�� (0,0)
//		:pts(pts), pte(pte)
//	{
//
//	}
//	void Print() const
//	{
//		cout << pts.GetX() << ',' << pts.GetY() << " - " <<
//			pte.GetX() << ',' << pte.GetY() << endl;
//	}
//};
//class Circle
//{
//	int radius;
//	Point origin; // ����
//public:
//	Circle(const Point& pt = Point(), int r=0)
//		:origin(pt), radius(r) {}
//	void Print() const
//	{
//		cout << "r : " << radius << "-";
//		origin.Print();
//	}
//	
//};
//int main()
//{
//	//Rectangle r(2, 3, 5, 8);
//	//Rectangle r(Point(2, 3), Point(5, 7));
//	Rectangle r;
//	r.Print();
//
//	Circle c(Point(0, 0), 10);
//	c.Print();
//
//	system("pause");
//}


//#include <iostream>
//#include <string>
//#include <cstdlib>
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
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int x) { this->y = y; }
//};
//class Rectangle
//{
//	Point pts, pte;
//public:
//	Rectangle(int x1 , int y1 , int x2 , int y2 )
//		:pts(x1, y1), pte(x2, y2)
//	{
//
//	}
//	Rectangle(const Point& pts=Point(), const Point& pte=Point()) // �⺻ �� (�⺻ ������ ȣ�� (0,0)
//		:pts(pts), pte(pte)
//	{
//
//	}
//	void Print() const
//	{
//		cout << pts.GetX() << ',' << pts.GetY() << " - " <<
//			pte.GetX() << ',' << pte.GetY() << endl;
//	}
//};
//int main()
//{
//	//Rectangle r(2, 3, 5, 8);
//	//Rectangle r(Point(2, 3), Point(5, 7));
//	Rectangle r;
//	r.Print();
//
//	system("pause");
//}



//#include <iostream>
//#include <string>
//#include <cstdlib>
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
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void SetX(int x) { this->x = x; }
//	void SetY(int x) { this->y = y; }
//};
//class Rectangle
//{
//	Point pts, pte;
//public:
//	Rectangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0)
//		:pts(x1, y1), pte(x2, y2)
//	{
//
//	}
//	void Print() const
//	{
//		cout << pts.GetX() << ',' << pts.GetY() << " - " <<
//			pte.GetX() << ',' << pte.GetY() << endl;
//	}
//};
//int main()
//{
//	Rectangle r(2, 3, 5, 8);
//	r.Print();
//
//	system("pause");
//}


///*
//�� ���� �����Լ��� ����°�? (���� ���� Ŭ������ ����°� ? - ����ȭ�� �ִ�)
//
//*/
//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected: //���ٱ���
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	virtual void Print()const = 0; // ���� �Լ��� ��ü�� ������ ���� ���� -> �̷� �Լ��� ���� ���� �Լ���� �Ѵ�.( �߻� �޼ҵ� )
//
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string& p = "") : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//		cout << "Professor()" << endl;
//	}
//	virtual ~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	virtual void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << " age: " << age << " position: " << position << endl;
//	}
//};
//
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//		cout << "Student()" << endl;
//	}
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	virtual void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << " age: " << age << " grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person* arr[5] = // �ڽ� ��ü�� ��δ� Person�������� �ٷ� �� �ִ� ������ ����
//	{
//		new Student("ȫ�浿", 20, 1),
//		new Student("����"),
//		new Professor("�̸���", 55, "����"),
//		new Professor("�Ӳ���",50,"������"),
//		new Student("������", 21, 2)
//	};
//	
//	for (int i = 0; i < 5; ++i)
//		arr[i]->Print();
//
//	for (int i = 0; i < 5; ++i)
//		delete arr[i];
//
//	system("pause");
//}



//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected: //���ٱ���
//	string name;
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{
//		cout << "Person()" << endl;
//	}
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	virtual void Print()const // �θ��� Ÿ������ �ڽ��� Ÿ���� ���ǰ� �ִ¶� �ϳ��� Ÿ������ �ٷ�� ���ؼ� virtual �޼ҵ�� �ڽ��� �޼ҵ尡 ȣ�� �� �� �ֵ��� �Ѵ�.
//	{// �θ� virtual�̸� �ڽĵ��� ������ �� virtual �޼ҵ�.
//		cout << "name: " << name << ',' << " age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string& p = "") : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//		cout << "Professor()" << endl;
//	}
//	virtual ~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	virtual void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << " age: " << age << " position: " << position << endl;
//	}
//};
//
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//		cout << "Student()" << endl;
//	}
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	virtual void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << " age: " << age << " grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person* arr[5] = // �ڽ� ��ü�� ��δ� Person�������� �ٷ� �� �ִ� ������ ����
//	{
//		new Student("ȫ�浿", 20, 1), 
//		new Student("����"),
//		new Professor("�̸���", 55, "����"),
//		new Professor("�Ӳ���",50,"������"), 
//		new Student("������", 21, 2) 
//	};
//	for (int i = 0; i < 5; ++i)
//		arr[i]->Print();
//
//	system("pause");
//}


//
//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person** buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person*[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person*[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(Person* data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person* At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//
//int main()
//{ // Ŭ���̾�Ʈ�� ȣ���ѰŸ�, Ŭ���̾�Ʈ�� ����Ʈ ȣ���ؾ� �Ѵ�.
//	PersonArray arr;
//	// �ڷᱸ���� ���� ��ü�� Heap�� ����Ǵ� ��ü���� �Ѵ�.
//	arr.Add(new Person("������", "000-0000-0000")); // �ּҸ� �ѱ� ( & �̷��� �ص� �Ѿ�µ�, �ڷᱸ���� ��� ��ü�� ������� ������� �ȵ� &��ü �̷��� ������ �� ���� ��ü�� ������ ��)
//	arr.Add(new Person("���ϸ�", "111-1111-1111")); // �ּҸ� �ѱ� ( & �̷��� �ص� �Ѿ�µ�, �ڷᱸ���� ��� ��ü�� ������� ������� �ȵ� &��ü �̷��� ������ �� ���� ��ü�� ������ ��)
//
//	Person* p = new Person("���̸�", "222-2222-2222");
//	arr.Add(p);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i)->Print();
//
//	for (int i = 0; i < arr.Size(); ++i)
//		delete arr.At(i);
//
//	system("pause");
//}
//


//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person** buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person*[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person*[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(Person* data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person* At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//
//int main()
//{ // Ŭ���̾�Ʈ�� ȣ���ѰŸ�, Ŭ���̾�Ʈ�� ����Ʈ ȣ���ؾ� �Ѵ�.
//	PersonArray arr;
//	// �ڷᱸ���� ���� ��ü�� Heap�� ����Ǵ� ��ü���� �Ѵ�.
//	arr.Add(new Person("������", "000-0000-0000")); // �ּҸ� �ѱ� ( & �̷��� �ص� �Ѿ�µ�, �ڷᱸ���� ��� ��ü�� ������� ������� �ȵ� &��ü �̷��� ������ �� ���� ��ü�� ������ ��)
//	arr.Add(new Person("���ϸ�", "111-1111-1111")); // �ּҸ� �ѱ� ( & �̷��� �ص� �Ѿ�µ�, �ڷᱸ���� ��� ��ü�� ������� ������� �ȵ� &��ü �̷��� ������ �� ���� ��ü�� ������ ��)
//
//	Person* p = new Person("���̸�", "222-2222-2222");
//	arr.Add(p);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i)->Print();
//
//	for (int i = 0; i < arr.Size(); ++i)
//		delete arr.At(i);
//
//	system("pause");
//}



//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person** buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person*[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person*[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(Person* data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person* At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//
//int main()
//{
//	PersonArray arr;
//	// �ڷᱸ���� ���� ��ü�� Heap�� ����Ǵ� ��ü���� �Ѵ�.
//	arr.Add(new Person("������", "000-0000-0000")); // �ּҸ� �ѱ� ( & �̷��� �ص� �Ѿ�µ�, �ڷᱸ���� ��� ��ü�� ������� ������� �ȵ� &��ü �̷��� ������ �� ���� ��ü�� ������ ��)
//	arr.Add(new Person("���ϸ�", "111-1111-1111")); // �ּҸ� �ѱ� ( & �̷��� �ص� �Ѿ�µ�, �ڷᱸ���� ��� ��ü�� ������� ������� �ȵ� &��ü �̷��� ������ �� ���� ��ü�� ������ ��)
//
//	Person* p = new Person("���̸�", "222-2222-2222");
//	arr.Add(p);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i)->Print();
//
//	// �Ϲ������� ��ü�� �ּҸ� ������
//	/*
//	��ü�� �����ϴ� ��� ( ��ü�� ������ �� ��)
//	��ü�� �ּҸ� �����ϴ� ���
//	1. ��ü�� �ʹ� Ŀ�� (���� ����� �� �� �������� ����)
//	2. �θ� ������ �ּҸ� ��Ƽ� �ڽ� ���ĵ��� �ϳ��� Ÿ������ �ٷ����(������) �Ϸ���
//	*/
//
//	system("pause");
//}



//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//
//int main()
//{
//	PersonArray arr;
//	arr.Add(Person("������", "000-0000-0000"));
//	arr.Add(Person("���ϸ�", "111-1111-1111"));
//	arr.Add(Person("���̸�", "222-2222-2222"));
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i).Print();
//
//	// �Ϲ������� ��ü�� �ּҸ� ������
//	/*
//	��ü�� �����ϴ� ��� ( ��ü�� ������ �� ��)
//	��ü�� �ּҸ� �����ϴ� ���
//	1. ��ü�� �ʹ� Ŀ�� (���� ����� �� �� �������� ����)
//	2. �θ� ������ �ּҸ� ��Ƽ� �ڽ� ���ĵ��� �ϳ��� Ÿ������ �ٷ����(������) �Ϸ���
//	*/
//
//	system("pause");
//}

//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//class TelPhoneBook // �ּ��� ��ȭ��ȣ�θ� ������ �� �ִ� �ڷ� ������ �ʿ���
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "�̸� �Է�: ";
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		cin >> phone;
//		parr.Add(Person(name, phone));
//	}
//	void Print() const
//	{
//		for (int i = 0; i < parr.Size(); ++i)
//			parr.At(i).Print();
//	}
//	void Search() const
//	{
//		string name;
//		cout << "�˻��� �̸� �Է�: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "[" << i << "]:";
//				parr.At(i).Print();
//			}
//	}
//	void Remove()
//	{
//		string name;
//		cout << "������ �̸� �Է�: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "���� ���� [" << i << "]" << endl;
//				parr.Remove(i);
//			}
//	}
//};
//void Menu()
//{
//	cout << "1. ��ȭ��ȣ ���" << endl;
//	cout << "2. ��ȭ��ȣ ���" << endl;
//	cout << "3. ��ȭ��ȣ �˻�" << endl;
//	cout << "4. ��ȭ��ȣ ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	TelPhoneBook tp; // ���� �������̽� ���� ����ſ���.
//	bool run = true;
//	while (run)
//	{
//		Menu();
//		int input;
//		cin >> input;
//		switch (input)
//		{
//		case 1:
//			tp.Add();
//			break;
//		case 2:
//			tp.Print();
//			break;
//		case 3:
//			tp.Search();
//			break;
//		case 4:
//			tp.Remove();
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//
//	system("pause");
//}



//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//class TelPhoneBook // �ּ��� ��ȭ��ȣ�θ� ������ �� �ִ� �ڷ� ������ �ʿ���
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "�̸� �Է�: ";
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		cin >> phone;
//		parr.Add(Person(name, phone));
//	}
//	void Print() const
//	{
//		for (int i = 0; i < parr.Size(); ++i)
//			parr.At(i).Print();
//	}
//	void Search() const
//	{
//		string name;
//		cout << "�˻��� �̸� �Է�: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "[" << i << "]:";
//				parr.At(i).Print();
//			}
//	}
//	void Remove()
//	{
//		string name;
//		cout << "������ �̸� �Է�: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "���� ���� [" << i << "]" << endl;
//				parr.Remove(i);
//			}
//	}
//};
//void Menu()
//{
//	cout << "1. ��ȭ��ȣ ���" << endl;
//	cout << "2. ��ȭ��ȣ ���" << endl;
//	cout << "3. ��ȭ��ȣ �˻�" << endl;
//	cout << "4. ��ȭ��ȣ ����" << endl;
//	cout << "0. ���α׷� ����" << endl;
//}
//int main()
//{
//	TelPhoneBook tp; // ���� �������̽� ���� ����ſ���.
//	bool run = true;
//	while (run)
//	{
//		Menu();
//		int input;
//		cin >> input;
//		switch (input)
//		{
//		case 1:
//			tp.Add();
//			break;
//		case 2:
//			tp.Print();
//			break;
//		case 3:
//			tp.Search();
//			break;
//		case 4:
//			tp.Remove();
//			break;
//		case 0:
//			run = false;
//			break;
//		}
//	}
//	
//
//	system("pause");
//}



//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//class TelPhoneBook // �ּ��� ��ȭ��ȣ�θ� ������ �� �ִ� �ڷ� ������ �ʿ���
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "�̸� �Է�: ";
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		cin >> phone;
//		parr.Add(Person(name, phone));
//	}
//	void Print() const
//	{
//		for (int i = 0; i < parr.Size(); ++i)
//			parr.At(i).Print();
//	}
//	void Search() const
//	{
//		string name;
//		cout << "�˻��� �̸� �Է�: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "[" << i << "]:";
//				parr.At(i).Print();
//			}
//	}
//	void Remove()
//	{
//		string name;
//		cout << "������ �̸� �Է�: ";
//		cin >> name;
//		for( int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "���� ���� [" << i << "]" << endl;
//				parr.Remove(i);
//			}
//	}
//};
//
//int main()
//{
//	TelPhoneBook tp; // ���� �������̽� ���� ����ſ���.
//
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//
//	tp.Print(); 
//	tp.Remove();
//	tp.Print();
//
//	system("pause");
//}



//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	const string& GetPhone() const
//	{
//		return phone;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//class TelPhoneBook // �ּ��� ��ȭ��ȣ�θ� ������ �� �ִ� �ڷ� ������ �ʿ���
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "�̸� �Է�: ";
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		cin >> phone;
//		parr.Add(Person(name, phone));
//	}
//	void Print() const
//	{
//		for (int i = 0; i < parr.Size(); ++i)
//			parr.At(i).Print();
//	}
//	void Search() const
//	{
//		string name;
//		cout << "�˻��� �̸� �Է�: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "[" << i << "]:";
//				parr.At(i).Print();
//			}
//	}
//};
//
//int main()
//{
//	TelPhoneBook tp; // ���� �������̽� ���� ����ſ���.
//
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Print(); // ���ݱ��� �Է� ���� ��� ��ȭ ��ȣ�� �� ���
//	tp.Search();
//
//	system("pause");
//}



//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//class TelPhoneBook // �ּ��� ��ȭ��ȣ�θ� ������ �� �ִ� �ڷ� ������ �ʿ���
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "�̸� �Է�: ";
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		cin >> phone;
//		parr.Add(Person(name, phone));
//	}
//	void Print() const
//	{
//		for (int i = 0; i < parr.Size(); ++i)
//			parr.At(i).Print();
//	}
//};
//
//int main()
//{
//	TelPhoneBook tp; // ���� �������̽� ���� ����ſ���.
//
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//
//	tp.Print(); // ���ݱ��� �Է� ���� ��� ��ȭ ��ȣ�� �� ���
//
//	system("pause");
//}



//// ��ȭ��ȣ �� // Top ��� �����Ѱ� ����鼭 �ϼ� , Down ��� ���� ��ü�� �����ؼ�
//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//class TelPhoneBook // �ּ��� ��ȭ��ȣ�θ� ������ �� �ִ� �ڷ� ������ �ʿ���
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		parr.Add(Person("ȫ�浿", "010-1111-1111"));
//	}
//	void Print() const
//	{
//		for (int i = 0; i < parr.Size(); ++i)
//			parr.At(i).Print();
//	}
//};
//
//int main()
//{
//	TelPhoneBook tp; // ���� �������̽� ���� ����ſ���.
//
//	tp.Add(); // ����ڷ� ���� �Է��� �޾� �帲 ( �̸�, ��ȭ��ȣ ) // ��ȭ��ȣ ���
//	tp.Print(); // ���ݱ��� �Է� ���� ��� ��ȭ ��ȣ�� �� ���
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//	void Remove(int idx)
//	{
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		--size;
//	}
//};
//
//
//int main()
//{
//	PersonArray arr;
//
//	arr.Add(Person("ȫ�浿", "010-1111-2345"));
//	arr.Add(Person("����", "010-2222-2345"));
//	arr.Add(Person("�Ӳ���", "010-3333-2345"));
//
//	arr.Remove(1);
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		//Person per = arr.At(i); // ��ȯ�ǰ� ���� �� ��ü�� �۽� ��ü�� �ǰ�, ���簡 ��
//		const Person& per = arr.At(i);
//		per.Print();
//	}
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//};
//
//
//int main()
//{
//	PersonArray arr;
//
//	arr.Add(Person("ȫ�浿", "010-1111-2345"));
//	arr.Add(Person("����", "010-2222-2345"));
//	arr.Add(Person("�Ӳ���", "010-3333-2345"));
//
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		//Person per = arr.At(i); // ��ȯ�ǰ� ���� �� ��ü�� �۽� ��ü�� �ǰ�, ���簡 ��
//		const Person& per = arr.At(i);
//		per.Print();
//	}
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	PersonArray(const PersonArray& arg)
//	{
//		size = 0;
//		capacity = arg.capacity;
//		buf = new Person[arg.capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~PersonArray()
//	{
//		delete[] buf;
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//};
//
//
//int main()
//{
//	PersonArray arr;
//
//	arr.Add(Person("ȫ�浿", "010-1111-2345"));
//	arr.Add(Person("����", "010-2222-2345"));
//	arr.Add(Person("�Ӳ���", "010-3333-2345"));
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i).Print();
//
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//
//class PersonArray
//{
//	Person* buf;
//	int size;
//	int capacity;
//public:
//	PersonArray(int cap = 100)
//	{
//		size = 0;
//		capacity = cap;
//		buf = new Person[capacity];
//	}
//	void Add(const Person& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const Person& At(int idx) const
//	{
//		return buf[idx];
//	}
//};
//
//
//int main()
//{
//	PersonArray arr;
//
//	arr.Add(Person("ȫ�浿", "010-1111-2345"));
//	arr.Add(Person("����", "010-2222-2345"));
//	arr.Add(Person("�Ӳ���", "010-3333-2345"));
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i).Print();
//
//	system("pause");
//}
//



//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//int main()
//{
//	Person p1("ȫ�浿", "010-1112-2345");
//
//	p1.Print();
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Person
//{
//	char* name;
//	char* phone;
//public:
//	Person(const char* n = "", const char* p = "")
//	{
//		int slen = strlen(n);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		slen = strlen(p);
//		phone = new char[slen + 1];
//		strcpy_s(phone, slen + 1, p);
//	}
//	Person(const Person& arg) 
//	{
//		int slen = strlen(arg.name);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, arg.name);
//		slen = strlen(arg.phone);
//		phone = new char[slen + 1];
//		strcpy_s(phone, slen + 1, arg.phone);
//	}
//	~Person()
//	{
//		delete[] name;
//		delete[] phone;
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//int main()
//{
//	Person p1("ȫ�浿", "010-1112-2345");
//
//	p1.Print();
//
//	system("pause");
//}
////2 ����

//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;
//class Person
//{
//	char* name;
//	char* phone;
//public:
//	Person(const char* n = "", const char* p = "")
//	{
//		int slen = strlen(n);
//		name = new char[slen + 1];
//		strcpy_s(name, slen + 1, n);
//		slen = strlen(p);
//		phone = new char[slen + 1];
//		strcpy_s(phone, slen + 1, p);
//	}
//	void Print() const
//	{
//		cout << "name : " << name << "," << "phone : " << phone << endl;
//	}
//};
//int main()
//{
//	Person p1("ȫ�浿", "010-1112-2345");
//	p1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class IntArray
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	IntArray(int cap = 100)
//	{
//		capacity = cap;
//		size = 0;
//		buf = new int[capacity];
//	}
//	IntArray(const IntArray& arg)
//	{
//		capacity = arg.capacity;
//		size = arg.size;
//		buf = new int[capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~IntArray()
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
//	void Remove(int idx)
//	{   // ���� �ۼ��Ѱ�
//		//int* t = new int[size+1];
//		//for (int i = 0; i < idx; ++i)
//		//{
//		//	t[i] = buf[i];
//		//}
//		//for (int i = idx + 1; i < size; ++i)
//		//{
//		//	t[idx] = buf[i];
//		//}
//		//delete[] buf;
//		//buf = t;
//		//size--;
//		for (int i = idx; i < size - 1; ++i)
//			buf[i] = buf[i + 1];
//		size--;
//	}
//};
//int main()
//{
//	IntArray arr;
//	arr.Add(100);
//	arr.Add(200);
//	arr.Add(300);
//
//	arr.Remove(1);// i��° �ε����� �����ؾ� ��
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr.At(i) << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class IntArray
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	IntArray(int cap = 100) 
//	{
//		capacity=cap;
//		size = 0;
//		buf = new int[capacity];
//	}
//	IntArray(const IntArray& arg)
//	{
//		capacity = arg.capacity;
//		size = arg.size;
//		buf = new int[capacity];
//		for (int i = 0; i < size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~IntArray()
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
//	IntArray arr;
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
//#include <cstdlib>
//using namespace std;
//class IntArray
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	IntArray(int cap = 100) : size(0), capacity(cap)
//	{
//		buf = new int[capacity];
//	}
//	~IntArray()
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
//	IntArray arr;
//	arr.Add(100);
//	arr.Add(200);
//	arr.Add(300);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr.At(i) << endl;
//
//	system("pause");
//}

//1 ����