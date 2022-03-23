#include <iostream>
#include <string>
#include "Account.h"

//Relesed on github
unsigned int factorial(unsigned int n) {
	return n * factorial(n - 1);
}

int main()
{
	std::cout << factorial(3) << std::endl;
	//std::cout << "hello world" << std::endl;
	//Account a;
	//Account b("pelle", 500);
	//std::cin >> a;

	//std::cout << b.getbalance() << std::endl;
	//std::cout << a;

	return 0;
}

