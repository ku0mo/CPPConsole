
#include <iostream>
#include <cstdlib>
#include <string>
#include <map> 
#include <set>
/*
���� �����̳ʴ� �����͸� �����ϴ°� ����x
�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
***
1.find() - ���� �ϳ��� ã�� ��
2.lower_bound() - ������ ���� ����
3.upper_bound() - ������ �� ����
4.equal_range - ������ ������ �Ѳ�����
*/
using namespace std;
int main()
{
	map<int, string> m;

	m[1] = "one";
	m[3] = "three";
	m[5] = "five";
	
	for (map<int, string>::iterator iter = m.begin(); iter != m.end(); ++iter)
		cout << iter->first << ',' << iter->second << "          ";

	system("pause");
}


//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//1.find() - ���� �ϳ��� ã�� ��
//2.lower_bound() - ������ ���� ����
//3.upper_bound() - ������ �� ����
//4.equal_range - ������ ������ �Ѳ�����
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m[1] = "one";
//	m[3] = "three";
//	m[5] = "five";
//	map<int,string>::iterator iter = m.find(5);
//	if (iter != m.end())
//		iter.operator->()->second = "Five";
//		//iter->second = "Five"; // ��ü�� ����Ű�� ��, �׷��� ���� ����Ű�� ��ü�� ����� ������ ������ ȭ��ǥ ������ �� �� �ִ�.(������ �ߺ� �� ����)
//		//(*iter).second = "Five"; // value �� ������Ʈ
//
//
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}



//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//1.find() - ���� �ϳ��� ã�� ��
//2.lower_bound() - ������ ���� ����
//3.upper_bound() - ������ �� ����
//4.equal_range - ������ ������ �Ѳ�����
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m[1] = "one";
//	m[3] = "three";
//	m[5] = "five";
//	map<int,string>::iterator iter = m.find(5);
//	if (iter != m.end())
//		iter->second = "Five"; // ��ü�� ����Ű�� ��, �׷��� ���� ����Ű�� ��ü�� ����� ������ ������ ȭ��ǥ ������ �� �� �ִ�.(������ �ߺ� �� ����)
//		//(*iter).second = "Five"; // value �� ������Ʈ
//
//
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}


//
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//1.find() - ���� �ϳ��� ã�� ��
//2.lower_bound() - ������ ���� ����
//3.upper_bound() - ������ �� ����
//4.equal_range - ������ ������ �Ѳ�����
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m[1] = "one";
//	m[3] = "three";
//	m[5] = "five";
//	m[5] = "Five"; // update ����
//				   /*
//				   Ű�� �����ϸ�, ������Ʈ Ű�� �������� ������ ����
//				   ���� �� ���� �ֱ⶧����, ���� ������Ʈ�� ã�Ƽ��ϰ�, �߰��ҰŸ� insert��!
//				   */
//
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//1.find() - ���� �ϳ��� ã�� ��
//2.lower_bound() - ������ ���� ����
//3.upper_bound() - ������ �� ����
//4.equal_range - ������ ������ �Ѳ�����
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m[1] = "one";
//	m[3] = "three";
//	m[5] = "five";
//	m[5] = "Five"; // update ����
//	/*
//	Ű�� �����ϸ�, ������Ʈ Ű�� �������� ������ ����
//	*/
//	
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}
//




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//1.find() - ���� �ϳ��� ã�� ��
//2.lower_bound() - ������ ���� ����
//3.upper_bound() - ������ �� ����
//4.equal_range - ������ ������ �Ѳ�����
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m.insert(pair<int, string>(1, "one")); //Ŭ������ �̸��� ��ȣ�ϸ� ��ü�� ��
//	m.insert(pair<int, string>(3, "three"));
//	m.insert(pair<int, string>(5, "five"));
//	/*
//	 Ű�� ���� ����� ã�°� ��ǥ
//	 m[key] �� �ָ� value�� ������ ��ȯ ��
//	*/
//	cout << m[3] << endl;
//	cout << m[5] << endl;
//	cout << m[1] << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//1.find() - ���� �ϳ��� ã�� ��
//2.lower_bound() - ������ ���� ����
//3.upper_bound() - ������ �� ����
//4.equal_range - ������ ������ �Ѳ�����
//*/
//using namespace std;
//int main()
//{
//	multiset<int> s;
//
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//	s.insert(30);
//
//	pair <set<int>::iterator, set<int>::iterator> pr;
//	pr = s.equal_range(30); // �о� ��ü�� ��ȯ �� (������ ��ȯ ��)
//	if (pr.first != pr.second) // 
//	{
//		multiset<int>::iterator iter;
//		for (iter = pr.first; iter != pr.second; ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//*/
//using namespace std;
//int main()
//{
//	multiset<int> s;
//
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//	s.insert(30);
//
//	pair <set<int>::iterator, set<int>::iterator> pr;
//	pr = s.equal_range(30); // �о� ��ü�� ��ȯ �� (������ ��ȯ ��)
//	if (pr.first != pr.second) // 
//	{
//		multiset<int>::iterator iter;
//		for (iter = pr.first; iter != pr.second; ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//*/
//using namespace std;
//int main()
//{
//	multiset<int> s;
//
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//	s.insert(30);
//
//	multiset<int>::iterator iter1 = s.lower_bound(30);
//	multiset<int>::iterator iter2 = s.upper_bound(30);
//	if (iter1 != iter2) // 
//	{
//		multiset<int>::iterator iter;
//		for (iter = iter1; iter != iter2; ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//*/
//using namespace std;
//int main()
//{
//	set<int> s;
//
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//
//	set<int>::iterator iter1 = s.lower_bound(30);
//	set<int>::iterator iter2 = s.upper_bound(30);
//	if (iter1 != iter2) // ������ ã�� ����
//		cout << *iter1 << endl;
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//���� �����̳ʴ� �����͸� �����ϴ°� ����x
//�˻��� �����ϴ� ���� ��ǥ�� �����ϴ� ��o �׷��� ������ �˻� �������̽��� ����
//***
//*/
//using namespace std;
//int main()
//{
//	set<int> s;
//
//	s.insert(50);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//
//	set<int>::iterator iter = s.find(35);
//	if (iter != s.end())
//		cout << *iter << endl;
//	system("pause");
//}




