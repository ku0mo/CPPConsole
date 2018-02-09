
#include <iostream>
#include <cstdlib>
#include <string>
#include <map> 
#include <set>
/*
연관 컨테이너는 데이터를 관리하는게 목적x
검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
***
1.find() - 원소 하나를 찾을 때
2.lower_bound() - 원소의 시작 구간
3.upper_bound() - 원소의 끝 구간
4.equal_range - 원소의 구간을 한꺼번에
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
//***
//1.find() - 원소 하나를 찾을 때
//2.lower_bound() - 원소의 시작 구간
//3.upper_bound() - 원소의 끝 구간
//4.equal_range - 원소의 구간을 한꺼번에
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
//		//iter->second = "Five"; // 객체를 가리키는 놈, 그래서 내가 가르키는 객체가 멤버를 가지고 있으면 화살표 연산자 쓸 수 있다.(연산자 중복 되 있음)
//		//(*iter).second = "Five"; // value 값 업데이트
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
//***
//1.find() - 원소 하나를 찾을 때
//2.lower_bound() - 원소의 시작 구간
//3.upper_bound() - 원소의 끝 구간
//4.equal_range - 원소의 구간을 한꺼번에
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
//		iter->second = "Five"; // 객체를 가리키는 놈, 그래서 내가 가르키는 객체가 멤버를 가지고 있으면 화살표 연산자 쓸 수 있다.(연산자 중복 되 있음)
//		//(*iter).second = "Five"; // value 값 업데이트
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
//***
//1.find() - 원소 하나를 찾을 때
//2.lower_bound() - 원소의 시작 구간
//3.upper_bound() - 원소의 끝 구간
//4.equal_range - 원소의 구간을 한꺼번에
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m[1] = "one";
//	m[3] = "three";
//	m[5] = "five";
//	m[5] = "Five"; // update 갱신
//				   /*
//				   키가 존재하면, 업데이트 키가 존재하지 않으면 만듬
//				   아작 날 수도 있기때문에, 만약 업데이트면 찾아서하고, 추가할거면 insert로!
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
//***
//1.find() - 원소 하나를 찾을 때
//2.lower_bound() - 원소의 시작 구간
//3.upper_bound() - 원소의 끝 구간
//4.equal_range - 원소의 구간을 한꺼번에
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m[1] = "one";
//	m[3] = "three";
//	m[5] = "five";
//	m[5] = "Five"; // update 갱신
//	/*
//	키가 존재하면, 업데이트 키가 존재하지 않으면 만듬
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
//***
//1.find() - 원소 하나를 찾을 때
//2.lower_bound() - 원소의 시작 구간
//3.upper_bound() - 원소의 끝 구간
//4.equal_range - 원소의 구간을 한꺼번에
//*/
//using namespace std;
//int main()
//{
//	map<int, string> m;
//
//	m.insert(pair<int, string>(1, "one")); //클래스의 이름에 괄호하면 객체가 됨
//	m.insert(pair<int, string>(3, "three"));
//	m.insert(pair<int, string>(5, "five"));
//	/*
//	 키에 따른 밸류를 찾는게 목표
//	 m[key] 를 주면 value의 참조를 반환 함
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
//***
//1.find() - 원소 하나를 찾을 때
//2.lower_bound() - 원소의 시작 구간
//3.upper_bound() - 원소의 끝 구간
//4.equal_range - 원소의 구간을 한꺼번에
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
//	pr = s.equal_range(30); // 패어 객체를 반환 함 (쌍으로 반환 됨)
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
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
//	pr = s.equal_range(30); // 패어 객체를 반환 함 (쌍으로 반환 됨)
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
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
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
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
//	if (iter1 != iter2) // 같으면 찾지 못함
//		cout << *iter1 << endl;
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> 
//#include <set>
///*
//연관 컨테이너는 데이터를 관리하는게 목적x
//검색을 빨리하는 것을 목표로 보관하는 넘o 그렇기 때문에 검색 인터페이스가 있음
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> // vector , list 다음을 많이 쓰이는게 맵
//using namespace std;
//
//int main()
//{
//	map<int, int> m; // 키의 중복을 허락 함
//
//	m.insert(pair<int, int>(5, 500)); // 항상 쌍으로 보관
//	m.insert(pair<int, int>(3, 300));
//	m.insert(pair<int, int>(7, 700));
//	m.insert(pair<int, int>(8, 800));
//	m.insert(pair<int, int>(2, 200));
//
//	// map // mapping 짝짓는다. 맵핑, key, value 의 쌍으로 이룬다. 키를 알면 키에 매핑 되어 있는 밸류가 바로 나옴
//	// key는 유니크 해야하지만, value는 유니크 하지 않아도 되, 없어도 됨
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <map> // vector , list 다음을 많이 쓰이는게 맵
//using namespace std;
//
//int main()
//{
//	map<int, int> m; // 키의 중복을 허락 함
//
//	m.insert(pair<int, int>(5, 500)); // 항상 쌍으로 보관
//	m.insert(pair<int, int>(3, 300));
//	m.insert(pair<int, int>(7, 700));
//	m.insert(pair<int, int>(8, 800));
//	m.insert(pair<int, int>(2, 200));
//
//	// map // mapping 짝짓는다. 맵핑, key, value 의 쌍으로 이룬다. 키를 알면 키에 매핑 되어 있는 밸류가 바로 나옴
//	// key는 유니크 해야하지만, value는 유니크 하지 않아도 되, 없어도 됨
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <set> // 정렬 규칙을 가짐
//using namespace std;
//
//int main()
//{
//	multiset<int> s; // 키의 중복을 허락 함
//
//	s.insert(100);
//	s.insert(80); 
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	s.insert(80); // 80은 중복 됨
//
//	for (multiset<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}




