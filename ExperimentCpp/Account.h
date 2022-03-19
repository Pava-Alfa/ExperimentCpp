#pragma once
#include <string>

class Account
{
public:
	Account(); //konstruktor
	//~Account(); //destruktor
	Account(std::string, int);
	//Account(const Account&);
	
	//int withdarw(int amount);
	int getbalance() const;
	void enterNewAccountDetails(std::istream& in);

	friend std::ostream& operator<<(std::ostream& os, const Account& acc);

private:
	std::string owner_name; //data-medlemmar
	int balance;
};

std::istream& operator>>(std::istream& in, Account& acc);