///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> // vector , list ������ ���� ���̴°� ��
//using namespace std;
//
//int main()
//{
//	map<int, int> m; // Ű�� �ߺ��� ��� ��
//
//	m.insert(pair<int, int>(5, 500)); // �׻� ������ ����
//	m.insert(pair<int, int>(3, 300));
//	m.insert(pair<int, int>(7, 700));
//	m.insert(pair<int, int>(8, 800));
//	m.insert(pair<int, int>(2, 200));
//
//	// map // mapping ¦���´�. ����, key, value �� ������ �̷��. Ű�� �˸� Ű�� ���� �Ǿ� �ִ� ����� �ٷ� ����
//	// key�� ����ũ �ؾ�������, value�� ����ũ ���� �ʾƵ� ��, ��� ��
//	for (map<int, int>::iterator iter = m.begin(); iter != m.end(); ++iter)
//		cout << (*iter).first << " " << (*iter).second << "   ";
//	cout << endl;
//
//	pair<int, string> pr(1, "1");
//	cout << pr.first << " : " << pr.second << endl;
//
//	pr.first = 2;
//	pr.second = "-2-";
//	cout << pr.first << " : " << pr.second << endl;
//	system("pause");
//}




///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> // vector , list ������ ���� ���̴°� ��
//using namespace std;
//
//int main()
//{
//	map<int, int> m; // Ű�� �ߺ��� ��� ��
//
//	m.insert(pair<int, int>(5, 500)); // �׻� ������ ����
//	m.insert(pair<int, int>(3, 300));
//	m.insert(pair<int, int>(7, 700));
//	m.insert(pair<int, int>(8, 800));
//	m.insert(pair<int, int>(2, 200));
//
//	// map // mapping ¦���´�. ����, key, value �� ������ �̷��. Ű�� �˸� Ű�� ���� �Ǿ� �ִ� ����� �ٷ� ����
//	// key�� ����ũ �ؾ�������, value�� ����ũ ���� �ʾƵ� ��, ��� ��
//	for (map<int,int>::iterator iter = m.begin(); iter != m.end(); ++iter)
//		cout << (*iter).first <<" " << (*iter).second << "   ";
//	cout << endl;
//
//	pair<int, string> pr(1, "1");
//	cout << pr.first << " : " << pr.second << endl;
//
//	system("pause");
//}


///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <set> // ���� ��Ģ�� ����
//using namespace std;
//
//int main()
//{
//	multiset<int> s; // Ű�� �ߺ��� ��� ��
//
//	s.insert(100);
//	s.insert(80); 
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(80); // 80�� �ߺ� ��
//
//	for (multiset<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}




