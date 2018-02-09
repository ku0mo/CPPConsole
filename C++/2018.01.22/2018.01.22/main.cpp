#include <iostream>
#include <stdlib.h>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y)
	{
		cout << "Point()" << endl;
	}
	~Point()
	{
		cout << "~Point()" << endl;
	}
	void Print() const
	{
		cout << x << ',' << y << endl;
	}
};
void main()
{
	{ // �ӽ� ��ü�� 3�� ��������ٰ� 3�� ����� - �ٸ� ������ �̷� ���� �ӽð�ü�� �������� ���� - �Ϲ������� �ٷ� �����Ϸ��� �� �� ��� ��.
		Point(2, 3); // ���� ��ü or �������� ��ü or �ӽ� ��ü
		Point(2, 3);
		Point(2, 3);
	}
	system("pause");
}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	void Print() const
//	{
//		cout << x << ',' << y << endl;
//	}
//};
//void main()
//{
//	{
//		Point m;
//		m = Point(2, 3); // �߿�!! // �ӽ� ��ü *** ��ü���� �̸��� ����... �� ���忡�� ��������� �� ���忡�� �����
//		m.Print();
//		// ��ü 2��
//	}
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
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
//void main()
//{
//	Point n(1,2); // �ʱ�ȭ �ڵ�
//	Point m;
//	m = Point(2,3); // �߿�!! // �ӽ� ��ü *** ��ü���� �̸��� ����... �� ���忡�� ��������� �� ���忡�� �����
//	Point k;
//	k = Point(); //�ӽ� ��ü �����ϰ� �̰����� �����
//
//	n.Print();
//	m.Print();
//	k.Print();
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void main()
//{
//	int n(10); // �ʱ�ȭ �ڵ�
//	int m;
//	m = int(10); // ���ʰ��� ��Ʈ���� 10���� ������ // �����ڸ� �̿��� ����ȯ Ȥ�� �ʱ�ȭ
//	int k;
//	k = int(); //�⺻ ������ 0 �� �� 
//
//	cout << n << ',' << m << ','<< k << endl;
//	system("pause");
//}
//


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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	cout << arr.At(0) << endl;
//	cout << arr.At(1) << endl;
//	cout << arr.At(2) << endl;
//
//	cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << arr[2] << endl;
//
//	system("pause");
//}


///*
//������ ��ü���� [] �� ����Ϲ� �� ��ü�� �����̳� ��ü��� �� - ���������� ������ �޸𸮷� ��ü���� ��� �ִ�.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//	int operator[](int idx) const
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	int operator[](int idx)
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	const Point operator++(int)
//	{
//		//Point t(x, y); // �����ϱ� ���� ���Ҹ� �ѱ�� �� // �ٵ� ������ü�̱� ������ �̷��� �ѱ�� �ȵ�
//		Point t(Point(x, y));
//		++x; ++y;
//		return t;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	int x = pt1[0]; // pt1.operator[](0)
//	int y = pt1[1]; // pt1.operaotr[](1)
//
//	cout << x << "," << y << endl;
//	system("pause");
//}




///*
//������ ��ü���� [] �� ����Ϲ� �� ��ü�� �����̳� ��ü��� �� - ���������� ������ �޸𸮷� ��ü���� ��� �ִ�.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//	int operator[](int idx) const
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	int operator[](int idx)
//	{
//		if (idx == 0)
//			return this->x;
//		else
//			return this->y;
//	}
//	const Point operator++(int)
//	{
//		//Point t(x, y); // �����ϱ� ���� ���Ҹ� �ѱ�� �� // �ٵ� ������ü�̱� ������ �̷��� �ѱ�� �ȵ�
//		Point t(Point(x, y));
//		++x; ++y;
//		return t;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	int x = pt1[0]; // pt1.operator[](0)
//	int y = pt1[1]; // pt1.operaotr[](1)
//
//	cout << x << "," << y << endl;
//	system("pause");
//}
//


