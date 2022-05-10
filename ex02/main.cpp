#include "Array.tpp"
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
	
	size_t i = 6;
	try
	{
		if (i > e.size())
			throw Not_Happening();
		else
			std::cout << e.x[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}
