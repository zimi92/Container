#include "Contener.h"
#include <iostream>
int main() 
{
	Contener<int> contener;
	for (int i = 0; i < 5; ++i) 
	{
		contener.push_back(i);
	}
	for (int i = 0; i < 5; ++i)
	{
		std::cout<<contener.read(i)<<std::endl;
	}
	return 0;
}