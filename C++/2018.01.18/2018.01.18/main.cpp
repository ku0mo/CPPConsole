#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Person
{
protected: //접근권한
	string name;
	int age;
public:
	Person(const string& n = "", int a = 0) :name(n), age(a)
	{
		cout << "Person()" << endl;
	}
	virtual ~Person()
	{
		cout << "~Person()" << endl;
	}
	virtual void Print()const // 부모의 타입으로 자식의 타입이 사용되고 있는때 하나의 타입으로 다루기 위해서 virtual 메소드로 자식의 메소드가 호출 될 수 있도록 한다.
	{// 부모가 virtual이면 자식들은 무조건 다 virtual 메소드.
		cout << "name: " << name << ',' << "age: " << age << endl;
	}
};

class Professor : public Person
{
	string position;
public:
	Professor(const string& n = "", int a = 0, const string& p = "") : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
	{
		cout << "Professor()" << endl;
	}
	virtual ~Professor()
	{
		cout << "~Professor()" << endl;
	}
	virtual void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
	{
		cout << "name:" << name << "age: " << age << "position: " << position << endl;
	}
};

class Student : public Person //상속을 표현하는 문법.
{
	int grade;
public:
	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
	{
		cout << "Student()" << endl;
	}
	virtual ~Student()
	{
		cout << "~Student()" << endl;
	}
	virtual void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
	{
		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
	}
};
int main()
{
	{
		Person* p = NULL;
		p = new Student("이몽룡", 50, 2);
		p->Print(); // 가상 함수여서 실제 p가 가리키는 타입의 메소드를 호출 // 다형성 코드 // 가상 함수
		delete p; // p 타입의 소멸자를 호출하는 기능, 메모리를 호출하는 기능 // 각자의 모든 소멸자가 다 호출 될 수 있도록
				  // 동적 바인딩을 통해서 실제 실행시간에 객체에 의해서 정해진다. (***가상 소멸자 - 부모 타입으로 사용되는 모든 클래스의 소멸자는 가상 소멸자로 만들어야 함)

		p = new Professor("장길산", 30, "교수");
		p->Print();
		delete p;
	}
	system("pause");
}



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
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
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
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	{
//		Person* p = NULL;
//		p = new Student("이몽룡", 50, 2);
//		p->Print(); // 가상 함수여서 실제 p가 가리키는 타입의 메소드를 호출 // 다형성 코드 // 가상 함수
//		delete p; // p 타입의 소멸자를 호출하는 기능, 메모리를 호출하는 기능 // 각자의 모든 소멸자가 다 호출 될 수 있도록
//				  // 동적 바인딩을 통해서 실제 실행시간에 객체에 의해서 정해진다. (***가상 소멸자 - 부모 타입으로 사용되는 모든 클래스의 소멸자는 가상 소멸자로 만들어야 함)
//
//		p = new Professor("장길산", 30, "교수");
//		p->Print();
//		delete p;
//	}
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
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n = "noname", int a=0, const string& p = "noname") : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	{
//		Person* p = NULL;
//		p = new Student("장길산", 50, 2);
//
//		p->Print();
//
//		delete p; // p 타입의 소멸자를 호출하는 기능, 메모리를 호출하는 기능 // 각자의 모든 소멸자가 다 호출 될 수 있도록
//		// 동적 바인딩을 통해서 실제 실행시간에 객체에 의해서 정해진다. (***가상 소멸자 - 부모 타입으로 사용되는 모든 클래스의 소멸자는 가상 소멸자로 만들어야 함)
//	}
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
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	virtual void Print()const // 부모의 타입으로 자식의 타입이 사용되고 있는때 하나의 타입으로 다루기 위해서 virtual 메소드로 자식의 메소드가 호출 될 수 있도록 한다.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//
//	{
//		Student s1("이몽룡", 21, 2);
//		Professor pf1("장길산", 50, "교수");
//		Person* p = &s1;
//
//		p->Print();//프로페서의 프린트가 될 수도 있고, 스튜던트의 프린트가 출력될 수도 있음
//	}
//	system("pause");
//}
//


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
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	virtual void Print()const // 부모의 타입으로 자식의 타입이 사용되고 있는때 하나의 타입으로 다루기 위해서 virtual 메소드로 자식의 메소드가 호출 될 수 있도록 한다.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Student s1("이몽룡", 21, 2);
//	Professor pf1("장길산", 50, "교수");
//	Person* p = NULL;
//
//	int input;
//	cin >> input;
//	if (input == 0)
//		p = &s1;
//	else
//		p = &pf1;
//
//	p->Print();//프로페서의 프린트가 될 수도 있고, 스튜던트의 프린트가 출력될 수도 있음
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
//	}
//	~Person()
//	{
//	}
//	virtual void Print()const // 부모의 타입으로 자식의 타입이 사용되고 있는때 하나의 타입으로 다루기 위해서 virtual 메소드로 자식의 메소드가 호출 될 수 있도록 한다.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
//	}
//};
//
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Student s1("이몽룡", 21, 2);
//	Professor pf1("장길산", 50, "교수");
//	Person* p = NULL;
//
//	int input;
//	cin >> input;
//	if (input == 0)
//		p = &s1;
//	else
//		p = &pf1;
//
//	p->Print();//프로페서의 프린트가 될 수도 있고, 스튜던트의 프린트가 출력될 수도 있음
//
//	system("pause");
//}


///*
//객체와 함수를 연결 하는 작업
//정적 바인딩 - 컴파일 시간에
//동적 바인딩 - 실행 시간에
//*/
///*
//다형성
//하나의 메세지에 대해서 유사한 객체에 보냈을 때 실제 객체에 의해 메세지가 결정
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
//	Person(const string& n ="", int a = 0) :name(n), age(a)
//	{
//	}
//	~Person()
//	{
//	}
//	virtual void Print()const // 부모의 타입으로 자식의 타입이 사용되고 있는때 하나의 타입으로 다루기 위해서 virtual 메소드로 자식의 메소드가 호출 될 수 있도록 한다.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person 
//{
//	string position;
//public:
//	Professor(const string& n , int a , const string& p) : Person(n, a), position(p)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
//	}
//};
//
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n="", int a=0, int g=0) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Student s1("이몽룡", 21, 2);
//	Professor pf1("장길산", 50, "교수");
//
//	Person* p = &pf1;
//	p->Print();
//
//	system("pause");
//}


