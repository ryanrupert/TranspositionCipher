#include <iostream>
#include "Transposition.h"

int main()
{
	Transposition cipher;
	int test[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	cipher.Encode(test, 10, 3);
	std::cout << "result: " << std::endl;
	for(int i = 0; i < 10; i++)
		std::cout << test[i] << std::endl;
	std::cin.get();
	return 0;
}
