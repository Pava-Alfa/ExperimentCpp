#include <iostream>
#include <string>
#include "Account.h"

//Relesed on github
int main()
{
	//std::cout << "hello world" << std::endl;
	Account a;
	Account b("pelle", 500);
	std::cin >> a;

	std::cout << b.getbalance() << std::endl;
	std::cout << a;

	return 0;
}