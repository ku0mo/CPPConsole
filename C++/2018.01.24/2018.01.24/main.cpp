/*
template Ŭ������ �ڵ� ��ü�� ����� ��!
���ø��̶� �� ������ �ƴ����� ��δ� ���!! 
*/
#include <iostream> // Array�� Heap��
#include <cstdlib>
#include <string>
#include <stack>

using namespace std;
template <typename K>
class Array
{
	K* buf;
	int size; // ������ ����
	int capacity; // �޸��� �뷮(����)
public:
	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
	{
		buf = new K[capacity];
	}
	Array(const Array& arg)
	{
		size = arg.size;
		capacity = arg.capacity;
		buf = new K[arg.capacity];
		for (int i = 0; i < arg.size; ++i)
			buf[i] = arg.buf[i];
	}
	const Array& operator=(const Array& arg)
	{
		delete[] buf;
		size = arg.size;
		capacity = arg.capacity;

		buf = new K[arg.capacity];
		for (int i = 0; i < arg.size; ++i)
			buf[i] = arg.buf[i];

		return *this;
	}
	~Array()
	{
		delete[] buf;
	}
	void Add(const K& data)
	{
		buf[size++] = data;
	}
	int Size() const
	{
		return size;
	}
	const K& operator[](int idx) const
	{
		return buf[idx];
	}
	void Remove(int idx)
	{
		for (int i = idx; i < size - 1; ++i)
			buf[i] = buf[i + 1];
		--size;
	}
};
class Person
{
protected:
	string name;
	string phone;
public:
	Person(const string& n = "", const string& p = "") : name(n), phone(p)
	{

	}
	virtual ~Person() // ��� �Ҹ��ڴ� ���� �Ҹ��ڷ� ���Ǿ� ��
	{

	}
	virtual void Print() const = 0; // ��ü�� ���� �ʿ䰡 ����. ���� �����Լ�
	const string& GetName() const { return name; }
	const string& GetPhone() const { return phone; }
	bool operator==(const Person& arg) const
	{
		return name == arg.name;
	}
};
ostream& operator<<(ostream& out, const Person& per)
{
	/*out << "name: " << per.GetName() << ", "
		<< "phone: " << per.GetPhone();*/
	per.Print();
	return out;
}
class Professor : public Person
{
	string position;
public:
	Professor(const string& n = "", const string& p = "", const string& pos = "") : Person(n, p), position(pos)
	{

	}
	void Print() const
	{
		cout << "name : " << name << ", " << "phone: " << phone << ", " << "position :" << position << endl;
	}
	const string& GetPosition() const
	{
		return position;
	}
};
class Student : public Person
{
	int grade;
public:
	Student(const string& n = "", const string& p="", int g=0):Person(n, p), grade(g)
	{
	}
	void Print() const
	{
		cout << "name : " << name << ", " << "phone: " << phone << ", " << "grade :" << grade << endl;
	}
	int GetGrade() const
	{
		return grade;
	}
};

class TelPhoneBook
{
	Array<Person*> perarr;
public:
	void Add()
	{
		cout << "[1] ���� ���� �Է�, [2] �л� ���� �Է�:";
		string choose; 
		cin >> choose;
		
		cout << "�̸� �Է�: ";
		string name;
		cin >> name;
		cout << "��ȭ �Է�: ";
		string phone;
		cin >> phone;

		switch (choose[0])
		{
		case '1':
		{
			string position;
			cout << "���� �Է�: ";
			cin >> position;
			perarr.Add(new Professor(name, phone, position));
		}
			break;
		case '2':
		{
		    int grade;
			cout << "�г� �Է�: ";
			cin >> grade;
			perarr.Add(new Student(name, phone, grade));
		}
			break;
		}

	}
	~TelPhoneBook()
	{
		for (int i = 0; i < perarr.Size(); ++i)
			delete perarr[i];
	}
	void Print() const
	{
		for (int i = 0; i < perarr.Size(); ++i)
			cout << *perarr[i] << endl;;
		//perarr[i]->Print();
	}
	void Search() const
	{
		cout << "�˻� �̸� �Է�: ";
		string name;
		cin >> name;
		for (int i = 0; i < perarr.Size(); ++i)
		{
			if (perarr[i]->GetName() == name)
			{
				cout << "[" << i << "]: ";
				cout << *perarr[i] << endl;
			}
		}
	}
	void Remove()
	{
		cout << "������ �̸� �Է�: ";
		string name;
		cin >> name;
		for (int i = 0; i < perarr.Size(); ++i)
		{
			if (perarr[i]->GetName() == name)
			{
				// ���� Array�� �� ����� perarr.Remove(i); // �̷��� �� �� �ְ� ������ ��.
				delete perarr[i]; // telphonebook���� ������ �� 
				perarr.Remove(i);
				break;
				//for (int j = i; j < perarr.Size()-1; ++j)
				//{
				//	*perarr[j] = *perarr[j + 1];
				//}
			}
		}
	}
};
void main()
{
	TelPhoneBook tp;
	tp.Add();
	tp.Add();
	tp.Add();
	tp.Print();
	tp.Search();
	tp.Remove();
	system("pause");
}