///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <set> // 정렬 규칙을 가짐
//using namespace std;
//
//int main()
//{
//	set<int> s; // set에 들어가는 요소들을 보통 키라고 부름
//
//	s.insert(100); // 정렬되서 들어감
//	s.insert(80); // 원소, 엘리먼트, 데이터, key(유니크, 변경x, null(x)) 값만 보면 어디에 들어갈지 알 수 있기때문에
//	s.insert(50);
//	s.insert(30);
//	s.insert(40);
//	//s.insert(80); // 80은 무시 됨
//
//	for (set<int>::iterator iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl; 
//
//	system("pause");
//}



///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	lt1.insert(lt1.end(), lt2.begin(), lt2.end()); // 복사 붙이기 때문에 원본이 달라지지 않음
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//	
//	system("pause");
//}


///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	lt1.splice(lt1.end(), lt2, lt2.begin()); // 다른 컨테이너랑 다른 특진 적인 메소드
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//
//	system("pause");
//}


///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	lt1.splice(lt1.begin(), lt2, lt2.begin()); // 다른 컨테이너랑 다른 특진 적인 메소드
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//	system("pause");
//}




///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); // 다른 컨테이너랑 다른 특진 적인 메소드
//	cout << lt1.size() << " : " << lt2.size() << endl;
//
//	for (list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << " ";
//	system("pause");
//}


///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); // 다른 컨테이너랑 다른 특진 적인 메소드
//	cout << lt1.size() << " : " << lt2.size() << endl;
//	system("pause");
//}


///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	bool operator()(const Point& lhs, const Point& rhs) const// 참이면 그대로, 거짓이면 바꿈
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // 같은 경우
//			return lhs.GetY() < rhs.GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//	vector<Point>::iterator iter = find_if(v.begin(), v.end(), /*임시 객체를 만들어서 넘김*/CMP()); // 모든 위치는 이터레이터를 반환 한다고 생각하면 됨
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	bool operator()(const Point& lhs, const Point& rhs) const// 참이면 그대로, 거짓이면 바꿈
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // 같은 경우
//			return lhs.GetY() < rhs.GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//	vector<Point>::iterator iter = find_if(v.begin(), v.end(), /*임시 객체를 만들어서 넘김*/CMP()); // 모든 위치는 이터레이터를 반환 한다고 생각하면 됨
//
//	if (iter != v.end())
//		cout << *iter << endl;
//	system("pause");
//}





