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
		T &operator[](int size);
		~Array();
		int	size();

		class indexOutOfBound : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
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
	this->_size = obj._size;
	this->_array = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = obj._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	std::cout << "Copy assignment operator called\n";
	this->_size = obj._size;
	this->_array = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = obj._array[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[](int size)
{
	if (size < 0 || size >= this->_size)
		throw (indexOutOfBound());
	return (this->_array[size]);
}

template <typename T>
const char *Array<T>::indexOutOfBound::what() const throw()
{
	return ("Index Out Of Bound\n");
}

template <typename T>
int	Array<T>::size()
{
	return (this->_size);
}


template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor of Array called\n";
	delete [] _array;
}
#endif