///*
//객체와 함수를 연결 하는 작업
//정적 바인딩 - 컴파일 시간에 
//동적 바인딩 - 실행 시간에
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
//	}
//	~Person()
//	{
//	}
//	virtual void Print()const // 부모의 타입으로 자식의 타입이 사용되고 있는때 하나의 타입으로 다루기 위해서 virtual 메소드로 자식의 메소드가 호출 될 수 있도록 한다.
//	{
//		/*
//		이 함수의 호출하는 주소는 실행시간에 결정할거야! - 동적 바인딩 뭘 보고 결정하냐? 객체를 보고 결정
//		그렇기때문에 virtual이 붙은 메소드는 프린트가 참조가 객체에게 출력하라는 메세지를 보낼 때
//		메소드가 호출되는 주소가 바뀜.
//		*/
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	Student s1("이몽룡", 21, 2);
//
//	Person& r = s1; // 실객체는 s1 // 정적 바인딩은 r의 형식(타입)을 보고 호출 // 근데 저걸 virtual
//	Person* p = &s1;
//	r.Print(); // r, p는 실제로는 s1 객체를 참조(포인터)하고 있어. 그래서 대답을 몽룡이(학생)가 하는거지.
//	p->Print();
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
//	}
//	~Person()
//	{
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	Student s1("이몽룡", 21, 2);
//
//	Person& r = s1; // 실객체는 s1
//	Person* p = &s1; 
//	r.Print(); // r, p는 실제로는 s1 객체를 참조(포인터)하고 있어. 그래서 대답을 몽룡이(학생)가 하는거지.
//	p->Print();
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
//	}
//	~Person()
//	{
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // 오버라이딩 함수 재정의 // 구체적인 내용으로 기능이 업데이트 되어야 함.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	Student s1("이몽룡", 21, 2);
//
//	s1.Print(); // 만약 Print()가 재정의 하지 않으면, 부모의 Print()를 사용.
//	/*
//	부모의 것을 그대로 물려받아서 쓸거면, 재정의 안해도 되지만, 구체적으로 기능을 정의하려면 재정의 해야 함.
//	*/
//
//	p1 = s1; // x 안 씀
//	Person& r = s1; // 가능 대신 짤림 s1의 주소를 r이 참조하고
//	Person* p = &s1; // 가능 대신 짤림 prk s1를 가리킨다.
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
//	}
//	~Person()
//	{
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	Student s1("이몽룡", 21, 2);
//
//	p1 = s1; // x 안 씀
//	Person& r = s1; // 가능 대신 짤림 s1의 주소를 r이 참조하고
//	Person* p = &s1; // 가능 대신 짤림 prk s1를 가리킨다.
//
//	system("pause");
//}