///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	bool operator()(const Point& lhs, const Point& rhs) const// 참이면 그대로, 거짓이면 바꿈
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // 같은 경우
//			return lhs.GetY() < rhs.GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//	vector<Point>::iterator iter = find_if(v.begin(), v.end(), /*Predicate*/pred); // 모든 위치는 이터레이터를 반환 한다고 생각하면 됨
//
//	if (iter != v.end())
//		cout << *iter << endl;
//	system("pause");
//}



///*
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	bool operator()(const Point& lhs, const Point& rhs) const// 참이면 그대로, 거짓이면 바꿈
//	{
//		if (lhs.GetX() < rhs.GetX())
//			return true;
//		else if (lhs.GetX() > rhs.GetX())
//			return false;
//		else // 같은 경우
//			return lhs.GetY() < rhs.GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//bool cmp(const Point* lhs, const Point* rhs) // 참이면 그대로, 거짓이면 바꿈
//{
//	if (lhs->GetX() < rhs->GetX())
//		return true;
//	else if (lhs->GetX() > rhs->GetX())
//		return false;
//	else // 같은 경우
//		return lhs->GetY() < rhs->GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//predicate(조건자)
//판단하는데 사용되는 함수류
//- 즉 bool형식을 반환하는 함수류 (다른 언어에선 보통 람다형식으로... )
//
//함수 객체(함수 오브젝트, 함수자, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	객체 라는 장점이 있음 , 객체는 함수 보다 좋은 것이 다른 메소드들도 가질 수 있고, 상태들도 가질 수 있음
//	*/
//
//	system("pause");
//}





///*
//predicate(조건자)
//판단하는데 사용되는 함수류
//- 즉 bool형식을 반환하는 함수류 (다른 언어에선 보통 람다형식으로... )
//
//함수 객체(함수 오브젝트, 함수자, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	객체 라는 장점이 있음 , 객체는 함수 보다 좋은 것이 다른 메소드들도 가질 수 있고, 상태들도 가질 수 있음
//	*/
//
//	system("pause");
//}
//


///*
//predicate(조건자)
//판단하는데 사용되는 함수류
//- 즉 bool형식을 반환하는 함수류 (다른 언어에선 보통 람다형식으로... )
//
//함수 객체(함수 오브젝트, 함수자, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	객체 라는 장점이 있음 , 객체는 함수 보다 좋은 것이 다른 메소드들도 가질 수 있고, 상태들도 가질 수 있음
//	*/
//
//	system("pause");
//}




///*
//predicate(조건자)
//판단하는데 사용되는 함수류
//- 즉 bool형식을 반환하는 함수류 (다른 언어에선 보통 람다형식으로... )
//
//함수 객체(함수 오브젝트, 함수자, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	객체 라는 장점이 있음 , 객체는 함수 보다 좋은 것이 다른 메소드들도 가질 수 있고, 상태들도 가질 수 있음
//	*/
//
//	system("pause");
//}
//


///*
//predicate(조건자)
//판단하는데 사용되는 함수류
//- 즉 bool형식을 반환하는 함수류 (다른 언어에선 보통 람다형식으로... )
//
//함수 객체(함수 오브젝트, 함수자, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	printf(100) // <- 기존에는 함수(의 주소 ) 였음.
//	*/
//	cout << f(100) << endl; // predicate 
//	cout << f(200) << endl;
//		  
//	system("pause");
//}





///*
//predicate(조건자)
//판단하는데 사용되는 함수류
//- 즉 bool형식을 반환하는 함수류 (다른 언어에선 보통 람다형식으로... )
//
//함수 객체(함수 오브젝트, 함수자, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	printf(100) // <- 기존에는 함수(의 주소 ) 였음.
//	*/
//	f(100);//함수 호출 / 지금은 함수 객체~ // f.operator()(100) 호출 
//	// 이런 객체 f를 함수 객체(함수 처럼 동작하는 객체)
//	system("pause");
//}



