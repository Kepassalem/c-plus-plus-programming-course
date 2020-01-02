#include <iostream>
#include "Account.h"

int main()
{
	Account tajib;

	tajib.setName("Tajib");
	tajib.setBalance(1000.0);

	if (tajib.withdraw(1200.0))
		std::cout << " OK" << std::endl;
	else
		std::cout << " not OK" << std::endl;

	return 0;
}