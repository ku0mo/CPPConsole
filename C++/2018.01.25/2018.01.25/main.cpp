/*
�˰��� ---  iterator --- �����̳�
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
class Point
{
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
	{

	}
	int GetX() const { return x; }
	int GetY() const { return y; }
	void Print() const
	{
		cout << x << "," << y;
	}
};
ostream& operator<<(ostream& o, const Point& pt)
{
	//pt.Print();
	o << pt.GetX() << ',' << pt.GetY();
	return o;
}
int main()
{
	vector<Point*> v;

	v.push_back(new Point(3, 4));
	v.push_back(new Point(2, 3));
	v.push_back(new Point(8, 9));
	v.push_back(new Point(3, 2));
	v.push_back(new Point(5, 6));

	sort(v.begin(), v.end()); // �̰� �����ϰ�
	for (unsigned i = 0; i < v.size(); ++i)
		cout << *v[i] << " ";// v[i]->Print();
	cout << endl;

	for (unsigned i = 0; i < v.size(); ++i)
		delete v[i];

	system("pause");
}


///*
//�˰��� ---  iterator --- �����̳�
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int _x=0, int _y=0) :x(_x), y(_y)
//	{
//
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const
//	{
//		cout << x << "," << y;
//	}
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//	//pt.Print();
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(3, 4));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(8, 9));
//	v.push_back(Point(3, 2));
//	v.push_back(Point(5, 6));
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}



///*
//�˰��� ---  iterator --- �����̳�
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//int main()
//{
//	vector<int> v;
//
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(40);
//
//	sort(v.begin(), v.end(), greater<int>());
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}




///*
//�˰��� ---  iterator --- �����̳�
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//int main()
//{
//	vector<int> v;
//
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(40);
//
//	sort(v.begin(), v.end(), greater<int>());
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}



///*
//�˰��� ---  iterator --- �����̳�
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> v;
//
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	
//	v.erase(v.begin() + 1, v.end() - 1); // ©������� ���� ����(����) (���� ����) ������ ������
//	//[b, e) // b�� ���� o, e�� ���� x => 10,20,30,40
//	// ��� ������ ��������! [������, �󱸰�)
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}


///*
//�ڷᱸ��
//��� ���α׷����� �ʿ��� �ڷᱸ���� �ٸ� (�� ������ ����)
//���� ? �񿬼� ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//int main()
//{
//	list<int> lt; // �޸� ��� ��å (���־��� �� 1���� 4����) , �Ϲ������� ���־� ��Ʃ����� ������ Ʈ�� ������� ������
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	lt.push_front(100);
//	lt.push_front(200);
//
//	list<int>::iterator iter = lt.begin();
//	++iter;
//	++iter;
//	lt.erase(iter); // ������! ������? (��ġ�� �־�� ��)( ��ġ�� �ݺ��� iterator�� )
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}

///*
//�ڷᱸ��
//��� ���α׷����� �ʿ��� �ڷᱸ���� �ٸ� (�� ������ ����)
//���� ? �񿬼� ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//int main()
//{
//	list<int> lt; // �޸� ��� ��å (���־��� �� 1���� 4����) , �Ϲ������� ���־� ��Ʃ����� ������ Ʈ�� ������� ������
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	lt.push_front(100);
//	lt.push_front(200);
//	lt.push_front(300);
//	lt.push_front(400);
//
//	//for (unsigned i = 0; i < lt.size(); ++i)
//	//	cout << lt[i] << " "; // ���� ���� �Ұ� 
//	//cout << endl;
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}




///*
//�ڷᱸ��
//��� ���α׷����� �ʿ��� �ڷᱸ���� �ٸ� (�� ������ ����)
//���� ? �񿬼� ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//int main()
//{
//	list<int> lt; // �޸� ��� ��å (���־��� �� 1���� 4����) , �Ϲ������� ���־� ��Ʃ����� ������ Ʈ�� ������� ������
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	//for (unsigned i = 0; i < lt.size(); ++i)
//	//	cout << lt[i] << " "; // ���� ���� �Ұ� 
//	//cout << endl;
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}



// ���ݱ��� ������ �����̳� - ������ ������ �ִ�
///*
//�ڷᱸ��
//��� ���α׷����� �ʿ��� �ڷᱸ���� �ٸ� (�� ������ ����)
//���� ? �񿬼� ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <deque>
//using namespace std;
//int main()
//{
//	deque<int> q; // �޸� ��� ��å (���־��� �� 1���� 4����) , �Ϲ������� ���־� ��Ʃ����� ������ Ʈ�� ������� ������
//
//	q.push_back(10);
//	q.push_back(20);
//	q.push_back(30);
//	q.push_back(40);
//	q.push_back(50);
//
//	for (unsigned i = 0; i < q.size(); ++i)
//		cout << q[i] << " ";
//	cout << endl;
//	
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v; // �޸� 1.5�� ��å( � ���� 2�� )
//
//	v.reserve(4); // �����ϰڴ�. �޸𸮸� �̸� �����ϴ� ��
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(10);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(20);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(30);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(40);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(50);
//	cout << v.size() << ',' << v.capacity() << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v; // �޸� 1.5�� ��å( � ���� 2�� )
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(10);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(20);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(30);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(40);
//	cout << v.size() << ',' << v.capacity() << endl;
//	v.push_back(50);
//	cout << v.size() << ',' << v.capacity() << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // �����̳� ������ ���Ҹ� ����Ű�µ� ��� �� ( �����Ϳ� ���� �ǹ̸� ���� ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter; //(���ͷ����ʹ� �����͸� �߻�ȭ �� �� )
//	iter = v.begin(); // ù ��° ���Ҹ� ����Ű�� iterator;
//					  //cout << iter << endl; // iterator�� ��ü�ε� iterator�� ����϶�� �� �� ����.
//	cout << *++iter << endl; // *iter ù��° ����Ű�� ������ ����(��)�� �Ǵ� ��
//	cout << *--v.end() << endl; // ������ ���� 50�� ��.
//	system("pause");
//}




///*
//iterator ���� ����! => �Ϲ�ȭ ���α׷����� �ϱ� ���ؼ�
//�����̳ʿ� ����ִ� ��� ���Ҹ� �Թ�ȭ �ؼ� ������ �� �ְ� �غ���!
//���� �޸� ������ �� �ٸ� �ڷ� ����(�����̳�)���� ���� �ϴ� ����� �� �ٸ�.
//�׷��� iterator �Ϲ�ȭ�� ������ ���� � �����̳ʵ� ������ ����� ���ؼ� (������ ���� ���)�� ���ؼ�
//������ ���·� ������ �� �ִ� ��ü�� iterator �̴�.
//�׷��� ��� �����̳ʴ� begin()�� end() ������ ó���� ���� ��ȯ�ϴ� �������̽��� ����.
//iterator�� ++�ϸ� �����Ϳ� ++ �� ��ó�� ���� ���Ҹ� ����Ű�� �ȴ�.
//
//��� end()�� ���ҵ��� �� ǥ��. ��Ȯ���� ������ ������ ������ ����Ŵ
//�н�Ʈ ���� ����
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // �����̳� ������ ���Ҹ� ����Ű�µ� ��� �� ( �����Ϳ� ���� �ǹ̸� ���� ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter; //(���ͷ����ʹ� �����͸� �߻�ȭ �� �� )
//	iter = v.begin(); // ù ��° ���Ҹ� ����Ű�� iterator;
//					  //cout << iter << endl; // iterator�� ��ü�ε� iterator�� ����϶�� �� �� ����.
//	cout << *iter << endl; // *iter ù��° ����Ű�� ������ ����(��)�� �Ǵ� ��
//	cout << *v.begin() << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // �����̳� ������ ���Ҹ� ����Ű�µ� ��� �� ( �����Ϳ� ���� �ǹ̸� ���� ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter; //(���ͷ����ʹ� �����͸� �߻�ȭ �� �� )
//	iter = v.begin(); // ù ��° ���Ҹ� ����Ű�� iterator;
//	//cout << iter << endl; // iterator�� ��ü�ε� iterator�� ����϶�� �� �� ����.
//	cout << *iter << endl; // *iter ù��° ����Ű�� ������ ����(��)�� �Ǵ� ��
//	cout << *v.begin() << endl;
//	system("pause");
//}



///*
//STL�� �����̳ʴ� 7������ ����
//���ҵ��� ����(������� ����) �ֳ�? ����?
//1. ������ �����̳�  ( �� ), ������
//- vector ( �޸𸮰� �迭ó��, �迭�� ���� ��� )
//- deque ( �Ϸ����� �޸� ����, �����ϴ� Ư¡, �񿬼� Ư¡ ��� )
//- list ( ���� ����Ʈ, ���ҵ��� ���� ���� ������ ���� )
//2. ���� �����̳� ( X ) , �ڵ����� �� ( 2�� Ʈ���� ���� �� )
//- set ( Ű ���� ������ ���� )
//- multiset
//- map ( Ű, ��� ������ �̷���� )
//- multimap
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // �����̳� ������ ���Ҹ� ����Ű�µ� ��� �� ( �����Ϳ� ���� �ǹ̸� ���� ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter(v.begin());  // begin()�� ������ �ʱ�ȭ�� ��ü�� ����
//	//begin()�� ó���� ���Ҹ� ����Ű�� ���ͷ����͸� ��ȯ�� ( �ᱹ ���� �����ϴ� �� )
//	/*
//	iterator�� �̸� (Ŭ������ �̸�)
//	*/
//	system("pause");
//}