///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <set> // ���� ��Ģ�� ����
//using namespace std;
//
//int main()
//{
//	set<int> s; // set�� ���� ��ҵ��� ���� Ű��� �θ�
//
//	s.insert(100); // ���ĵǼ� ��
//	s.insert(80); // ����, ������Ʈ, ������, key(����ũ, ����x, null(x)) ���� ���� ��� ���� �� �� �ֱ⶧����
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	//s.insert(80); // 80�� ���� ��
//
//	for (set<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl; 
//
//	system("pause");
//}



///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//
//int main()
//{
//	list<int> lt1;
//
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//
//	list<int> lt2;
//	lt2.push_back(50);
//	lt2.push_back(60);
//	lt2.push_back(70);
//
//	lt1.insert(lt1.end(), lt2.begin(), lt2.end()); // ���� ���̱� ������ ������ �޶����� ����
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//	
//	system("pause");
//}


///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//
//int main()
//{
//	list<int> lt1;
//
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//
//	list<int> lt2;
//	lt2.push_back(50);
//	lt2.push_back(60);
//	lt2.push_back(70);
//
//	lt1.splice(lt1.end(), lt2, lt2.begin()); // �ٸ� �����̳ʶ� �ٸ� Ư�� ���� �޼ҵ�
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//
//	system("pause");
//}


///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//
//int main()
//{
//	list<int> lt1;
//
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//
//	list<int> lt2;
//	lt2.push_back(50);
//	lt2.push_back(60);
//	lt2.push_back(70);
//
//	lt1.splice(lt1.begin(), lt2, lt2.begin()); // �ٸ� �����̳ʶ� �ٸ� Ư�� ���� �޼ҵ�
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//	system("pause");
//}




///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//
//int main()
//{
//	list<int> lt1;
//
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//
//	list<int> lt2;
//	lt2.push_back(50);
//	lt2.push_back(60);
//	lt2.push_back(70);
//
//	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); // �ٸ� �����̳ʶ� �ٸ� Ư�� ���� �޼ҵ�
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//	system("pause");
//}


///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//
//int main()
//{
//	list<int> lt1;
//
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//
//	list<int> lt2;
//	lt2.push_back(50);
//	lt2.push_back(60);
//	lt2.push_back(70);
//
//	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); // �ٸ� �����̳ʶ� �ٸ� Ư�� ���� �޼ҵ�
//	cout << lt1.size() << " : " << lt2.size() << endl;
//	system("pause");
//}


///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const
//	{
//		cout << x << "," << y;
//	}
//	bool operator<(const Point& arg) const
//	{
//		return x < arg.GetX();
//	}
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//	//pt.Print();
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//class Functor
//{
//public:
//	bool operator()(const Point& lhs, const Point& rhs) const// ���̸� �״��, �����̸� �ٲ�
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // ���� ���
//			return lhs.GetY() < rhs.GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
//	}
//};
//struct CMP
//{
//	bool operator()(const Point& data) const
//	{
//		return data.GetX() > data.GetY() ;
//	}
//};
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
//	vector<Point>::iterator iter = find_if(v.begin(), v.end(), /*�ӽ� ��ü�� ���� �ѱ�*/CMP()); // ��� ��ġ�� ���ͷ����͸� ��ȯ �Ѵٰ� �����ϸ� ��
//
//	if (iter != v.end())
//		v.erase(iter);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}




///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const
//	{
//		cout << x << "," << y;
//	}
//	bool operator<(const Point& arg) const
//	{
//		return x < arg.GetX();
//	}
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//	//pt.Print();
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//class Functor
//{
//public:
//	bool operator()(const Point& lhs, const Point& rhs) const// ���̸� �״��, �����̸� �ٲ�
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // ���� ���
//			return lhs.GetY() < rhs.GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
//	}
//};
//struct CMP
//{
//	bool operator()(const Point& data) const
//	{
//		return data.GetX() == 2 && data.GetY() == 3;
//	}
//};
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
//	vector<Point>::iterator iter = find_if(v.begin(), v.end(), /*�ӽ� ��ü�� ���� �ѱ�*/CMP()); // ��� ��ġ�� ���ͷ����͸� ��ȯ �Ѵٰ� �����ϸ� ��
//
//	if (iter != v.end())
//		cout << *iter << endl;
//	system("pause");
//}