//#include <iostream> // Array�� Heap��
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // ������ ����
//	int capacity; // �޸��� �뷮(����)
//public:
//	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new K[capacity];
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const K& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const K& operator[](int idx) const
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
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ", " << "phone : " << phone << endl;
//	}
//	const string& GetName() const { return name; }
//	const string& GetPhone() const { return phone; }
//	bool operator==(const Person& arg) const
//	{
//		return name == arg.name;
//	}
//};
//ostream& operator<<(ostream& out, const Person& per)
//{
//	out << "name: " << per.GetName() << ", "
//		<< "phone: " << per.GetPhone();
//	return out;
//}
//class TelPhoneBook
//{
//	Array<Person*> perarr;
//public:
//	void Add()
//	{
//		cout << "�̸� �Է�: ";
//		string name;
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		string phone;
//		cin >> phone;
//		perarr.Add(new Person(name, phone));
//	}
//	~TelPhoneBook()
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//			delete perarr[i];
//	}
//	void Print() const
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//			cout << *perarr[i] << endl;;
//		//perarr[i]->Print();
//	}
//	void Search() const
//	{
//		cout << "�˻� �̸� �Է�: ";
//		string name;
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if (*perarr[i] == name)
//			{
//				cout << "[" << i << "]: ";
//				cout << *perarr[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		cout << "������ �̸� �Է�: ";
//		string name;
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if (*perarr[i] == name)
//			{
//				// ���� Array�� �� ����� perarr.Remove(i); // �̷��� �� �� �ְ� ������ ��.
//				delete perarr[i]; // telphonebook���� ������ �� 
//				perarr.Remove(i);
//				break; 
//				//for (int j = i; j < perarr.Size()-1; ++j)
//				//{
//				//	*perarr[j] = *perarr[j + 1];
//				//}
//			}
//		}
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Add();
//	tp.Add();
//	tp.Print();
//	tp.Search();
//	tp.Remove();
//	system("pause");
//}



//#include <iostream> // Array�� Heap��
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // ������ ����
//	int capacity; // �޸��� �뷮(����)
//public:
//	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new K[capacity];
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const K& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const K& operator[](int idx) const
//	{
//		return buf[idx];
//	}
//};
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ", " << "phone : " << phone << endl;
//	}
//	const string& GetName() const { return name; }
//	const string& GetPhone() const { return phone; }
//	bool operator==(const Person& arg) const
//	{
//		return name == arg.name;
//	}
//};
//ostream& operator<<(ostream& out, const Person& per)
//{
//	out << "name: " << per.GetName() << ", "
//		<< "phone: " << per.GetPhone();
//	return out;
//}
//class TelPhoneBook
//{
//	Array<Person*> perarr;
//public:
//	void Add()
//	{
//		cout << "�̸� �Է�: ";
//		string name;
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		string phone;
//		cin >> phone;
//		perarr.Add(new Person(name, phone));
//	}
//	~TelPhoneBook()
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//			delete perarr[i];
//	}
//	void Print() const
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//			cout << *perarr[i] << endl;;
//		//perarr[i]->Print();
//	}
//	void Search() const
//	{
//		cout << "�˻� �̸� �Է�: ";
//		string name;
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if (*perarr[i] == name)
//			{
//				cout << "[" << i << "]: ";
//				cout << *perarr[i] << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//		cout << "������ �̸� �Է�: ";
//		string name;
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if (name == perarr[i]->GetName())
//			{
//
//			}
//		}
//
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Add();
//	tp.Add();
//	tp.Print();
//	tp.Search();
//	system("pause");
//}


