#include "Iter.hpp"

int	main( )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	double arr[] = { 0, 1, 2, 3, 4 };
	size_t s = 5;
//	char ard[] = "Les romains, vous etes des romaines";
	::iter( arr, s, &::func<double> ); 
	for ( int i = 0 ; (size_t)i != s ; i++ )
		std::cout << "Désormais, d = " << arr[i] << std::endl;
}