///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const
//	{
//		cout << x << "," << y;
//	}
//	bool operator<(const Point& arg) const
//	{
//		return x < arg.GetX();
//	}
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//	//pt.Print();
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//class Functor
//{
//public:
//	bool operator()(const Point& lhs, const Point& rhs) const// ���̸� �״��, �����̸� �ٲ�
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // ���� ���
//			return lhs.GetY() < rhs.GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
//	}
//};
//bool pred(const Point& data)
//{
//	return data.GetX() == 2 && data.GetY() == 3;
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
//	vector<Point>::iterator iter = find_if(v.begin(), v.end(), /*Predicate*/pred); // ��� ��ġ�� ���ͷ����͸� ��ȯ �Ѵٰ� �����ϸ� ��
//
//	if (iter != v.end())
//		cout << *iter << endl;
//	system("pause");
//}



///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const
//	{
//		cout << x << "," << y;
//	}
//	bool operator<(const Point& arg) const
//	{
//		return x < arg.GetX();
//	}
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//	//pt.Print();
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//class Functor
//{
//public:
//	bool operator()(const Point& lhs, const Point& rhs) const// ���̸� �״��, �����̸� �ٲ�
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // ���� ���
//			return lhs.GetY() < rhs.GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
//	}
//};
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
//	Functor cmp;
//	sort(v.begin(), v.end(), cmp); //
//	sort(v.begin(), v.end(), Functor()); //
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}



///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const
//	{
//		cout << x << "," << y;
//	}
//	bool operator<(const Point& arg) const
//	{
//		return x < arg.GetX();
//	}
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//	//pt.Print();
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//bool cmp(const Point* lhs, const Point* rhs) // ���̸� �״��, �����̸� �ٲ�
//{
//	if (lhs->GetX() < rhs->GetX())
//		return true;
//	else if (lhs->GetX() > rhs->GetX())
//		return false;
//	else // ���� ���
//		return lhs->GetY() < rhs->GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
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
//	sort(v.begin(), v.end()); //
//								
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}



//
///*
//predicate(������)
//�Ǵ��ϴµ� ���Ǵ� �Լ���
//- �� bool������ ��ȯ�ϴ� �Լ��� (�ٸ� ���� ���� ������������... )
//
//�Լ� ��ü(�Լ� ������Ʈ, �Լ���, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
////////////////////////////
//struct Functor
//{
//	int base;
//	Functor(int b = 100) : base(b) { }
//	bool operator()(int a, int b)
//	{
//		return b - a > base;
//	}
//};
//
//int main()
//{
//	Functor f(10);
//	cout << f(10, 20) << endl; // predicate 
//	cout << f(15, 50) << endl;
//	/*
//	��ü ��� ������ ���� , ��ü�� �Լ� ���� ���� ���� �ٸ� �޼ҵ�鵵 ���� �� �ְ�, ���µ鵵 ���� �� ����
//	*/
//
//	system("pause");
//}





///*
//predicate(������)
//�Ǵ��ϴµ� ���Ǵ� �Լ���
//- �� bool������ ��ȯ�ϴ� �Լ��� (�ٸ� ���� ���� ������������... )
//
//�Լ� ��ü(�Լ� ������Ʈ, �Լ���, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
////////////////////////////
//struct Functor
//{
//	int base;
//	Functor(int b = 100) : base(b) { }
//	bool operator()(int a, int b)
//	{
//		return b - a > base;
//	}
//};
//
//int main()
//{
//	Functor f(10);
//	cout << f(10, 20) << endl; // predicate 
//	cout << f(15, 50) << endl;
//	/*
//	��ü ��� ������ ���� , ��ü�� �Լ� ���� ���� ���� �ٸ� �޼ҵ�鵵 ���� �� �ְ�, ���µ鵵 ���� �� ����
//	*/
//
//	system("pause");
//}
//


///*
//predicate(������)
//�Ǵ��ϴµ� ���Ǵ� �Լ���
//- �� bool������ ��ȯ�ϴ� �Լ��� (�ٸ� ���� ���� ������������... )
//
//�Լ� ��ü(�Լ� ������Ʈ, �Լ���, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
////////////////////////////
//struct Functor
//{
//	int base;
//	Functor(int b = 100) : base(b) { }
//	bool operator()(int n)
//	{
//		return n > base;
//	}
//};
//
//int main()
//{
//	Functor f(10);
//	cout << f(100) << endl; // predicate 
//	cout << f(200) << endl;
//	/*
//	��ü ��� ������ ���� , ��ü�� �Լ� ���� ���� ���� �ٸ� �޼ҵ�鵵 ���� �� �ְ�, ���µ鵵 ���� �� ����
//	*/
//
//	system("pause");
//}




