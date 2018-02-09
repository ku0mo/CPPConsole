#include <iostream>
#include <cstdlib>
#include "IntArray.h"
using namespace std;

int main()
{
	MyName::IntArray arr;
	arr.Add(100);
	arr.Add(200);
	arr.Add(300);

	for (int i = 0; i < arr.Size(); ++i)
		cout << arr.At(i) << endl;

	system("pause");
}