//#include <iostream> // Array�� Heap��
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // ������ ����
//	int capacity; // �޸��� �뷮(����)
//public:
//	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new K[capacity];
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const K& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const K& operator[](int idx) const
//	{
//		return buf[idx];
//	}
//};
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ", " << "phone : " << phone << endl;
//	}
//	const string& GetName() const { return name; }
//	const string& GetPhone() const { return phone; }
//};
//ostream& operator<<(ostream& out, const Person& per)
//{
//	out << "name: " << per.GetName() << ", "
//		<< "phone: " << per.GetPhone();
//	return out;
//}
//class TelPhoneBook
//{
//	Array<Person*> perarr;
//public:
//	void Add()
//	{
//		cout << "�̸� �Է�: ";
//		string name;
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		string phone;
//		cin >> phone;
//		perarr.Add(new Person(name, phone));
//	}
//	~TelPhoneBook()
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//			delete perarr[i];
//	}
//	void Print() const
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//			cout << *perarr[i] << endl;;
//			//perarr[i]->Print();
//	}
//	void Search() const
//	{
//		cout << "ã�� �̸� �Է�: ";
//		string name;
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if (name == perarr[i]->GetName())
//			{
//				cout << "�̸�: " << perarr[i]->GetName() << ", " << "��ȭ ��ȣ: " << perarr[i]->GetPhone() << endl;
//			}
//		}
//	}
//	void Remove()
//	{
//
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Add();
//	tp.Add();
//	tp.Print();
//	system("pause");
//}



//#include <iostream> // Array�� Heap��
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // ������ ����
//	int capacity; // �޸��� �뷮(����)
//public:
//	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new K[capacity];
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const K& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const K& operator[](int idx) const
//	{
//		return buf[idx];
//	}
//};
//class Person
//{
//	string name;
//	string phone;
//public:
//	Person(const string& n = "", const string& p = "") : name(n), phone(p)
//	{
//
//	}
//	void Print() const
//	{
//		cout << "name : " << name << ", " << "phone : " << phone << endl;
//	}
//	const string& GetName() const { return name; }
//	const string& GetPhone() const { return phone; }
//};
//
//class TelPhoneBook
//{
//	Array<Person*> perarr;
//public:
//	void Add()
//	{
//		cout << "�̸� �Է�: ";
//		string name;
//		cin >> name;
//		cout << "��ȭ �Է�: ";
//		string phone;
//		cin >> phone;
//		perarr.Add(new Person(name, phone));
//	}
//	void Print() const
//	{
//		for (int i = 0; i < perarr.Size(); ++i)
//			perarr[i]->Print();
//	}
//	void Search() const
//	{
//
//	}
//	void Remove()
//	{
//
//	}
//};
//void main()
//{
//	TelPhoneBook tp;
//	tp.Add();
//	tp.Print();
//	system("pause");
//}




//#include <iostream> // Array�� Heap��
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // ������ ����
//	int capacity; // �޸��� �뷮(����)
//public:
//	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new K[capacity];
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const K& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const K& operator[](int idx) const
//	{
//		return buf[idx];
//	}
//};
//void main()
//{
//	Array<double>* parr = new Array<double>;
//	Array<string>* psarr = new Array<string>(200);
//
//	psarr->Add("Hello!");
//	psarr->Add(string("ABC"));
//	psarr->Add((string)"12345");
//
//	parr->Add(10.1);
//	parr->Add(20.56);
//	parr->Add(30.21);
//
//	for (int i = 0; i < parr->Size(); ++i)
//		cout << (*parr)[i] << ":" << psarr->operator[](i) << endl;
//
//	delete parr;
//	delete psarr;
//
//	system("pause");
//}