//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//	const Point operator++(int)
//	{
//		//Point t(x, y); // �����ϱ� ���� ���Ҹ� �ѱ�� �� // �ٵ� ������ü�̱� ������ �̷��� �ѱ�� �ȵ�
//		Point t = Point(x, y);
//		++x; ++y;
//		return t;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//
//	pt2 = pt1++; // ���� - pt1.operator++() // ������ ������ �����ϱ� ���� ����� �ʿ���, ���� - pt1.operator(0) �̷��� �ؼ���! ���
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}



//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator++()
//	{
//		++x; ++y;
//		return *this;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2;
//
//	pt2 = ++pt1; //pt1.operator++()
//	pt1.Print();
//	pt2.Print();
//	system("pause");
//}


//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y)
//	{
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	void operator++()
//	{
//		++x; ++y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//
//	++pt1; //pt1.operator++()
//	pt1.Print();
//	system("pause");
//}



//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int *py;
//public:
//	Point(int x = 0, int y = 0) : x(x)
//	{
//		py = new int(y);
//	}
//	Point(const Point& arg) : x(arg.x)
//	{
//		py = new int(*arg.py);
//	}
//	const Point& operator=(const Point& arg)
//	{
//		delete py;
//
//		x = arg.x;
//		py = new int(*py);
//		return *this;
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print() const
//	{
//		cout << x << "," << *py << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2 = pt1;
//
//	pt1.Print();
//	pt2.Print();
//
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
//};
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
//	Array arr2;
//	arr = arr2 = arr;
//	arr2.Add(100);
//	arr2.Add(100);
//
//	PrintArray(arr2);
//	PrintArray(arr);
//
//	system("pause");
//}
//



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
//};
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
//	Array arr2;
//	arr2 = arr;
//	arr2.Add(100);
//	arr2.Add(100);
//
//	PrintArray(arr2);
//
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
//		capacity = arg.capacity;
//		size = arg.size;
//
//		delete[] buf;
//		buf = new int[arg.capacity];
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
//};
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	
//	PrintArray(arr);
//
//	Array arr2;
//	arr2 = arr;
//	arr2.Add(100);
//	arr2.Add(100);
//
//	PrintArray(arr2);
//
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int *py;
//public:
//	Point(int x = 0, int y = 0) : x(x)
//	{
//		py = new int(y);
//	}
//	Point(const Point& arg)
//	{
//		x = arg.x;
//		*py = *arg.py;
//	}
//	const Point& operator=(const Point& arg)
//	{
//		x = arg.x;
//		*py = *arg.py;
//		return *this;
//	}
//	~Point()
//	{
//		delete py;
//	}
//	void Print() const
//	{
//		cout << x << "," << *py << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt2 = pt1;// pt2.operator=(pt1); 
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}




///*
//���� �Լ�
//-���� ������ : �ʱ�ȭ ex) Point pt2(pt1);
//
//-���� ���� ������ : �̹� ��ü�� ������� ���¿��� ��� �� ex) Point pt1; pt1 = pt2;
//
//Ŭ������ ���� �ϸ� �ƹ� �͵� �ȸ������
//class Test
//{ // ����Ʈ
//1. �⺻ ������
//2. �⺻ �Ҹ���
//3. �⺻ ���� ������ ( ���� ���� )
//4. �⺻ ���� ���� ������ ( ���� ���� )
//}
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt2 = pt1;// pt2.operator=(pt1); 
//	pt1.Print();
//	pt2.Print();
//
//	system("pause");
//}



///*
//������ �ߺ�
//-���� ������
//
//-���� ������
//
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg) const
//	{
//		//if (x == arg.x && y == arg.y)
//		//	return true;
//		//else
//		//	return false;
//		return  x == arg.x && y == arg.y ? true : false;
//	}
//	const Point& operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//		//this// �� ��ü�� �ּ�
//		return *this; // ��ü �ڽ��� ������ ��ȯ ��
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	Point pt3 = pt1 += pt2; // pt1 = pt1 + pt2; // pt1.operator+=(pt2); //100% ������ �ڵ�
//	pt1.Print();
//	pt3.Print();
//
//	system("pause");
//}



