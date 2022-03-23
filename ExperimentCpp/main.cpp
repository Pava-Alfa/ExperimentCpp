#include <iostream>
#include <string>
#include "Account.h"

//Relesed on github
unsigned int factorial(unsigned int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

void move(char src, char dst) {
	std::cout << "Move from " << src << " to " << dst << std::endl;
}

void hanoi(int n, char src, char via, char dst) {
	if (n == 0) { ; }
	else {
		hanoi(n - 1, src, dst, via);
		move(src, dst);
		hanoi(n - 1, via, src, dst);
	}
}
int main()
{
	hanoi(3, 'A', 'B', 'C');
	//std::cout << factorial(3) << std::endl;
	//std::cout << "hello world" << std::endl;
	//Account a;
	//Account b("pelle", 500);
	//std::cin >> a;

	//std::cout << b.getbalance() << std::endl;
	//std::cout << a;

	return 0;
}