//#include <iostream> // Array�� ���ÿ�
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // ������ ����
//	int capacity; // �޸��� �뷮(����)
//public:
//	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new K[capacity];
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size ; ++i)
//			buf[i] = arg.buf[i];
//
//		return *this;
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const K& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const K& operator[](int idx) const
//	{
//		return buf[idx];
//	}
//};
//void main()
//{
//	Array<double> arr;
//	Array<string> sarr; // ��¥ Ŭ������ �� ������ ���� �������.
//	
//	sarr.Add("Hello!");
//	sarr.Add(string("ABC"));
//	sarr.Add((string)"12345");
//
//	arr.Add(10.1);
//	arr.Add(20.56);
//	arr.Add(30.21);
//
//	Array<double> arr2;
//	arr2 = arr;
//
//	for (int i = 0; i < sarr.Size(); ++i)
//		cout << arr[i] << ":" << sarr[i] << endl;
//
//	for (int i = 0; i < arr2.Size(); ++i)
//		cout << arr2[i] << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // ������ ����
//	int capacity; // �޸��� �뷮(����)
//public:
//	Array(int cap = 100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new K[capacity];
//	}
//	Array(const Array& arg)
//	{
//		size = arg.size;
//		capacity = arg.capacity;
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const K& arg)
//	{
//		delete[] buf;
//		size = arg.size;
//		capacity = arg.capacity;
//
//		buf = new K[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const K& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const K& operator[](int idx) const
//	{
//		return buf[idx];
//	}
//};
//void main()
//{
//	Array<double> arr;
//	arr.Add(10.1);
//	arr.Add(20.56);
//	arr.Add(30.21);
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr[i] << endl;
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename T>
//class Array
//{
//	T* buf;
//	int size;
//	int capacity;
//public:
//	Array(int cap=100) : buf(NULL), capacity(cap), size(0)
//	{
//		buf = new T[capacity];
//	}
//	Array(const Array& arg)
//	{
//		buf = new T[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	const Array& operator=(const Array& arg)
//	{
//		delete[] buf;
//		buf = new T[arg.capacity];
//		for (int i = 0; i < arg.size; ++i)
//			buf[i] = arg.buf[i];
//	}
//	~Array()
//	{
//		delete[] buf;
//	}
//	void Add(const T& data)
//	{
//		buf[size++] = data;
//	}
//	int Size() const
//	{
//		return size;
//	}
//	const T& operator[](int idx)
//	{
//		return buf[idx];
//	}
//};
//void main()
//{
//	Array<double> arr;
//	arr.Add(10.1);
//	arr.Add(20.56);
//	arr.Add(30.21);
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr[i] << endl;
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename T>
//class Stack
//{
//	T stack[5];
//	int top;
//public:
//	Stack() : top(0)
//	{
//
//	}
//	void Push(const T& data) // TŸ���� ��ü Ÿ���� �� �� �ִٴ� ��
//	{
//		stack[top++] = data;
//	}
//	const T& Pop()
//	{
//		return stack[--top];
//	}
//};
//void main()
//{
//	stack<string> st; //T�� double �������� �ϰڴ�. �̰� Ŭ������ �̸�
//	st.push("ABC");
//	st.push("Hello!");
//	st.push("12345");
//
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//	st.pop();
//
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;
//template <typename T>
//class Stack
//{
//	T stack[5];
//	int top;
//public:
//	Stack() : top(0)
//	{
//
//	}
//	void Push(const T& data) // TŸ���� ��ü Ÿ���� �� �� �ִٴ� ��
//	{
//		stack[top++] = data;
//	}
//	const T& Pop()
//	{
//		return stack[--top];
//	}
//};
//void main()
//{
//	Stack<string> st; //T�� double �������� �ϰڴ�. �̰� Ŭ������ �̸�
//	st.Push("ABC");
//	st.Push("Hello!");
//	st.Push("12345");
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;
//template <typename T>
//class Stack
//{
//	T stack[5];
//	int top;
//public:
//	Stack() : top(0)
//	{
//
//	}
//	void Push(const T& data) // TŸ���� ��ü Ÿ���� �� �� �ִٴ� ��
//	{
//		stack[top++] = data;
//	}
//	const T& Pop()
//	{
//		return stack[--top];
//	}
//};
//void main()
//{
//	Stack<string> st; //T�� double �������� �ϰڴ�. �̰� Ŭ������ �̸�
//	st.Push("ABC");
//	st.Push("Hello!");
//	st.Push("12345");
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;
//template <typename T>
//class Stack
//{
//	T stack[5];
//	int top;
//public:
//	Stack() : top(0)
//	{
//
//	}
//	void Push(T data)
//	{
//		stack[top++] = data;
//	}
//	T Pop()
//	{
//		return stack[--top];
//	}
//};
//void main()
//{
//	Stack<string> st; //T�� double �������� �ϰڴ�. �̰� Ŭ������ �̸�
//	st.Push("ABC");
//	st.Push("Hello!");
//	st.Push("12345");
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


