#include <iostream>
#include "Account.h"

int main()
{
	Account tajib;

	tajib.setName("Tajib");
	tajib.setBalance(1000.0);

	if (tajib.deposit(200.0))
		std::cout << "Deposit OK" << std::endl;
	else
		std::cout << "Deposit not OK" << std::endl;

	return 0;
}