///*
//STL�� �����̳ʴ� 7������ ����
//���ҵ��� ����(������� ����) �ֳ�? ����?
//1. ������ �����̳�  ( �� ), ������
//- vector ( �޸𸮰� �迭ó��, �迭�� ���� ��� )
//- deque ( �Ϸ����� �޸� ����, �����ϴ� Ư¡, �񿬼� Ư¡ ��� )
//- list ( ���� ����Ʈ, ���ҵ��� ���� ���� ������ ���� )
//2. ���� �����̳� ( X ) , �ڵ����� �� ( 2�� Ʈ���� ���� �� )
//- set ( Ű ���� ������ ���� )
//- multiset
//- map ( Ű, ��� ������ �̷���� )
//- multimap
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<string> v;// ����� ����(ũ��)�� ���´�. Ȯ��� 
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//
//	for (unsigned i = 0; i < v.size(); ++i)// vector��� ���� �Ǿ��ִ� Ŭ���� �ȿ� ������ Ÿ���̶�� Ÿ���� ������� ���� Ÿ���� �ǹ��� 
//		cout << v[i] << " ";
//	cout << endl;
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<string> v;// ����� ����(ũ��)�� ���´�. Ȯ��� 
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//
//	for (vector<string>::size_type i = 0; i < v.size(); ++i)// vector��� ���� �Ǿ��ִ� Ŭ���� �ȿ� ������ Ÿ���̶�� Ÿ���� ������� ���� Ÿ���� �ǹ��� 
//		cout << v[i] << " ";
//	cout << endl;
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<string> v;// ����� ����(ũ��)�� ���´�. Ȯ��� 
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v;// ����� ����(ũ��)�� ���´�. Ȯ��� 
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	system("pause");
//}



