#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>

template< typename T >
T const & max( T const & x, T const & y )
{
	return ( x > y ? x : y );
}

template< typename T >
T const & min( T const & x, T const & y )
{
	return ( x < y ? x : y );
}

template< typename T >
void swap( T & x, T & y )
{
	T plot;

	plot = x;
	x = y;
	y = plot;
}

template< typename A > 
void func( A & a )
{
	a += 1;
}

template< typename A, typename B, typename C > 
void iter(A *a, B const b, C ( *f )( A& ) )
{
	size_t i = 0;
	while ( i != b )
	{
		f( a[i] );
		i++;
	}
}


#endif
