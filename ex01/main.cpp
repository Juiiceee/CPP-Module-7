#include <iostream>

#include "iter.hpp"

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::string arrs[10] = {"string1", "string2", "string3", "string4", "string5", "string6", "string7", "string8", "string9", "string10"};

	iter(arr, 10, &print);
	iter(arrs, 10, &print);
}