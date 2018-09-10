#include "Contener.h"
#include <iostream>
int main() 
{
	Contener<int> contener;
	for (int i = 0; i < 20; ++i) 
	{
		contener.push_back(i);
	}
	for (int i = 0; i < 20; ++i)
	{
		std::cout<<contener[i]<<std::endl;
	}
	return 0;
}