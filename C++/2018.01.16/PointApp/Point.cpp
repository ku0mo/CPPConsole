#include <iostream>// <������ ǥ�� ���丮�� ã��
#include "Point.h" // " ����� ���丮�� ã��
Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}
void Point::Print() const // ���ο� ���� ����� �������� �ʰڴٴ� ��. (read�� ����)
{
	std::cout << x << ',' << y << std::endl; // cout�� ���� ���� ���� �־���� �׸��� Point�� ���� ���� ���� �־�� ��
}