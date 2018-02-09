/*
알고리즘 ---  iterator --- 컨테이너
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

	sort(v.begin(), v.end()); // 이거 가능하게
	for (unsigned i = 0; i < v.size(); ++i)
		cout << *v[i] << " ";// v[i]->Print();
	cout << endl;

	for (unsigned i = 0; i < v.size(); ++i)
		delete v[i];

	system("pause");
}


///*
//알고리즘 ---  iterator --- 컨테이너
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
//알고리즘 ---  iterator --- 컨테이너
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
//알고리즘 ---  iterator --- 컨테이너
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
//알고리즘 ---  iterator --- 컨테이너
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
//	v.erase(v.begin() + 1, v.end() - 1); // 짤라버리고 싶은 범위(구간) (지정 가능) 시퀀스 순차열
//	//[b, e) // b는 포함 o, e는 포함 x => 10,20,30,40
//	// 모든 구간은 순차열로! [개구간, 폐구간)
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	system("pause");
//}


///*
//자료구조
//모든 프로그램마다 필요한 자료구조가 다름 (장 단점이 존재)
//연속 ? 비연속 ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//int main()
//{
//	list<int> lt; // 메모리 블록 정책 (비주얼은 블럭 1개당 4개씩) , 일반적으로 비주얼 스튜디오는 블럭들을 트리 기반으로 연결함
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
//	lt.erase(iter); // 지워라! 누구를? (위치가 있어야 됨)( 위치는 반복자 iterator로 )
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}

///*
//자료구조
//모든 프로그램마다 필요한 자료구조가 다름 (장 단점이 존재)
//연속 ? 비연속 ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//int main()
//{
//	list<int> lt; // 메모리 블록 정책 (비주얼은 블럭 1개당 4개씩) , 일반적으로 비주얼 스튜디오는 블럭들을 트리 기반으로 연결함
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
//	//	cout << lt[i] << " "; // 참조 참조 불가 
//	//cout << endl;
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}




///*
//자료구조
//모든 프로그램마다 필요한 자료구조가 다름 (장 단점이 존재)
//연속 ? 비연속 ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <list>
//using namespace std;
//int main()
//{
//	list<int> lt; // 메모리 블록 정책 (비주얼은 블럭 1개당 4개씩) , 일반적으로 비주얼 스튜디오는 블럭들을 트리 기반으로 연결함
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	//for (unsigned i = 0; i < lt.size(); ++i)
//	//	cout << lt[i] << " "; // 참조 참조 불가 
//	//cout << endl;
//	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	system("pause");
//}



// 지금까지 시퀀스 컨테이너 - 순서를 가지고 있는
///*
//자료구조
//모든 프로그램마다 필요한 자료구조가 다름 (장 단점이 존재)
//연속 ? 비연속 ?
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <deque>
//using namespace std;
//int main()
//{
//	deque<int> q; // 메모리 블록 정책 (비주얼은 블럭 1개당 4개씩) , 일반적으로 비주얼 스튜디오는 블럭들을 트리 기반으로 연결함
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
//	vector<int> v; // 메모리 1.5배 정책( 어떤 것은 2배 )
//
//	v.reserve(4); // 예약하겠다. 메모리를 미리 예약하는 것
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
//	vector<int> v; // 메모리 1.5배 정책( 어떤 것은 2배 )
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
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // 컨테이너 내부의 원소를 가리키는데 사용 됨 ( 포인터와 같은 의미를 가짐 ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter; //(이터레이터는 포인터를 추상화 한 것 )
//	iter = v.begin(); // 첫 번째 원소를 가리키는 iterator;
//					  //cout << iter << endl; // iterator은 객체인데 iterator를 출력하라고 할 수 없음.
//	cout << *++iter << endl; // *iter 첫번째 가리키는 원소의 참조(값)가 되는 것
//	cout << *--v.end() << endl; // 마지막 원소 50이 됨.
//	system("pause");
//}




///*
//iterator 만든 이유! => 일반화 프로그래밍을 하기 위해서
//컨테이너에 들어있는 모든 원소를 입반화 해서 참조할 수 있게 해보자!
//원래 메모리 구조가 다 다른 자료 구조(컨테이너)들을 참조 하는 방식이 다 다름.
//그래서 iterator 일반화된 참조를 만들어서 어떤 컨테이너든 동일한 방법을 통해서 (동일한 참조 방식)을 통해서
//동일한 형태로 참조할 수 있는 객체가 iterator 이다.
//그래서 모든 컨테이너는 begin()과 end() 원소의 처음과 끝을 반환하는 인터페이스가 있음.
//iterator를 ++하면 포인터에 ++ 한 것처럼 다음 원소를 가리키게 된다.
//
//사실 end()는 원소들의 끝 표식. 정확히는 마지막 원소의 다음을 가리킴
//패스트 오브 엔드
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
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // 컨테이너 내부의 원소를 가리키는데 사용 됨 ( 포인터와 같은 의미를 가짐 ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter; //(이터레이터는 포인터를 추상화 한 것 )
//	iter = v.begin(); // 첫 번째 원소를 가리키는 iterator;
//					  //cout << iter << endl; // iterator은 객체인데 iterator를 출력하라고 할 수 없음.
//	cout << *iter << endl; // *iter 첫번째 가리키는 원소의 참조(값)가 되는 것
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
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // 컨테이너 내부의 원소를 가리키는데 사용 됨 ( 포인터와 같은 의미를 가짐 ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter; //(이터레이터는 포인터를 추상화 한 것 )
//	iter = v.begin(); // 첫 번째 원소를 가리키는 iterator;
//	//cout << iter << endl; // iterator은 객체인데 iterator를 출력하라고 할 수 없음.
//	cout << *iter << endl; // *iter 첫번째 가리키는 원소의 참조(값)가 되는 것
//	cout << *v.begin() << endl;
//	system("pause");
//}



///*
//STL의 컨테이너는 7가지가 있음
//원소들의 순서(상대적인 순서) 있냐? 없냐?
//1. 시퀀스 컨테이너  ( ㅇ ), 순차적
//- vector ( 메모리가 배열처럼, 배열과 가장 흡사 )
//- deque ( 일률적인 메모리 개수, 연속하는 특징, 비연속 특징 모두 )
//- list ( 연결 리스트, 원소들이 군대 군대 순서를 가짐 )
//2. 연관 컨테이너 ( X ) , 자동정렬 됨 ( 2진 트리로 구현 됨 )
//- set ( 키 들의 집합을 가짐 )
//- multiset
//- map ( 키, 밸류 쌍으로 이루어짐 )
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
//	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) // 컨테이너 내부의 원소를 가리키는데 사용 됨 ( 포인터와 같은 의미를 가짐 ) 
//		cout << *iter << " ";
//	cout << endl;
//
//	vector<int>::iterator iter(v.begin());  // begin()을 가지고 초기화한 객체를 만듬
//	//begin()은 처음의 원소를 가리키는 이터레이터를 반환함 ( 결국 복사 생성하는 것 )
//	/*
//	iterator의 이름 (클래스의 이름)
//	*/
//	system("pause");
//}



