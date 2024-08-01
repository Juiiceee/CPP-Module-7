#ifndef TEMP_HPP
# define TEMP_HPP
# include <iostream>
# include <string>

template< typename T>
const T &max(const T &x, const T &y)
{
	if (x > y)
		return (x);
	return (y);
}

template< typename T>
const T &min(const T &x, const T &y)
{
	if (x < y)
		return (x);
	return (y);
}

template< typename T>
void swap(T &x, T &y)
{
	T tmp = y;
	y = x;
	x = tmp;
}

#endif
