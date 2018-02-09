#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Person
{
protected: //���ٱ���
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
	virtual void Print()const // �θ��� Ÿ������ �ڽ��� Ÿ���� ���ǰ� �ִ¶� �ϳ��� Ÿ������ �ٷ�� ���ؼ� virtual �޼ҵ�� �ڽ��� �޼ҵ尡 ȣ�� �� �� �ֵ��� �Ѵ�.
	{// �θ� virtual�̸� �ڽĵ��� ������ �� virtual �޼ҵ�.
		cout << "name: " << name << ',' << "age: " << age << endl;
	}
};

class Professor : public Person
{
	string position;
public:
	Professor(const string& n = "", int a = 0, const string& p = "") : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
	{
		cout << "Professor()" << endl;
	}
	virtual ~Professor()
	{
		cout << "~Professor()" << endl;
	}
	virtual void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
	{
		cout << "name:" << name << "age: " << age << "position: " << position << endl;
	}
};

class Student : public Person //����� ǥ���ϴ� ����.
{
	int grade;
public:
	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
	{
		cout << "Student()" << endl;
	}
	virtual ~Student()
	{
		cout << "~Student()" << endl;
	}
	virtual void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
	{
		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
	}
};
int main()
{
	{
		Person* p = NULL;
		p = new Student("�̸���", 50, 2);
		p->Print(); // ���� �Լ����� ���� p�� ����Ű�� Ÿ���� �޼ҵ带 ȣ�� // ������ �ڵ� // ���� �Լ�
		delete p; // p Ÿ���� �Ҹ��ڸ� ȣ���ϴ� ���, �޸𸮸� ȣ���ϴ� ��� // ������ ��� �Ҹ��ڰ� �� ȣ�� �� �� �ֵ���
				  // ���� ���ε��� ���ؼ� ���� ����ð��� ��ü�� ���ؼ� ��������. (***���� �Ҹ��� - �θ� Ÿ������ ���Ǵ� ��� Ŭ������ �Ҹ��ڴ� ���� �Ҹ��ڷ� ������ ��)

		p = new Professor("����", 30, "����");
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
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
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
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	{
//		Person* p = NULL;
//		p = new Student("�̸���", 50, 2);
//		p->Print(); // ���� �Լ����� ���� p�� ����Ű�� Ÿ���� �޼ҵ带 ȣ�� // ������ �ڵ� // ���� �Լ�
//		delete p; // p Ÿ���� �Ҹ��ڸ� ȣ���ϴ� ���, �޸𸮸� ȣ���ϴ� ��� // ������ ��� �Ҹ��ڰ� �� ȣ�� �� �� �ֵ���
//				  // ���� ���ε��� ���ؼ� ���� ����ð��� ��ü�� ���ؼ� ��������. (***���� �Ҹ��� - �θ� Ÿ������ ���Ǵ� ��� Ŭ������ �Ҹ��ڴ� ���� �Ҹ��ڷ� ������ ��)
//
//		p = new Professor("����", 30, "����");
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
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n = "noname", int a=0, const string& p = "noname") : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	{
//		Person* p = NULL;
//		p = new Student("����", 50, 2);
//
//		p->Print();
//
//		delete p; // p Ÿ���� �Ҹ��ڸ� ȣ���ϴ� ���, �޸𸮸� ȣ���ϴ� ��� // ������ ��� �Ҹ��ڰ� �� ȣ�� �� �� �ֵ���
//		// ���� ���ε��� ���ؼ� ���� ����ð��� ��ü�� ���ؼ� ��������. (***���� �Ҹ��� - �θ� Ÿ������ ���Ǵ� ��� Ŭ������ �Ҹ��ڴ� ���� �Ҹ��ڷ� ������ ��)
//	}
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
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	virtual void Print()const // �θ��� Ÿ������ �ڽ��� Ÿ���� ���ǰ� �ִ¶� �ϳ��� Ÿ������ �ٷ�� ���ؼ� virtual �޼ҵ�� �ڽ��� �޼ҵ尡 ȣ�� �� �� �ֵ��� �Ѵ�.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//
//	{
//		Student s1("�̸���", 21, 2);
//		Professor pf1("����", 50, "����");
//		Person* p = &s1;
//
//		p->Print();//�����伭�� ����Ʈ�� �� ���� �ְ�, ��Ʃ��Ʈ�� ����Ʈ�� ��µ� ���� ����
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
//protected: //���ٱ���
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
//	virtual void Print()const // �θ��� Ÿ������ �ڽ��� Ÿ���� ���ǰ� �ִ¶� �ϳ��� Ÿ������ �ٷ�� ���ؼ� virtual �޼ҵ�� �ڽ��� �޼ҵ尡 ȣ�� �� �� �ֵ��� �Ѵ�.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//		cout << "Professor()" << endl;
//	}
//	~Professor()
//	{
//		cout << "~Professor()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
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
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Student s1("�̸���", 21, 2);
//	Professor pf1("����", 50, "����");
//	Person* p = NULL;
//
//	int input;
//	cin >> input;
//	if (input == 0)
//		p = &s1;
//	else
//		p = &pf1;
//
//	p->Print();//�����伭�� ����Ʈ�� �� ���� �ְ�, ��Ʃ��Ʈ�� ����Ʈ�� ��µ� ���� ����
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
//	}
//	~Person()
//	{
//	}
//	virtual void Print()const // �θ��� Ÿ������ �ڽ��� Ÿ���� ���ǰ� �ִ¶� �ϳ��� Ÿ������ �ٷ�� ���ؼ� virtual �޼ҵ�� �ڽ��� �޼ҵ尡 ȣ�� �� �� �ֵ��� �Ѵ�.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person
//{
//	string position;
//public:
//	Professor(const string& n, int a, const string& p) : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
//	}
//};
//
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n = "", int a = 0, int g = 0) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Student s1("�̸���", 21, 2);
//	Professor pf1("����", 50, "����");
//	Person* p = NULL;
//
//	int input;
//	cin >> input;
//	if (input == 0)
//		p = &s1;
//	else
//		p = &pf1;
//
//	p->Print();//�����伭�� ����Ʈ�� �� ���� �ְ�, ��Ʃ��Ʈ�� ����Ʈ�� ��µ� ���� ����
//
//	system("pause");
//}


///*
//��ü�� �Լ��� ���� �ϴ� �۾�
//���� ���ε� - ������ �ð���
//���� ���ε� - ���� �ð���
//*/
///*
//������
//�ϳ��� �޼����� ���ؼ� ������ ��ü�� ������ �� ���� ��ü�� ���� �޼����� ����
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
//	Person(const string& n ="", int a = 0) :name(n), age(a)
//	{
//	}
//	~Person()
//	{
//	}
//	virtual void Print()const // �θ��� Ÿ������ �ڽ��� Ÿ���� ���ǰ� �ִ¶� �ϳ��� Ÿ������ �ٷ�� ���ؼ� virtual �޼ҵ�� �ڽ��� �޼ҵ尡 ȣ�� �� �� �ֵ��� �Ѵ�.
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Professor : public Person 
//{
//	string position;
//public:
//	Professor(const string& n , int a , const string& p) : Person(n, a), position(p)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "position: " << position << endl;
//	}
//};
//
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n="", int a=0, int g=0) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Student s1("�̸���", 21, 2);
//	Professor pf1("����", 50, "����");
//
//	Person* p = &pf1;
//	p->Print();
//
//	system("pause");
//}


///*
//��ü�� �Լ��� ���� �ϴ� �۾�
//���� ���ε� - ������ �ð��� 
//���� ���ε� - ���� �ð���
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
//	}
//	~Person()
//	{
//	}
//	virtual void Print()const // �θ��� Ÿ������ �ڽ��� Ÿ���� ���ǰ� �ִ¶� �ϳ��� Ÿ������ �ٷ�� ���ؼ� virtual �޼ҵ�� �ڽ��� �޼ҵ尡 ȣ�� �� �� �ֵ��� �Ѵ�.
//	{
//		/*
//		�� �Լ��� ȣ���ϴ� �ּҴ� ����ð��� �����Ұž�! - ���� ���ε� �� ���� �����ϳ�? ��ü�� ���� ����
//		�׷��⶧���� virtual�� ���� �޼ҵ�� ����Ʈ�� ������ ��ü���� ����϶�� �޼����� ���� ��
//		�޼ҵ尡 ȣ��Ǵ� �ּҰ� �ٲ�.
//		*/
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("ȫ�浿", 25);
//	Student s1("�̸���", 21, 2);
//
//	Person& r = s1; // �ǰ�ü�� s1 // ���� ���ε��� r�� ����(Ÿ��)�� ���� ȣ�� // �ٵ� ���� virtual
//	Person* p = &s1;
//	r.Print(); // r, p�� �����δ� s1 ��ü�� ����(������)�ϰ� �־�. �׷��� ����� ������(�л�)�� �ϴ°���.
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
//protected: //���ٱ���
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
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("ȫ�浿", 25);
//	Student s1("�̸���", 21, 2);
//
//	Person& r = s1; // �ǰ�ü�� s1
//	Person* p = &s1; 
//	r.Print(); // r, p�� �����δ� s1 ��ü�� ����(������)�ϰ� �־�. �׷��� ����� ������(�л�)�� �ϴ°���.
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
//protected: //���ٱ���
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
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
//	{
//	}
//	~Student()
//	{
//	}
//	void Print()const // �������̵� �Լ� ������ // ��ü���� �������� ����� ������Ʈ �Ǿ�� ��.
//	{
//		cout << "name:" << name << "age: " << age << "grade: " << grade << endl;
//	}
//};
//int main()
//{
//	Person p1("ȫ�浿", 25);
//	Student s1("�̸���", 21, 2);
//
//	s1.Print(); // ���� Print()�� ������ ���� ������, �θ��� Print()�� ���.
//	/*
//	�θ��� ���� �״�� �����޾Ƽ� ���Ÿ�, ������ ���ص� ������, ��ü������ ����� �����Ϸ��� ������ �ؾ� ��.
//	*/
//
//	p1 = s1; // x �� ��
//	Person& r = s1; // ���� ��� ©�� s1�� �ּҸ� r�� �����ϰ�
//	Person* p = &s1; // ���� ��� ©�� prk s1�� ����Ų��.
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
//	}
//	~Person()
//	{
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
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
//	Person p1("ȫ�浿", 25);
//	Student s1("�̸���", 21, 2);
//
//	p1 = s1; // x �� ��
//	Person& r = s1; // ���� ��� ©�� s1�� �ּҸ� r�� �����ϰ�
//	Person* p = &s1; // ���� ��� ©�� prk s1�� ����Ų��.
//
//	system("pause");
//}


///*
//P <- S ���ĺ�ȯ 
//1. �� p1 = s1; // ���� ©���� ������� ����
//
//2. ���� person& rp = s1; //rp�� person�� �ڸ������� ����ų �� �ִ�
//
//3. ������ person* p = &s1; //rp�� person�� �ڸ�(����)������ ����ų �� �ִ�
//*/
///*
//���ĺ�ȯ�� �ǹ��ϴ� ��! �ϳ��� Ÿ������ �ٷ� �� ����!
//����� ����: ���� Ÿ���� �ϳ��� Ÿ������ �ٷ� �� �ִ�.
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
//	}
//	~Person()
//	{
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
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
//	Person p1("ȫ�浿", 25);
//	Student s1("�̸���", 21, 2);
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
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//	void Print()const
//	{
//		cout << "name: " << name << ',' << "age: " << age << endl;
//	}
//};
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
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
//	Person p1("ȫ�浿", 25);
//	p1.Print();
//	{
//		Student s1("�̸���", 21, 2);
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
//protected: //���ٱ���
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
//class Student : public Person //����� ǥ���ϴ� ����.
//{
//	int grade;
//public:
//	Student(const string& n, int a, int g) : Person(n, a), grade(g)//��Ӱ� ������� �ñ״�ó�� �ٲ��� �ʴ´�./�ٵ� �ʱ�ȭ�� �޶���.name�� age�� �θ𿡰� �ʱ�ȭ �ش޶�� �ϴ°ž�.(�θ� ������ ȣ��)
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
//	Person p1("ȫ�浿", 25);
//	p1.Print();
//
//	Student s1("�̸���", 21, 2);
//	s1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <string> // c++ ���
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//protected:
//	string name; //���������� ���⶧���� ���� ���縦 �� �ʿ䰡 ����
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
//	Person p1("ȫ�浿", 25);
//	p1.Print();
//
//	Student s1("�̸���", 21, 2);
//	s1.Print();
//
//	system("pause");
//}




//#include <iostream>
//#include <string> // c++ ���
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //���������� ���⶧���� ���� ���縦 �� �ʿ䰡 ����
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
//	Person p1("ȫ�浿", 25);
//	p1.Print();
//
//	Student s1("�̸���", 21, 2);
//	s1.Print();
//
//	system("pause");
//}
//


//#include <iostream>
//#include <string> // c++ ���
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //���������� ���⶧���� ���� ���縦 �� �ʿ䰡 ����
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
//	Person p1("ȫ�浿", 25);
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
//#include <string> // c++ ���
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //���������� ���⶧���� ���� ���縦 �� �ʿ䰡 ����
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
//	Person p1("ȫ�浿", 25);
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
//#include <string> // c++ ���
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //���������� ���⶧���� ���� ���縦 �� �ʿ䰡 ����
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
//	Person p1("ȫ�浿", 25);
//
//	p1.Print();
//	p1.SetName("����");
//	cout << "name : " << p1.GetName() << endl;
//	cout << "age : " << p1.GetAge() << endl;
//	system("pause");
//}

//#include <iostream>
//#include <string> // c++ ���
//#include <stdlib.h>
//using namespace std;
//class Person
//{
//	string name; //���������� ���⶧���� ���� ���縦 �� �ʿ䰡 ����
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
//	Person p1("ȫ�浿", 25);
//
//	p1.Print();
//	system("pause");
//}


//#include <iostream>
//#include <cstring> // c ��Ÿ���� ���
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
//	const char* c_str() const // �������� ���� �� �ִ� ���� �� �ٿ��� ( �� �ٿ��� �ϴ� ���� ���� �� )
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
//		strcat_s(t, strlen(buf) + strlen(s) + 1, s); // �� ���̱�
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
//	String s("Hello");	// ���ڿ��� ���� �� �ִ� ����
//	cout << s.c_str() << endl; // s.c_str() //���ڿ��� �����ּҸ� ��ȯ�ϰ� �Ǽ� ���
//
//	s.assign("Hi!");	// �ٲ�� // s = "Hi!";
//	cout << s.c_str() << endl;
//
//	s.append("abcd");	// �ٿ���; // s += "abcd";
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // ������ 0 , �տ��� ũ�� 1, �ڿ��� ũ�� -1
//	system("pause");
//}


//#include <iostream>
//#include <cstring> // c ��Ÿ���� ���
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
//	const char* c_str() const // �������� ���� �� �ִ� ���� �� �ٿ��� ( �� �ٿ��� �ϴ� ���� ���� �� )
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
//		strcat_s(t, strlen(buf) + strlen(s) + 1, s); // �� ���̱�
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
//	String s("Hello");	// ���ڿ��� ���� �� �ִ� ����
//	cout << s.c_str() << endl; // s.c_str() //���ڿ��� �����ּҸ� ��ȯ�ϰ� �Ǽ� ���
//
//	s.assign("Hi!");	// �ٲ�� // s = "Hi!";
//	cout << s.c_str() << endl;
//
//	s.append("abcd");	// �ٿ���; // s += "abcd";
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // ������ 0 , �տ��� ũ�� 1, �ڿ��� ũ�� -1
//	system("pause");
//}



//#include <iostream>
//#include <cstring> // c ��Ÿ���� ���
//#include <stdlib.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* s = "")
//	{
//
//	}
//	const char* c_str() const // �������� ���� �� �ִ� ���� �� �ٿ��� ( �� �ٿ��� �ϴ� ���� ���� �� )
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
//	String s("Hello");	// ���ڿ��� ���� �� �ִ� ����
//	cout << s.c_str() << endl; // s.c_str() //���ڿ��� �����ּҸ� ��ȯ�ϰ� �Ǽ� ���
//
//	s.assign("Hi!");	// �ٲ�� // s = "Hi!";
//	cout << s.c_str() << endl;
//
//	s.append("abcd");	// �ٿ���; // s += "abcd";
//	cout << s.c_str() << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // ������ 0 , �տ��� ũ�� 1, �ڿ��� ũ�� -1
//	system("pause");
//}

//#include <iostream>
//#include <string> // c++ �� ��Ʈ��
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	string s("Hello");	// ���ڿ��� ���� �� �ִ� ����
//	cout << s.c_str() << endl; // s.c_str() //���ڿ��� �����ּҸ� ��ȯ�ϰ� �Ǽ� ���
//
//	s.assign("Hi!");	// �ٲ�� // s = "Hi!";
//	cout << s << endl;
//
//	s.append("abcd");	// �ٿ���; // s += "abcd";
//	cout << s << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // ������ 0 , �տ��� ũ�� 1, �ڿ��� ũ�� -1
//	system("pause");
//}


//#include <iostream>
//#include <string> // c++ �� ��Ʈ��
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	string s("Hello");	// ���ڿ��� ���� �� �ִ� ����
//	cout << s << endl;
//
//	s.assign("Hi!");	// �ٲ��
//	cout << s << endl;
//
//	s.append("abcd");	// �ٿ���;
//	cout << s << endl;
//
//	cout << s.size() << endl;
//
//	cout << s.compare("Hi!abcd") << endl; // ������ 0 , �տ��� ũ�� 1, �ڿ��� ũ�� -1
//	system("pause");
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//class Array // �����̳� Ŭ����
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
//	Array arr; // �����̳� ��ü ( 100, 200, 300 ������ ��� �ִ� ��ü ) �÷��� Ÿ��, Ȥ�� �����̳� Ÿ��
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
