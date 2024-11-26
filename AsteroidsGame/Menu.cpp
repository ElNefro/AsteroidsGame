#include "Level.hpp"

void Start()
{
	std::cout << "\t\t\tGame start\n\n";
	int a;
	std::cin >> a;
	if (a == 1)
	{
		LvlOne();
	}
	else if (a == 2)
	{
		LvlTwo();
	}
}