///*
//������ �ߺ�
//-���� ������
//
//-���� ������
//
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg) const
//	{
//		//if (x == arg.x && y == arg.y)
//		//	return true;
//		//else
//		//	return false;
//		return  x == arg.x && y == arg.y ? true : false;
//	}
//	const Point& operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//		//return Ponit(x, y);
//		return *this;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	Point pt3 = pt1 += pt2; // pt1 = pt1 + pt2; // pt1.operator+=(pt2); //100% ������ �ڵ�
//	pt1.Print();
//	pt3.Print();
//
//	system("pause");
//}


///*
//������ �ߺ�
//-���� ������
//
//-���� ������
//
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//	bool operator==(const Point& arg) const
//	{
//		//if (x == arg.x && y == arg.y)
//		//	return true;
//		//else
//		//	return false;
//		return  x == arg.x && y == arg.y ? true : false;
//	}
//	void operator+=(const Point& arg)
//	{
//		x += arg.x;
//		y += arg.y;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt1 += pt2; // pt1 = pt1 + pt2; // pt1.operator+=(pt2); //100% ������ �ڵ�
//	pt1.Print();
//
//	system("pause");
//}


///*
//������ �ߺ�
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//
//	bool operator==(const Point& arg) const
//	{
//		if (x == arg.x && y == arg.y)
//			return true;
//		else
//			return false;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	if (pt1 == pt2) //pt1.operator==(pt2)
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//
//	system("pause");
//}



///*
//������ �ߺ�
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//	const Point& operator-(const Point& arg) const
//	{
//		return Point(x - arg.x, y - arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3;
//
//	pt3 = pt1 - pt2;
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}



///*
//������ �ߺ�
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	//Point pt3 = pt1.Add(pt2);
//	//Point pt3 = pt1 + pt2;
//	Point pt3 = pt1.operator+(pt2); // �����Ϸ��� �̷��� �ؼ���
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}



///*
//������ �ߺ�
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& operator+(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	//Point pt3 = pt1.Add(pt2);
//	Point pt3 = pt1+pt2;
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}



///*
//������ �ߺ�
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& Add(const Point& arg) const
//	{
//		return Point(x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2);
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}




///*
//������ �ߺ�
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//	const Point& Add(const Point& arg) const
//	{
//		return Point( x + arg.x, y + arg.y);
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//	Point pt3 = pt1.Add(pt2);
//
//
//	pt1.Print();
//	pt2.Print();
//	pt3.Print();
//	system("pause");
//}
//


///*
//������ �ߺ�
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point(int _x=0, int _y=0) : x(_x), y(_y)
//	{
//
//	}
//	void Print() const
//	{
//		cout << x << "," << y << endl;
//	}
//};
//void main()
//{
//	Point pt1(2, 3);
//	Point pt2(3, 5);
//
//	pt1.Print();
//	pt2.Print();
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
//		buf = new int[capacity];
//		for( int i = 0 ; i < size; ++i)
//			buf[i] = arg.buf[i];
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
//void PrintArray(const Array& pa) // ��ü�� �������� �ʴ´�.
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
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
//void PrintArray(const Array& pa) // ��ü�� �������� �ʴ´�.
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//
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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	PrintArray(arr);
//	/*
//	�迭�� ��� ���Ҹ� ����ϴ� ����� arr���� �޼����� ���� ���� �ƴ�. arr�� ����� �ƴ϶�� ��
//	*/
//	system("pause");
//}
//



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
//void PrintArray(const Array& pa)
//{
//	for (int i = 0; i < pa.Size(); ++i)
//		cout << pa.At(i) << endl;
//}
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//	
//	PrintArray(arr);
//	system("pause");
//}
//

///*
//
//*/
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
//void main()
//{
//	Array arr(100);
//
//	arr.Add(10);
//	arr.Add(20);
//	arr.Add(30);
//
//	for (int i = 0; i < arr.Size(); ++i)
//		cout << arr.At(i) << endl;
//
//	system("pause");
//}