///*
//���ø��� �������� �˰���� �ڷᱸ������ ����
//Stack �ڷᱸ��
//- ���� ���� �ʰ� ���� ���� ���� ����
//�������̽�
//- Push()
//- Pop()
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//template <typename T>
//class Stack
//{
//	T stack[5];
//	int top;
//public:
//	Stack() : top(0)
//	{
//
//	}
//	void Push(T data)
//	{
//		stack[top++] = data;
//	}
//	T Pop()
//	{
//		return stack[--top];
//	}
//};
//void main()
//{
//	Stack<double> st; //T�� double �������� �ϰڴ�. �̰� Ŭ������ �̸�
//	st.Push(10.23);
//	st.Push(20.123);
//	st.Push(30.531);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}



///*
//���ø��� �������� �˰���� �ڷᱸ������ ����
//Stack �ڷᱸ��
//- ���� ���� �ʰ� ���� ���� ���� ����
//�������̽�
//- Push()
//- Pop()
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//class Stack
//{
//	double stack[5];
//	int top;
//public:
//	Stack() : top(0)
//	{
//
//	}
//	void Push(double data)
//	{
//		stack[top++] = data;
//	}
//	double Pop()
//	{
//		return stack[--top];
//	}
//};
//void main()
//{
//	Stack st;
//	st.Push(10.23);
//	st.Push(20.123);
//	st.Push(30.531);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


///*
//���ø��� �������� �˰���� �ڷᱸ������ ����
//Stack �ڷᱸ�� 
//- ���� ���� �ʰ� ���� ���� ���� ����
//�������̽�
//- Push()
//- Pop()
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//class Stack
//{
//	int stack[5];
//	int top;
//public:
//	Stack() : top(0) 
//	{
//
//	}
//	void Push(int data)
//	{
//		stack[top++] = data;
//	}
//	int Pop() 
//	{
//		return stack[--top];
//	}
//};
//void main()
//{
//	Stack st;
//	st.Push(10);
//	st.Push(20);
//	st.Push(30);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


///*
//����
//s1+=s2
//cin >> s3;
//s[0] s2[2];
//*/
//
///*
//������ ���ϰ� ����!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//const int& GetData() // ���� �����°� �´µ� ���� �����ϰ� ���� �����ž�
//{
//	return &::data;
//}
//void main()
//{
//	/*
//	�������� �����ε� ���� �Ұ����� �����̱� ������ ���� �Ұ� ( �б� �����θ� ��� )
//	*/
//	//GetData() = 10; //const ������ ������ ������ ���� �Ұ�.
//	cout << GetData() << endl;
//	cout << ::data << endl;
//
//	system("pause");
//}



///*
//������ ���ϰ� ����!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//const int* GetData() // ���� �����°� �´µ� ���� �����ϰ� ���� �����ž�
//{
//	return &::data;
//}
//void main()
//{
//	/*
//	�������� �����ε� ���� �Ұ����� �����̱� ������ ���� �Ұ� ( �б� �����θ� ��� )
//	*/
//	cout << *GetData() << endl;
//	cout << ::data << endl;
//
//	system("pause");
//}