///*
//STL(���̺귯�� - ���� Ŭ����,�Լ�, ���� �������� ��)
//componet (�������)
//1. �����̳� ( �ڷᱸ�� Ŭ���� ) *** 4�� ������Ʈ
//2. �˰��� ( �Լ� ) ***
//3. �ݺ��� ( ��ġ�� ����Ŵ ) ***
//4. �Լ� ��ü (�Լ���) ***
//
//5. ��� ( �������̽� ��ȯ )
//6. �޸� �Ҵ�� ( �޸� �Ҵ� ��å�� ���� )
//*/
//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <iterator>
//using namespace std;
//int main()
//{
//	/*
//	��� ������ ������ ���� ������, ǥ�� ���̺귯���� ������ ���� ��ƴ�.
//	*/
//	vector<int> v; // �����̳� Ŭ���� // �����̳� ��ü
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	sort(v.begin()/*���ͷ�����(�ݺ���)*/, v.end(), greater<int>()/*�Լ� ��ü(�Լ� ó�� �����ϴ� ��ü*/); // sort �˰��� (�Լ� (���μ���)) 
//	copy(v.begin(), v.end(), /*���ͷ����� �����̳� ���*/ostream_iterator<int>(cout, " ")); // copy �˰��� (���� �˰���)
//	system("pause");
//}




