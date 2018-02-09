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
	Rectangle(const Point& pts = Point(), const Point& pte = Point()) // 기본 값 (기본 생성자 호출 (0,0)
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
	Point origin; // 원점
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
//	Rectangle(const Point& pts = Point(), const Point& pte = Point()) // 기본 값 (기본 생성자 호출 (0,0)
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
//	Point origin; // 원점
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
//	Rectangle(const Point& pts = Point(), const Point& pte = Point()) // 기본 값 (기본 생성자 호출 (0,0)
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
//	Point origin; // 원점
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
//	Rectangle(const Point& pts=Point(), const Point& pte=Point()) // 기본 값 (기본 생성자 호출 (0,0)
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
//왜 순수 가상함수를 만드는가? (순수 가상 클래스로 만드는가 ? - 강제화에 있다)
//
//*/
//#include <iostream>
//#include <string>
//#include <cstdlib>
//using namespace std;
//class Person
//{
//protected: //접근권한
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
//	virtual void Print()const = 0; // 가상 함수는 몸체를 가지고 있지 않음 -> 이런 함수를 순수 가상 함수라고 한다.( 추상 메소드 )
//
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string& p = "") : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Professor()" << endl;
//	}
//	virtual ~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	virtual void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << " age: " << age << " position: " << position << endl;
//	}
//};
//
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Student()" << endl;
//	}
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	virtual void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << " age: " << age << " grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person* arr[5] = // 자식 객체를 모두다 Person형식으로 다룰 수 있는 장점이 있음
//	{
//		new Student("홍길동", 20, 1),
//		new Student("장길산"),
//		new Professor("이몽룡", 55, "교수"),
//		new Professor("임꺽정",50,"조교수"),
//		new Student("성춘향", 21, 2)
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
//protected: //접근권한
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
//	virtual void Print()const // 부모의 타입으로 자식의 타입이 사용되고 있는때 하나의 타입으로 다루기 위해서 virtual 메소드로 자식의 메소드가 호출 될 수 있도록 한다.
//	{// 부모가 virtual이면 자식들은 무조건 다 virtual 메소드.
//		cout << "name: " << name << ',' << " age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n = "", int a = 0, const string& p = "") : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Professor()" << endl;
//	}
//	virtual ~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	virtual void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << " age: " << age << " position: " << position << endl;
//	}
//};
//
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Student()" << endl;
//	}
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	virtual void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << " age: " << age << " grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person* arr[5] = // 자식 객체를 모두다 Person형식으로 다룰 수 있는 장점이 있음
//	{
//		new Student("홍길동", 20, 1), 
//		new Student("장길산"),
//		new Professor("이몽룡", 55, "교수"),
//		new Professor("임꺽정",50,"조교수"), 
//		new Student("성춘향", 21, 2) 
//	};
//	for (int i = 0; i < 5; ++i)
//		arr[i]->Print();
//
//	system("pause");
//}


//
//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//{ // 클라이언트가 호출한거면, 클라이언트가 딜리트 호출해야 한다.
//	PersonArray arr;
//	// 자료구조에 들어가는 객체는 Heap에 저장되는 객체여야 한다.
//	arr.Add(new Person("구영모", "000-0000-0000")); // 주소를 넘김 ( & 이렇게 해도 넘어가는데, 자료구조에 담는 객체는 마음대로 사라지면 안됨 &객체 이렇게 보내는 건 지역 객체를 보내는 것)
//	arr.Add(new Person("구일모", "111-1111-1111")); // 주소를 넘김 ( & 이렇게 해도 넘어가는데, 자료구조에 담는 객체는 마음대로 사라지면 안됨 &객체 이렇게 보내는 건 지역 객체를 보내는 것)
//
//	Person* p = new Person("구이모", "222-2222-2222");
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