///*
//STL의 컨테이너는 7가지가 있음
//원소들의 순서(상대적인 순서) 있냐? 없냐?
//1. 시퀀스 컨테이너  ( ㅇ ), 순차적
//- vector ( 메모리가 배열처럼, 배열과 가장 흡사 )
//- deque ( 일률적인 메모리 개수, 연속하는 특징, 비연속 특징 모두 )
//- list ( 연결 리스트, 원소들이 군대 군대 순서를 가짐 )
//2. 연관 컨테이너 ( X ) , 자동정렬 됨 ( 2진 트리로 구현 됨 )
//- set ( 키 들의 집합을 가짐 )
//- multiset
//- map ( 키, 밸류 쌍으로 이루어짐 )
//- multimap
//*/
//#include <iostream>
//#include <cstdlib>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<string> v;// 방향과 길이(크기)를 갖는다. 확장됨 
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//
//	for (unsigned i = 0; i < v.size(); ++i)// vector라고 정의 되어있는 클래스 안에 사이즈 타입이라는 타입이 사이즈와 비교할 타입을 의미함 
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
//	vector<string> v;// 방향과 길이(크기)를 갖는다. 확장됨 
//	v.push_back("10");
//	v.push_back("20");
//	v.push_back("30");
//	v.push_back("40");
//	v.push_back("50");
//
//	for (vector<string>::size_type i = 0; i < v.size(); ++i)// vector라고 정의 되어있는 클래스 안에 사이즈 타입이라는 타입이 사이즈와 비교할 타입을 의미함 
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
//	vector<string> v;// 방향과 길이(크기)를 갖는다. 확장됨 
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
//	vector<int> v;// 방향과 길이(크기)를 갖는다. 확장됨 
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
//STL(라이브러리 - 보통 클래스,함수, 형식 집합으로 봄)
//componet (구성요소)
//1. 컨테이너 ( 자료구조 클래스 ) *** 4대 컴포넌트
//2. 알고리즘 ( 함수 ) ***
//3. 반복자 ( 위치를 가리킴 ) ***
//4. 함수 객체 (함수자) ***
//
//5. 어뎁터 ( 인터페이스 변환 )
//6. 메모리 할당기 ( 메모리 할당 정책을 가짐 )
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
//	언어 문법을 익히는 것은 쉽지만, 표준 라이브러리를 익히는 것이 어렵다.
//	*/
//	vector<int> v; // 컨테이너 클래스 // 컨테이너 객체
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (unsigned i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	sort(v.begin()/*이터레이터(반복자)*/, v.end(), greater<int>()/*함수 객체(함수 처럼 동작하는 객체*/); // sort 알고리즘 (함수 (프로세스)) 
//	copy(v.begin(), v.end(), /*이터레이터 컨테이너 어뎁터*/ostream_iterator<int>(cout, " ")); // copy 알고리즘 (복사 알고리즘)
//	system("pause");
//}




///*
//static 멤버 //
//static 멤버는 메모리 상에 딱 1개만 만들어짐 (글로벌 데이터 영역에)
//클래스의 멤버 변수라고 함 ( 객체 들이 공유하고 싶을 때 사용 - 접근 권한)
//메소드도 같은 개념
//클래스 정의 (객체에 대한 정의)
//
//정의(개념) -> 추상화(인스턴스화) -> 객체 생성
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
//string Math::name("class Math"); // name안에는 static name이 있어라고 해줘야 함 (C++에서만 ) - 외부 연결을 갖는다.
//int main()
//{
//	Math::SetName("class Math ... ");
//	Math::PrintName();
//	cout << Math::Add(2, 3) << endl;
//	system("pause");
//}


///*
//static 멤버 //
//static 멤버는 메모리 상에 딱 1개만 만들어짐 (글로벌 데이터 영역에)
//클래스의 멤버 변수라고 함 ( 객체 들이 공유하고 싶을 때 사용 - 접근 권한)
//메소드도 같은 개념
//클래스 정의 (객체에 대한 정의)
//
//정의(개념) -> 추상화(인스턴스화) -> 객체 생성
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
//	Math m; /// 객체 만들기 불 필요..(상태도 필요 없기 때문에
//	cout << m.Add(2, 3) << endl;
//	system("pause");
//}





///*
//C++은 4가지 핵심 요소들이 있다.
//1. C언어 문법
//2. 객체지향 문법
//3. Template 일반화 프로그래밍
//4. STL standart template 라이브러리
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
//C++은 4가지 핵심 요소들이 있다.
//1. C언어 문법
//2. 객체지향 문법
//3. Template 일반화 프로그래밍
//4. STL standart template 라이브러리
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