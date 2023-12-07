#include "gusprobability.h"

#include <iostream>

long double probability()
{
	long double prbt = 1;
	for (long double i =5.0; i >0 ; --i)
	{
		prbt *= i/(42 + i);
		std::cout << i << std::endl;
	}
	prbt /= 27;
	return  prbt;
}