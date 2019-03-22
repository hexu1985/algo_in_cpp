#include <iostream>
#include "Point.h"

int main() 
{
	point a, b;

	a.x = 1;
	a.y = 1;
	b.x = 2;
	b.y = 2;
	std::cout << distance(a, b) << std::endl;

	return 0;
}
