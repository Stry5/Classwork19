// Classwork19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void swap(int&,int&,int&);

int main()
{

	int x = 10;
	int y = 5;
	int temp = 0;

	std::cout << "x: " << x << " y: " << y << std::endl;

	swap(x, y,temp);

	std::cout << "x: " << x << " y: " << y << std::endl;
}

void swap(int& x, int& y, int& temp) {
	int* xptr = &x;
	int* yptr = &y;
	int* pointerTemp = &temp;

	*pointerTemp = *xptr;
	*xptr = *yptr;
	*yptr = *pointerTemp;

}