///*
//������ ���ϰ� ����!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//int* GetData()
//{
//	return &::data;
//}
//void main()
//{
//	*GetData() = 10; /*
//					�ּ� �տ� * �� ���̸�, �޸��� �̸��� �ǹ��� �׷��� �� ���� �����ϰ� ��.
//					*/
//	cout << ::data << endl;
//
//	system("pause");
//}


///*
//������ ���ϰ� ����!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//int& GetData()
//{
//	return ::data;
//}
//void main()
//{
//	GetData() = 10; /*
//					������ �Ǽ� 10���� ����� ��
//					GetData�� ::data�� �޸��� �̸�(����)�� ��.
//					������ ��ȯ�Ѵٴ� ���� ���ϵ� �ִ� �޸��� ������ ������ ��
//					*/
//	cout << ::data << endl;
//
//	system("pause");
//}




///*
//������ ���ϰ� ����!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//int GetData()
//{
//	return ::data;
//}
//void main()
//{
//	GetData() = 10; /* 
//					return �ؼ� �ǵ��ƿ��� �����Ͷ�� 0 ��, 0���ٰ� 10�� ������� ���̱� ������ ���� �ȵǴ� �ڵ�
//					*/
//	cout << ::data << endl;
//
//	system("pause");
//}
//

///*
//������ ���ϰ� ����!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//void main()
//{
//	int data = 50;
//	cout << ::data << endl; // ���� ������ ����� �̰� ���� �����ٶ�� ǥ�ø� ����� ��. ( ���� ������� ǥ�� ) - ������ ���� �� �ٸ�. ( �Ϲ����� �����Ϸ��� �� �ٿ��� �� )
//	cout << data << endl; // ���� ���� ������
//	/*
//	scope (��ȿ ����) - ������ ��� �Ǵ� ������ ����ΰ�?
//	*/
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//	int size;
//public:
//	String(const char* s = "") : size(0)
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
//		delete[] buf;
//		size = arg.size;
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
//ostream& operator<<(ostream& out, const String& s)
//{
//	out << s.c_str();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	String s2("ABC");
//
//	s2 = s1;
//	cout << s1 << ":" << s2 << endl;
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//	int size;
//public:
//	String(const char* s = "") : size(0)
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	const char* c_str() const
//	{
//		return buf;
//	}
//};
//ostream& operator<<(ostream& out, const String& s)
//{
//	out << s.c_str();
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	cout << s1 << endl;
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//	int size;
//public:
//	String(const char* s = "") : size(0)
//	{
//		buf = new char[strlen(s) + 1];
//		strcpy_s(buf, strlen(s) + 1, s);
//	}
//};
//ostream& operator<<(ostream& out, const String& s)
//{
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	cout << s1 << endl;
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//	int size;
//public:
//	String(const char* s = "") : size(0)
//	{
//	}
//};
//ostream& operator<<(ostream& out, const String& s)
//{
//	return out;
//}
//void main()
//{
//	String s1("Hello!");
//	cout << s1 << endl;
//	system("pause");
//}




//#include <iostream>// ���� �����
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//
//class String
//{
//	char* buf;
//	int size;
//public:
//	String(const char* s = "") : size(0)
//	{
//		size = strlen(s);
//		buf = new char[size + 1];
//		strcpy_s(buf, size + 1, s);
//	}
//	String(const String& arg)
//	{
//		buf = new char[arg.size + 1];
//		strcpy_s(buf, arg.size + 1, arg.buf);
//	}
//	const String& operator=(const String& arg) // ��ȯ �ؾ���..��
//	{
//		delete[] buf;
//
//		buf = new char[arg.size + 1];
//		strcpy_s(buf, arg.size + 1, arg.buf);
//		for (int i = 0; i < arg.size + 1; ++i)
//			buf[i] = arg.buf[i];
//	}
//	char operator[](int idx) const
//	{
//		return buf[idx];
//	}
//	int GetSize() const
//	{
//		return size;
//	}
//	~String()
//	{
//		delete[] buf;
//	}
//};
//ostream& operator<<(ostream& o, const String& arg)
//{
//	for (int i = 0; i < arg.GetSize() + 1; ++i)
//		o << arg[i] << "";
//	return o;
//}
//void main()
//{
//	String s1("Hello!");
//	cout << s1 << endl;
//	system("pause");
//}