//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//{ // 클라이언트가 호출한거면, 클라이언트가 딜리트 호출해야 한다.
//	PersonArray arr;
//	// 자료구조에 들어가는 객체는 Heap에 저장되는 객체여야 한다.
//	arr.Add(new Person("구영모", "000-0000-0000")); // 주소를 넘김 ( & 이렇게 해도 넘어가는데, 자료구조에 담는 객체는 마음대로 사라지면 안됨 &객체 이렇게 보내는 건 지역 객체를 보내는 것)
//	arr.Add(new Person("구일모", "111-1111-1111")); // 주소를 넘김 ( & 이렇게 해도 넘어가는데, 자료구조에 담는 객체는 마음대로 사라지면 안됨 &객체 이렇게 보내는 건 지역 객체를 보내는 것)
//
//	Person* p = new Person("구이모", "222-2222-2222");
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



//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//	// 자료구조에 들어가는 객체는 Heap에 저장되는 객체여야 한다.
//	arr.Add(new Person("구영모", "000-0000-0000")); // 주소를 넘김 ( & 이렇게 해도 넘어가는데, 자료구조에 담는 객체는 마음대로 사라지면 안됨 &객체 이렇게 보내는 건 지역 객체를 보내는 것)
//	arr.Add(new Person("구일모", "111-1111-1111")); // 주소를 넘김 ( & 이렇게 해도 넘어가는데, 자료구조에 담는 객체는 마음대로 사라지면 안됨 &객체 이렇게 보내는 건 지역 객체를 보내는 것)
//
//	Person* p = new Person("구이모", "222-2222-2222");
//	arr.Add(p);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i)->Print();
//
//	// 일반적으로 객체의 주소를 보관함
//	/*
//	객체를 보관하는 경우 ( 객체가 데이터 일 때)
//	객체의 주소를 보관하는 경우
//	1. 객체가 너무 커서 (실제 만들어 질 때 담을려고 만듬)
//	2. 부모 형식의 주소를 담아서 자식 형식들을 하나의 타입으로 다룰려고(다형성) 하려고
//	*/
//
//	system("pause");
//}



//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//	arr.Add(Person("구영모", "000-0000-0000"));
//	arr.Add(Person("구일모", "111-1111-1111"));
//	arr.Add(Person("구이모", "222-2222-2222"));
//
//	for (int i = 0; i < arr.Size(); ++i)
//		arr.At(i).Print();
//
//	// 일반적으로 객체의 주소를 보관함
//	/*
//	객체를 보관하는 경우 ( 객체가 데이터 일 때)
//	객체의 주소를 보관하는 경우
//	1. 객체가 너무 커서 (실제 만들어 질 때 담을려고 만듬)
//	2. 부모 형식의 주소를 담아서 자식 형식들을 하나의 타입으로 다룰려고(다형성) 하려고
//	*/
//
//	system("pause");
//}

//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//class TelPhoneBook // 최소한 전화번호부를 저장할 수 있는 자료 구조가 필요함
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "이름 입력: ";
//		cin >> name;
//		cout << "전화 입력: ";
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
//		cout << "검색할 이름 입력: ";
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
//		cout << "삭제할 이름 입력: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "삭제 원소 [" << i << "]" << endl;
//				parr.Remove(i);
//			}
//	}
//};
//void Menu()
//{
//	cout << "1. 전화번호 등록" << endl;
//	cout << "2. 전화번호 출력" << endl;
//	cout << "3. 전화번호 검색" << endl;
//	cout << "4. 전화번호 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	TelPhoneBook tp; // 먼저 인터페이스 부터 만들거에여.
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



//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//class TelPhoneBook // 최소한 전화번호부를 저장할 수 있는 자료 구조가 필요함
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "이름 입력: ";
//		cin >> name;
//		cout << "전화 입력: ";
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
//		cout << "검색할 이름 입력: ";
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
//		cout << "삭제할 이름 입력: ";
//		cin >> name;
//		for (int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "삭제 원소 [" << i << "]" << endl;
//				parr.Remove(i);
//			}
//	}
//};
//void Menu()
//{
//	cout << "1. 전화번호 등록" << endl;
//	cout << "2. 전화번호 출력" << endl;
//	cout << "3. 전화번호 검색" << endl;
//	cout << "4. 전화번호 삭제" << endl;
//	cout << "0. 프로그램 종료" << endl;
//}
//int main()
//{
//	TelPhoneBook tp; // 먼저 인터페이스 부터 만들거에여.
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



