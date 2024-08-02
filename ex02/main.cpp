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

	try
	{
		std::cout << p[5];
	}
	catch (Array<int>::indexOutOfBound &e)
	{
		std::cout << e.what();
	}

	p[4] = 10;

	try
	{
		std::cout << p[4] << std::endl;
	}
	catch (Array<int>::indexOutOfBound &e)
	{
		std::cout << e.what();
	}


	
}