///*
//predicate(������)
//�Ǵ��ϴµ� ���Ǵ� �Լ���
//- �� bool������ ��ȯ�ϴ� �Լ��� (�ٸ� ���� ���� ������������... )
//
//�Լ� ��ü(�Լ� ������Ʈ, �Լ���, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
////////////////////////////
//struct Functor
//{
//	int base;
//	Functor(int b=100) : base(b) { }
//	bool operator()(int n)
//	{
//		return n > base;
//	}
//};
//
//int main()
//{
//	Functor f(10);
//	cout << f(100) << endl; // predicate 
//	cout << f(200) << endl;
//	/*
//	��ü ��� ������ ���� , ��ü�� �Լ� ���� ���� ���� �ٸ� �޼ҵ�鵵 ���� �� �ְ�, ���µ鵵 ���� �� ����
//	*/
//
//	system("pause");
//}
//


///*
//predicate(������)
//�Ǵ��ϴµ� ���Ǵ� �Լ���
//- �� bool������ ��ȯ�ϴ� �Լ��� (�ٸ� ���� ���� ������������... )
//
//�Լ� ��ü(�Լ� ������Ʈ, �Լ���, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
////////////////////////////
//struct Functor
//{
//	bool operator()(int n)
//	{
//		return n > 100;
//	}
//};
//
//int main()
//{
//	Functor f;
//	/*
//	printf(100) // <- �������� �Լ�(�� �ּ� ) ����.
//	*/
//	cout << f(100) << endl; // predicate 
//	cout << f(200) << endl;
//		  
//	system("pause");
//}





///*
//predicate(������)
//�Ǵ��ϴµ� ���Ǵ� �Լ���
//- �� bool������ ��ȯ�ϴ� �Լ��� (�ٸ� ���� ���� ������������... )
//
//�Լ� ��ü(�Լ� ������Ʈ, �Լ���, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
////////////////////////////
//struct Functor
//{
//	void operator()(int n)
//	{
//		cout << n << endl;
//	}
//};
//
//int main()
//{
//	Functor f;
//	/*
//	printf(100) // <- �������� �Լ�(�� �ּ� ) ����.
//	*/
//	f(100);//�Լ� ȣ�� / ������ �Լ� ��ü~ // f.operator()(100) ȣ�� 
//	// �̷� ��ü f�� �Լ� ��ü(�Լ� ó�� �����ϴ� ��ü)
//	system("pause");
//}



///*
//predicate(������)
//�Ǵ��ϴµ� ���Ǵ� �Լ���
//- �� bool������ ��ȯ�ϴ� �Լ��� (�ٸ� ���� ���� ������������... )
//
//�Լ� ��ü(�Լ� ������Ʈ, �Լ���, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
////////////////////////////
//bool MyCmp(int data)
//{
//	return 50 < data && data % 3 == 0;
//}
//int main()
//{
//	int list[10] = { 50,36,79,46,51,85,69,79,48,61 };
//	int idx = Find(list, 10, MyCmp); // ���� ã������ ���� ��å�� ��
//	if (idx >= 0)
//		cout << idx << " : " << list[idx];
//	system("pause");
//}


///*
//�����̳�
//�˰���
//�ݺ��� ( �����̳ʿ� �˰����� ���� �� �ʿ� ����  �ݺ����� �������̽��� ���ؼ� ��ȸ) 3-layer ���� �������̽�(�߰���)�� ������ ����
//-> ���� �ٲ���� ������ ���� ����- ��ȭ�� ���� �������� ������ Ŀ��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool (*func)(int))// �Լ� �����ʹ�
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]) )// �ݹ� �Լ� // �̰� �ʰ� ã�� ������ �¾�?��� Ŭ���̾�Ʈ���� ����°�( ������ true, �ƴϸ� false ��ȯ )
//			return i;
//	return -1;
//}
//bool MyCmp(int data)
//{
//	return 50 < data && data % 3 == 0;
//}
//int main()
//{
//	int list[10] = { 50,36,79,46,51,85,69,79,48,61 };
//	int idx = Find(list, 10, MyCmp); // ���� ã������ ���� ��å�� ��
//	if (idx >= 0)
//		cout << idx << " : " << list[idx];
//	system("pause");
//}



