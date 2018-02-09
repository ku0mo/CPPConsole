/*
template 클래스는 코드 전체가 헤더에 들어감!
템플릿이란 건 구현이 아님으로 모두다 헤더!! 
*/
#include <iostream> // Array가 Heap에
#include <cstdlib>
#include <string>
#include <stack>

using namespace std;
template <typename K>
class Array
{
	K* buf;
	int size; // 원소의 개수
	int capacity; // 메모리의 용량(개수)
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
	virtual ~Person() // 모든 소멸자는 가상 소멸자로 사용되야 함
	{

	}
	virtual void Print() const = 0; // 몸체를 가질 필요가 없다. 순수 가상함수
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
		cout << "[1] 교수 정보 입력, [2] 학생 정보 입력:";
		string choose; 
		cin >> choose;
		
		cout << "이름 입력: ";
		string name;
		cin >> name;
		cout << "전화 입력: ";
		string phone;
		cin >> phone;

		switch (choose[0])
		{
		case '1':
		{
			string position;
			cout << "직위 입력: ";
			cin >> position;
			perarr.Add(new Professor(name, phone, position));
		}
			break;
		case '2':
		{
		    int grade;
			cout << "학년 입력: ";
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
		cout << "검색 이름 입력: ";
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
		cout << "제거할 이름 입력: ";
		string name;
		cin >> name;
		for (int i = 0; i < perarr.Size(); ++i)
		{
			if (perarr[i]->GetName() == name)
			{
				// 원래 Array를 다 만들면 perarr.Remove(i); // 이렇게 할 수 있게 만들어야 함.
				delete perarr[i]; // telphonebook에서 지워야 함 
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




//#include <iostream> // Array가 Heap에
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // 원소의 개수
//	int capacity; // 메모리의 용량(개수)
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
//		cout << "이름 입력: ";
//		string name;
//		cin >> name;
//		cout << "전화 입력: ";
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
//		cout << "검색 이름 입력: ";
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
//		cout << "제거할 이름 입력: ";
//		string name;
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if (*perarr[i] == name)
//			{
//				// 원래 Array를 다 만들면 perarr.Remove(i); // 이렇게 할 수 있게 만들어야 함.
//				delete perarr[i]; // telphonebook에서 지워야 함 
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



//#include <iostream> // Array가 Heap에
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // 원소의 개수
//	int capacity; // 메모리의 용량(개수)
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
//		cout << "이름 입력: ";
//		string name;
//		cin >> name;
//		cout << "전화 입력: ";
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
//		cout << "검색 이름 입력: ";
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
//		cout << "제거할 이름 입력: ";
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


//#include <iostream> // Array가 Heap에
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // 원소의 개수
//	int capacity; // 메모리의 용량(개수)
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
//		cout << "이름 입력: ";
//		string name;
//		cin >> name;
//		cout << "전화 입력: ";
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
//		cout << "찾을 이름 입력: ";
//		string name;
//		cin >> name;
//		for (int i = 0; i < perarr.Size(); ++i)
//		{
//			if (name == perarr[i]->GetName())
//			{
//				cout << "이름: " << perarr[i]->GetName() << ", " << "전화 번호: " << perarr[i]->GetPhone() << endl;
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



//#include <iostream> // Array가 Heap에
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // 원소의 개수
//	int capacity; // 메모리의 용량(개수)
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
//		cout << "이름 입력: ";
//		string name;
//		cin >> name;
//		cout << "전화 입력: ";
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




//#include <iostream> // Array가 Heap에
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // 원소의 개수
//	int capacity; // 메모리의 용량(개수)
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


//#include <iostream> // Array를 스택에
//#include <cstdlib>
//#include <string>
//#include <stack>
//using namespace std;
//template <typename K>
//class Array
//{
//	K* buf;
//	int size; // 원소의 개수
//	int capacity; // 메모리의 용량(개수)
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
//	Array<string> sarr; // 진짜 클래스는 이 형식을 보고 만들어짐.
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
//	int size; // 원소의 개수
//	int capacity; // 메모리의 용량(개수)
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
//	void Push(const T& data) // T타입은 객체 타입이 될 수 있다는 뜻
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
//	stack<string> st; //T를 double 형식으로 하겠다. 이게 클래스의 이름
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
//	void Push(const T& data) // T타입은 객체 타입이 될 수 있다는 뜻
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
//	Stack<string> st; //T를 double 형식으로 하겠다. 이게 클래스의 이름
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
//	void Push(const T& data) // T타입은 객체 타입이 될 수 있다는 뜻
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
//	Stack<string> st; //T를 double 형식으로 하겠다. 이게 클래스의 이름
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
//	Stack<string> st; //T를 double 형식으로 하겠다. 이게 클래스의 이름
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
//템플릿은 범용적인 알고리즘과 자료구조에서 사용됨
//Stack 자료구조
//- 가장 먼저 늦게 들어간게 가장 먼저 나옴
//인터페이스
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
//	Stack<double> st; //T를 double 형식으로 하겠다. 이게 클래스의 이름
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
//템플릿은 범용적인 알고리즘과 자료구조에서 사용됨
//Stack 자료구조
//- 가장 먼저 늦게 들어간게 가장 먼저 나옴
//인터페이스
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
//템플릿은 범용적인 알고리즘과 자료구조에서 사용됨
//Stack 자료구조 
//- 가장 먼저 늦게 들어간게 가장 먼저 나옴
//인터페이스
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
//숙제
//s1+=s2
//cin >> s3;
//s[0] s2[2];
//*/
//
///*
//참조의 리턴과 관련!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//const int& GetData() // 참조 던지는게 맞는데 변경 가능하게 하진 않을거야
//{
//	return &::data;
//}
//void main()
//{
//	/*
//	데이터의 참조인데 변경 불가능한 참조이기 때문에 변경 불가 ( 읽기 용으로만 사용 )
//	*/
//	//GetData() = 10; //const 참조를 던졌기 때문에 변경 불가.
//	cout << GetData() << endl;
//	cout << ::data << endl;
//
//	system("pause");
//}



///*
//참조의 리턴과 관련!
//*/
//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int data = 0;
//
//const int* GetData() // 참조 던지는게 맞는데 변경 가능하게 하진 않을거야
//{
//	return &::data;
//}
//void main()
//{
//	/*
//	데이터의 참조인데 변경 불가능한 참조이기 때문에 변경 불가 ( 읽기 용으로만 사용 )
//	*/
//	cout << *GetData() << endl;
//	cout << ::data << endl;
//
//	system("pause");
//}

///*
//참조의 리턴과 관련!
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
//					주소 앞에 * 만 붙이면, 메모리의 이름이 되버림 그래서 값 변경 가능하게 됨.
//					*/
//	cout << ::data << endl;
//
//	system("pause");
//}


///*
//참조의 리턴과 관련!
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
//					변경이 되서 10값이 출력이 됨
//					GetData는 ::data의 메모리의 이름(참조)가 됨.
//					참조를 반환한다는 것은 리턴되 있는 메모리의 참조를 던지는 것
//					*/
//	cout << ::data << endl;
//
//	system("pause");
//}




///*
//참조의 리턴과 관련!
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
//					return 해서 되돌아오면 데이터라는 0 값, 0에다가 10을 넣으라는 것이기 때문에 말도 안되는 코드
//					*/
//	cout << ::data << endl;
//
//	system("pause");
//}
//

///*
//참조의 리턴과 관련!
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
//	cout << ::data << endl; // 전역 변수를 만들면 이게 전역 변수다라는 표시를 해줘야 함. ( 전역 변수라는 표시 ) - 컴파일 마다 쫌 다름. ( 일반적인 컴파일러는 안 붙여도 됨 )
//	cout << data << endl; // 지역 변수 데이터
//	/*
//	scope (유효 범위) - 변수가 사용 되는 범위가 어디인가?
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




//#include <iostream>// 내가 만든거
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
//	const String& operator=(const String& arg) // 반환 해야함..ㅠ
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