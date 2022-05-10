#include <string>
#include <iostream>

template< typename T >
class Array
{
	public :

		Array( void )
		{
			this->x = new T;
		};

		Array( unsigned int n )
		{
			this->x = new T (n);
		};

		Array( Array const & cp)
		{
			this->x = cp.x;
			return;
		};

		size_t	size( void )
		{
			return (*this->x);
		};

		Array const & operator=( T * e )
		{
			this->x = e;
			return (*this);
		};

		T *x;

};