///*
//P <- S 형식변환 
//1. 값 p1 = s1; // 값이 짤려서 사용하지 않음
//
//2. 참조 person& rp = s1; //rp는 person의 자리까지만 가리킬 수 있다
//
//3. 포인터 person* p = &s1; //rp는 person의 자리(내용)까지만 가리킬 수 있다
//*/
///*
//형식변환이 의미하는 것! 하나의 타입으로 다룰 수 있음!
//상속의 장점: 여러 타입을 하나의 타입으로 다룰 수 있다.
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
//	}
//	~Person()
//	{
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	Student s1("이몽룡", 21, 2);
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
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//		cout << "Student()" << endl;
//	}
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	p1.Print();
//	{
//		Student s1("이몽룡", 21, 2);
//		s1.Print();
//	}
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
//
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//class Student : public Person //상속을 표현하는 문법.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//상속과 관계없이 시그니처는 바뀌지 않는다./근데 초기화는 달라짐.name과 age를 부모에게 초기화 해달라고 하는거야.(부모 생성자 호출)
//	{
//
//	}
//	void Print()const
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	p1.Print();
//
//	Student s1("이몽룡", 21, 2);
//	s1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <string> // c++ 헤더
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//protected:
//	string name; //참조형식이 없기때문에 깊은 복사를 할 필요가 없음
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ',' << "age : " << age << endl;
//	}
//};
//class Student :public Person
//{
//	string name;
//	int age;
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person()
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ','
//			<< " age : " << age << ','
//			<< " grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	p1.Print();
//
//	Student s1("이몽룡", 21, 2);
//	s1.Print();
//
//	system("pause");
//}




//#include <iostream>
//#include <string> // c++ 헤더
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //참조형식이 없기때문에 깊은 복사를 할 필요가 없음
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ',' << "age : " << age << endl;
//	}
//};
//class Student
//{
//	string name;
//	int age;
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) :name(n), age(a), grade(g)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ',' 
//			<< " age : " << age << ','
//			<< " grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//	p1.Print();
//
//	Student s1("이몽룡", 21, 2);
//	s1.Print();
//
//	system("pause");
//}
//


//#include <iostream>
//#include <string> // c++ 헤더
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //참조형식이 없기때문에 깊은 복사를 할 필요가 없음
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ',' << "age : " << age << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	int GetAge() const
//	{
//		return age;
//	}
//	void SetName(const string& n)
//	{
//		name = n;
//	}
//	void SetAge(int a)
//	{
//		age = a;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//
//	Person p2(p1);
//
//	p2.SetName("123");
//
//	p1.Print();
//	p2.Print();
//	system("pause");
//}