//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//class TelPhoneBook // 최소한 전화번호부를 저장할 수 있는 자료 구조가 필요함
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "이름 입력: ";
//		cin >> name;
//		cout << "전화 입력: ";
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
//		cout << "검색할 이름 입력: ";
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
//		cout << "삭제할 이름 입력: ";
//		cin >> name;
//		for( int i = 0; i < parr.Size(); ++i)
//			if (name == parr.At(i).GetName())
//			{
//				cout << "삭제 원소 [" << i << "]" << endl;
//				parr.Remove(i);
//			}
//	}
//};
//
//int main()
//{
//	TelPhoneBook tp; // 먼저 인터페이스 부터 만들거에여.
//
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//
//	tp.Print(); 
//	tp.Remove();
//	tp.Print();
//
//	system("pause");
//}



//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//class TelPhoneBook // 최소한 전화번호부를 저장할 수 있는 자료 구조가 필요함
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "이름 입력: ";
//		cin >> name;
//		cout << "전화 입력: ";
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
//		cout << "검색할 이름 입력: ";
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
//	TelPhoneBook tp; // 먼저 인터페이스 부터 만들거에여.
//
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Print(); // 지금까지 입력 받은 모든 전화 번호를 다 출력
//	tp.Search();
//
//	system("pause");
//}



//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//class TelPhoneBook // 최소한 전화번호부를 저장할 수 있는 자료 구조가 필요함
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		char name[20];
//		char phone[20];
//		cout << "이름 입력: ";
//		cin >> name;
//		cout << "전화 입력: ";
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
//	TelPhoneBook tp; // 먼저 인터페이스 부터 만들거에여.
//
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//
//	tp.Print(); // 지금까지 입력 받은 모든 전화 번호를 다 출력
//
//	system("pause");
//}



//// 전화번호 부 // Top 방식 세세한거 만들면서 완성 , Down 방식 먼저 전체를 설계해서
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
//class TelPhoneBook // 최소한 전화번호부를 저장할 수 있는 자료 구조가 필요함
//{
//	PersonArray parr;
//public:
//	void Add()
//	{
//		parr.Add(Person("홍길동", "010-1111-1111"));
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
//	TelPhoneBook tp; // 먼저 인터페이스 부터 만들거에여.
//
//	tp.Add(); // 사용자로 부터 입력을 받아 드림 ( 이름, 전화번호 ) // 전화번호 등록
//	tp.Print(); // 지금까지 입력 받은 모든 전화 번호를 다 출력
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
//	arr.Add(Person("홍길동", "010-1111-2345"));
//	arr.Add(Person("장길산", "010-2222-2345"));
//	arr.Add(Person("임꺽정", "010-3333-2345"));
//
//	arr.Remove(1);
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		//Person per = arr.At(i); // 반환되고 나면 이 자체가 퍼슨 객체가 되고, 복사가 됨
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
//	arr.Add(Person("홍길동", "010-1111-2345"));
//	arr.Add(Person("장길산", "010-2222-2345"));
//	arr.Add(Person("임꺽정", "010-3333-2345"));
//
//	for (int i = 0; i < arr.Size(); ++i)
//	{
//		//Person per = arr.At(i); // 반환되고 나면 이 자체가 퍼슨 객체가 되고, 복사가 됨
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
//	arr.Add(Person("홍길동", "010-1111-2345"));
//	arr.Add(Person("장길산", "010-2222-2345"));
//	arr.Add(Person("임꺽정", "010-3333-2345"));
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
//	arr.Add(Person("홍길동", "010-1111-2345"));
//	arr.Add(Person("장길산", "010-2222-2345"));
//	arr.Add(Person("임꺽정", "010-3333-2345"));
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
//	Person p1("홍길동", "010-1112-2345");
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
//	Person p1("홍길동", "010-1112-2345");
//
//	p1.Print();
//
//	system("pause");
//}
////2 교시

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
//	Person p1("홍길동", "010-1112-2345");
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
//	{   // 내가 작성한거
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
//	arr.Remove(1);// i번째 인덱스를 제거해야 함
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

//1 교시