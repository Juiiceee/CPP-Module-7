#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>


template<typename T>
class Array
{
	private:
		T *_array;
		int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &obj);
		Array &operator=(const Array &obj);
		~Array();
};

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
	std::cout << "Array default constructor called\n";
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	std::cout << "Array constructor called\n";
	if (n < 0)
		return;
	_array = new T[n];
	for (int i = 0; i < n; i++)
		_array[i] = NULL;
}


template <typename T>
Array<T>::Array(const Array<T> &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor of Array called\n";
}
#endif
