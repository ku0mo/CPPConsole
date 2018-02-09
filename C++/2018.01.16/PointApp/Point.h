#pragma once
class Point
{
	int x;
	int y;
public: //  클래스 밖에서
	Point(int _x = 0, int _y = 0);
	void Print() const;
};

