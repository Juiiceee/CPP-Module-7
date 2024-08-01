#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template< typename T>
void	iter(T *array, const int length, void (*f)(T&))
{
	if (length == 0)
		return ;
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template< typename T>
void	iter(T *array, const int length, void (*f)(const T&))
{
	if (length == 0)
		return ;
	for (int i = 0; i < length; i++)
		f(array[i]);
}
template< typename T>
void	print(const T &str)
{
	std::cout << str << std::endl;
}

#endif