///*
//predicate(조건자)
//판단하는데 사용되는 함수류
//- 즉 bool형식을 반환하는 함수류 (다른 언어에선 보통 람다형식으로... )
//
//함수 객체(함수 오브젝트, 함수자, functor)
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool(*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]))// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	int idx = Find(list, 10, MyCmp); // 내가 찾을려는 놈의 정책을 줌
//	if (idx >= 0)
//		cout << idx << " : " << list[idx];
//	system("pause");
//}


///*
//컨테이너
//알고리즘
//반복자 ( 컨테이너와 알고리즘은 서로 알 필요 없음  반복자의 인터페이스를 통해서 순회) 3-layer 서로 인터페이스(중계자)만 가지고 소통
//-> 서로 바뀌더라도 영향을 주지 않음- 변화에 대한 유연성이 굉장히 커짐
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, bool (*func)(int))// 함수 포인터다
//{
//	for (int i = 0; i < size; ++i)
//		if (func(list[i]) )// 콜백 함수 // 이거 너가 찾고 싶은거 맞아?라고 클라이언트한테 물어보는거( 맞으면 true, 아니면 false 반환 )
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
//	int idx = Find(list, 10, MyCmp); // 내가 찾을려는 놈의 정책을 줌
//	if (idx >= 0)
//		cout << idx << " : " << list[idx];
//	system("pause");
//}



///*
//컨테이너
//알고리즘
//반복자 ( 컨테이너와 알고리즘은 서로 알 필요 없음  반복자의 인터페이스를 통해서 순회) 3-layer 서로 인터페이스(중계자)만 가지고 소통
//-> 서로 바뀌더라도 영향을 주지 않음- 변화에 대한 유연성이 굉장히 커짐
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, int data)// 선형 검색
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
//컨테이너
//알고리즘
//반복자 ( 컨테이너와 알고리즘은 서로 알 필요 없음  반복자의 인터페이스를 통해서 순회) 3-layer 서로 인터페이스(중계자)만 가지고 소통
//-> 서로 바뀌더라도 영향을 주지 않음- 변화에 대한 유연성이 굉장히 커짐
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//bool cmp(const Point& lhs, const Point& rhs) // 참이면 그대로, 거짓이면 바꿈
//{
//	if (lhs.GetX() < rhs.GetX())
//		return true;
//	else if (lhs.GetX() > rhs.GetX())
//		return false;
//	else // 같은 경우
//		return lhs.GetY() < rhs.GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//bool cmp(const Point* lhs, const Point* rhs) // 참이면 그대로, 거짓이면 바꿈
//{
//	if (lhs->GetX() < rhs->GetX())
//		return true;
//	else if (lhs->GetX() > rhs->GetX())
//		return false;
//	else // 같은 경우
//		return lhs->GetY() < rhs->GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//bool cmp(const Point* lhs, const Point* rhs) // 참이면 그대로, 거짓이면 바꿈
//{
//	if (lhs->GetX() < rhs->GetX())
//		return true;
//	else if (lhs->GetX() > rhs->GetX())
//		return false;
//	else // 같은 경우
//		return lhs->GetY() < rhs->GetY(); // rhs의 값이 크면 참, 아님 거짓
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
//	sort(v.begin(), v.end(), cmp); // 이거 가능하게 //3번째 인수에 함수객체 펑터라고 줄 수 있음
//	// 3번째 인수, 비교하고자 하는 비교 정책을 sort를 호출하는 사람이 결정
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
//알고리즘 ---  iterator --- 컨테이너
//정렬은 큰지 작은지를 비교해야 결정할 수 있음.
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
//	return lhs->GetX() < rhs->GetX(); // rhs의 값이 크면 참, 아님 거짓
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
//	sort(v.begin(), v.end(), cmp); // 이거 가능하게 //3번째 인수에 함수객체 펑터라고 줄 수 있음
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << *v[i] << " ";// v[i]->Print();
//	cout << endl;
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		delete v[i];
//
//	system("pause");
//}