///*
//�����̳�
//�˰���
//�ݺ��� ( �����̳ʿ� �˰����� ���� �� �ʿ� ����  �ݺ����� �������̽��� ���ؼ� ��ȸ) 3-layer ���� �������̽�(�߰���)�� ������ ����
//-> ���� �ٲ���� ������ ���� ����- ��ȭ�� ���� �������� ������ Ŀ��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, int data)// ���� �˻�
//{
//	for (int i = 0; i < size; ++i)
//		if (list[i] == data)
//			return i;
//	return -1;
//}
//int main()
//{
//	int list[10] = { 50,36,79,46,51,85,69,79,48,61 };
//	int idx = Find(list, 10, 46); 
//	if (idx >= 0)
//		cout << idx << " : " << list[idx];
//	system("pause");
//}


//*
//�����̳�
//�˰���
//�ݺ��� ( �����̳ʿ� �˰����� ���� �� �ʿ� ����  �ݺ����� �������̽��� ���ؼ� ��ȸ) 3-layer ���� �������̽�(�߰���)�� ������ ����
//-> ���� �ٲ���� ������ ���� ����- ��ȭ�� ���� �������� ������ Ŀ��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//
//	system("pause");
//}



///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
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
//bool cmp(const Point& lhs, const Point& rhs) // ���̸� �״��, �����̸� �ٲ�
//{
//	if (lhs.GetX() < rhs.GetX())
//		return true;
//	else if (lhs.GetX() > rhs.GetX())
//		return false;
//	else // ���� ���
//		return lhs.GetY() < rhs.GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
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
//	sort(v.begin(), v.end(), cmp); //
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}

///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
//	{
//
//	}
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const
//	{
//		cout << x << "," << y;
//	}
//	bool operator<(const Point& arg) const
//	{
//		return x < arg.GetX();
//	}
//};
//ostream& operator<<(ostream& o, const Point& pt)
//{
//	//pt.Print();
//	o << pt.GetX() << ',' << pt.GetY();
//	return o;
//}
//bool cmp(const Point* lhs, const Point* rhs) // ���̸� �״��, �����̸� �ٲ�
//{
//	if (lhs->GetX() < rhs->GetX())
//		return true;
//	else if (lhs->GetX() > rhs->GetX())
//		return false;
//	else // ���� ���
//		return lhs->GetY() < rhs->GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
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
//	sort(v.begin(), v.end()); //
//								
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}



///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
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
//bool cmp(const Point* lhs, const Point* rhs) // ���̸� �״��, �����̸� �ٲ�
//{
//	if (lhs->GetX() < rhs->GetX())
//		return true;
//	else if (lhs->GetX() > rhs->GetX())
//		return false;
//	else // ���� ���
//		return lhs->GetY() < rhs->GetY(); // rhs�� ���� ũ�� ��, �ƴ� ����
//}
//int main()
//{
//	vector<Point*> v;
//
//	v.push_back(new Point(3, 4));
//	v.push_back(new Point(2, 3));
//	v.push_back(new Point(8, 9));
//	v.push_back(new Point(3, 2));
//	v.push_back(new Point(5, 6));
//
//	sort(v.begin(), v.end(), cmp); // �̰� �����ϰ� //3��° �μ��� �Լ���ü ���Ͷ�� �� �� ����
//	// 3��° �μ�, ���ϰ��� �ϴ� �� ��å�� sort�� ȣ���ϴ� ����� ����
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << *v[i] << " ";// v[i]->Print();
//	cout << endl;
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		delete v[i];
//
//	system("pause");
//}
//


///*
//�˰��� ---  iterator --- �����̳�
//������ ū�� �������� ���ؾ� ������ �� ����.
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
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y)
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
//bool cmp(const Point* lhs, const Point* rhs)
//{
//	return lhs->GetX() < rhs->GetX(); // rhs�� ���� ũ�� ��, �ƴ� ����
//}
//int main()
//{
//	vector<Point*> v;
//
//	v.push_back(new Point(3, 4));
//	v.push_back(new Point(2, 3));
//	v.push_back(new Point(8, 9));
//	v.push_back(new Point(3, 2));
//	v.push_back(new Point(5, 6));
//
//	sort(v.begin(), v.end(), cmp); // �̰� �����ϰ� //3��° �μ��� �Լ���ü ���Ͷ�� �� �� ����
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << *v[i] << " ";// v[i]->Print();
//	cout << endl;
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		delete v[i];
//
//	system("pause");
//}

