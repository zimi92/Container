#include "Contener.h"

int main() 
{
	Contener<int> contener;
	for (int i = 0; i < 10; ++i) 
	{
		contener.push_back(1);
	}
	return 0;
}