#include "Array.tpp"
#include "Array.hpp"

struct Not_Happening : std::exception
{
	const char * what() const throw() {return "Not Happening !\n";}
};

int	main( )
{
	size_t t = 5;

	::Array<int> a;
	::Array<char> b(t);
	::Array<char> c(b);
	::Array<int> e(t);
	::Array<int> const f;
	
	size_t i = 4;
	try
	{
		if (i > b.size())
			throw Not_Happening();
		else
			std::cout << "L'element i = " << b.x[i] << " et la taille du tableau est " << b.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}