//#include <iostream>
//#include <string> // c++ 헤더
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //참조형식이 없기때문에 깊은 복사를 할 필요가 없음
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ',' << "age : " << age << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	int GetAge() const
//	{
//		return age;
//	}
//	void SetName(const string& n)
//	{
//		name = n;
//	}
//	void SetAge(int a)
//	{
//		age = a;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//
//	Person p2(p1);
//
//	p2.SetName("123");
//
//	p1.Print();
//	p2.Print();
//	system("pause");
//}


//#include <iostream>
//#include <string> // c++ 헤더
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //참조형식이 없기때문에 깊은 복사를 할 필요가 없음
//	int age;
//public:
//	Person(const string& n = "", int a = 0) :name(n), age(a)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ',' << "age : " << age << endl;
//	}
//	const string& GetName() const
//	{
//		return name;
//	}
//	int GetAge() const
//	{
//		return age;
//	}
//	void SetName(const string& n)
//	{
//		name = n;
//	}
//	void SetAge(int a)
//	{
//		age = a;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//
//	p1.Print();
//	p1.SetName("장길산");
//	cout << "name : " << p1.GetName() << endl;
//	cout << "age : " << p1.GetAge() << endl;
//	system("pause");
//}

//#include <iostream>
//#include <string> // c++ 헤더
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //참조형식이 없기때문에 깊은 복사를 할 필요가 없음
//	int age;
//public:
//	Person(const string& n = "", int a = 0):name(n), age(a)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ',' << "age : " << age << endl;
//	}
//};
//int main()
//{
//	Person p1("홍길동", 25);
//
//	p1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstring> // c 스타일의 헤더
//#include <stdlib.h>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "")
//	{
//		int slen = strlen(s);
//		buf = new char[slen + 1];
//		strcpy_s(buf, slen + 1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const // 참조에는 붙일 수 있는 곳은 다 붙여라 ( 안 붙여야 하는 곳만 떼면 됨 )
//	{
//		return buf;
//	}
//	void assign(const char* s)
//	{
//		delete[] buf;
//		int slen = strlen(s);
//		buf = new char[slen + 1];
//		strcpy_s(buf, slen + 1, s);
//	}
//	void append(const char* s)
//	{
//		/*int slen1 = strlen(buf);
//		int slen2 = strlen(s);
//		char* buf2 = new char[slen1 + slen2 + 1];
//		strcpy_s(buf2, )*/
//		char* t = new char[strlen(buf) + strlen(s) + 1];
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, strlen(buf) + strlen(s) + 1, s); // 덮 붙이기
//		delete[] buf;
//		buf = t;
//	}
//	int size() const
//	{
//		return strlen(buf);
//	}
//	int compare(const char* s) const
//	{
//		return strcmp(buf, s);
//	}
//};
//int main()
//{
//	String s("Hello");	// 문자열을 담을 수 있는 형식
//	cout << s.c_str() << endl; // s.c_str() //문자열의 시작주소를 반환하게 되서 출력
//
//	s.assign("Hi!");	// 바꿔라 // s = "Hi!";
//	cout << s.c_str() << endl;
//
//	s.append("abcd");	// 붙여라; // s += "abcd";
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // 같으면 0 , 앞에가 크면 1, 뒤에가 크면 -1
//	system("pause");
//}


