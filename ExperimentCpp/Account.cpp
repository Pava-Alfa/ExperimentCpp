#include "Account.h"
#include <iostream>

Account::Account() {
	balance = 0;
	owner_name = "";
}

Account::Account(std::string name, int money) {
	owner_name = name;
	balance = money;
}

int Account::getbalance() const {
	return balance;
}

void Account::enterNewAccountDetails(std::istream& in) { //del av operatoröverlagring
	std::cout << "Name? : ";
	std::getline(in, owner_name);
	std::cout << "Which balance? : ";
	in >> balance;
}

std::istream& operator>>(std::istream& in, Account& acc) {
	acc.enterNewAccountDetails(in);
	return in;
}

std::ostream& operator<<(std::ostream& os, const Account& acc) {
	std::cout << "Your balance is: " << acc.balance << std::endl;
	return os;
}