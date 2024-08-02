#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> p(5);

	try
	{
		std::cout << p[-1];
	}
	catch (Array<int>::indexOutOfBound &e)
	{
		std::cout << e.what();
	}
	
}