//#include <iostream>
//#include <cstring> // c 스타일의 헤더
//#include <stdlib.h>
//using namespace std;
//class String
//{
//	char* buf;
//public:
//	String(const char* s = "")
//	{
//		int slen = strlen(s);
//		buf = new char[slen + 1];
//		strcpy_s(buf, slen+1, s);
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//	const char* c_str() const // 참조에는 붙일 수 있는 곳은 다 붙여라 ( 안 붙여야 하는 곳만 떼면 됨 )
//	{
//		return buf;
//	}
//	void assign(const char* s)
//	{
//		delete[] buf;
//		int slen = strlen(s);
//		buf = new char[slen + 1];
//		strcpy_s(buf, slen + 1, s);
//	}
//	void append(const char* s)
//	{
//		/*int slen1 = strlen(buf);
//		int slen2 = strlen(s);
//		char* buf2 = new char[slen1 + slen2 + 1];
//		strcpy_s(buf2, )*/
//		char* t = new char[strlen(buf) + strlen(s) + 1];
//		strcpy_s(t, strlen(buf) + 1, buf);
//		strcat_s(t, strlen(buf) + strlen(s) + 1, s); // 덮 붙이기
//		delete[] buf;
//		buf = t;
//	}
//	int size() const
//	{
//		return strlen(buf);
//	}
//	int compare(const char* s) const
//	{
//		return strcmp(buf, s);
//	}
//};
//int main()
//{
//	String s("Hello");	// 문자열을 담을 수 있는 형식
//	cout << s.c_str() << endl; // s.c_str() //문자열의 시작주소를 반환하게 되서 출력
//
//	s.assign("Hi!");	// 바꿔라 // s = "Hi!";
//	cout << s.c_str() << endl;
//
//	s.append("abcd");	// 붙여라; // s += "abcd";
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // 같으면 0 , 앞에가 크면 1, 뒤에가 크면 -1
//	system("pause");
//}



//#include <iostream>
//#include <cstring> // c 스타일의 헤더
//#include <stdlib.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* s = "")
//	{
//
//	}
//	const char* c_str() const // 참조에는 붙일 수 있는 곳은 다 붙여라 ( 안 붙여야 하는 곳만 떼면 됨 )
//	{
//		return "";
//	}
//	void assign(const char* s)
//	{
//
//	}
//	void append(const char* s)
//	{
//
//	}
//	int size() const
//	{
//		return 0;
//	}
//	int compare(const char* s) const
//	{
//		return 0;
//	}
//};
//int main()
//{
//	String s("Hello");	// 문자열을 담을 수 있는 형식
//	cout << s.c_str() << endl; // s.c_str() //문자열의 시작주소를 반환하게 되서 출력
//
//	s.assign("Hi!");	// 바꿔라 // s = "Hi!";
//	cout << s.c_str() << endl;
//
//	s.append("abcd");	// 붙여라; // s += "abcd";
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // 같으면 0 , 앞에가 크면 1, 뒤에가 크면 -1
//	system("pause");
//}

//#include <iostream>
//#include <string> // c++ 의 스트링
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	string s("Hello");	// 문자열을 담을 수 있는 형식
//	cout << s.c_str() << endl; // s.c_str() //문자열의 시작주소를 반환하게 되서 출력
//
//	s.assign("Hi!");	// 바꿔라 // s = "Hi!";
//	cout << s << endl;
//
//	s.append("abcd");	// 붙여라; // s += "abcd";
//	cout << s << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // 같으면 0 , 앞에가 크면 1, 뒤에가 크면 -1
//	system("pause");
//}


//#include <iostream>
//#include <string> // c++ 의 스트링
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	string s("Hello");	// 문자열을 담을 수 있는 형식
//	cout << s << endl;
//
//	s.assign("Hi!");	// 바꿔라
//	cout << s << endl;
//
//	s.append("abcd");	// 붙여라;
//	cout << s << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // 같으면 0 , 앞에가 크면 1, 뒤에가 크면 -1
//	system("pause");
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//class Array // 컨테이너 클래스
//{
//	int* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap = 100) :size(0)
//	{
//		buf = new int[capacity = cap];
//	}
//	Array(const Array& arg) : size(arg.size), capacity(arg.capacity)
//	{
//		this->buf = new int[capacity];
//		for (int i = 0; i < arg.Size(); ++i)
//		{
//			this->buf[i] = arg.buf[i];
//		}
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
//	Array arr2(arr);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr.At(i) << endl;
//
//	for (int i = 0; i < arr2.Size(); ++i)
//		cout << arr2.At(i) << endl;
//
//	system("pause");
//}