///*
//static ��� //
//static ����� �޸� �� �� 1���� ������� (�۷ι� ������ ������)
//Ŭ������ ��� ������� �� ( ��ü ���� �����ϰ� ���� �� ��� - ���� ����)
//�޼ҵ嵵 ���� ����
//Ŭ���� ���� (��ü�� ���� ����)
//
//����(����) -> �߻�ȭ(�ν��Ͻ�ȭ) -> ��ü ����
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//class Math
//{
//	static string name;
//public:
//	static void SetName(const string& n)
//	{
//		name = n;
//	}
//	static void PrintName()
//	{
//		cout << name << endl;
//	}
//	static int Add(int a, int b)
//	{
//		return a + b;
//	}
//};
//string Math::name("class Math"); // name�ȿ��� static name�� �־��� ����� �� (C++������ ) - �ܺ� ������ ���´�.
//int main()
//{
//	Math::SetName("class Math ... ");
//	Math::PrintName();
//	cout << Math::Add(2, 3) << endl;
//	system("pause");
//}


///*
//static ��� //
//static ����� �޸� �� �� 1���� ������� (�۷ι� ������ ������)
//Ŭ������ ��� ������� �� ( ��ü ���� �����ϰ� ���� �� ��� - ���� ����)
//�޼ҵ嵵 ���� ����
//Ŭ���� ���� (��ü�� ���� ����)
//
//����(����) -> �߻�ȭ(�ν��Ͻ�ȭ) -> ��ü ����
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Math
//{
//public:
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//};
//int main()
//{
//	Math m; /// ��ü ����� �� �ʿ�..(���µ� �ʿ� ���� ������
//	cout << m.Add(2, 3) << endl;
//	system("pause");
//}





///*
//C++�� 4���� �ٽ� ��ҵ��� �ִ�.
//1. C��� ����
//2. ��ü���� ����
//3. Template �Ϲ�ȭ ���α׷���
//4. STL standart template ���̺귯��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
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
//int main()
//{
//	Point p1(2, 3);
//	Point& p2 = p1;
//	Point* p = new Point(4, 5);
//	Point arr[2] = { Point(1,2), Point(5,6) };
//	Point* pa = new Point[2];
//
//	p1.Print();
//	p2.Print();
//	p->Print();
//	arr->Print();
//	(arr+1)->Print();
//	pa->Print();
//	(pa+1)->Print();
//
//	delete p;
//	delete[] pa;
//	system("pause");
//}



///*
//C++�� 4���� �ٽ� ��ҵ��� �ִ�.
//1. C��� ����
//2. ��ü���� ����
//3. Template �Ϲ�ȭ ���α׷���
//4. STL standart template ���̺귯��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//	int x, y;
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
//int main()
//{
//	Point p1(2, 3);
//	Point& p2 = p1;
//	Point* p = new Point(4, 5);
//	Point arr[2] = { Point(1,2), Point(5,6) };
//	Point* pa = new Point[2];
//
//	p1.Print();
//	p2.Print();
//	p->Print();
//	arr[0].Print();
//	arr[1].Print();
//	pa[0].Print();
//	pa[1].Print();
//
//	delete p;
//	delete[] pa;
//	system("pause");
//}