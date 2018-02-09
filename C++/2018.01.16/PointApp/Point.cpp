#include <iostream>// <꺽세는 표준 디렉토리만 찾음
#include "Point.h" // " 사용자 디렉토리를 찾음
Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}
void Point::Print() const // 내부에 상태 멤버를 변경하지 않겠다는 것. (read만 가능)
{
	std::cout << x << ',' << y << std::endl; // cout에 대한 선언 정보 있어야함 그리고 Point에 대한 선언 정보 있어야 함
}