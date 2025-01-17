#include"account.h"
Account::Account():m_accNumber(""),m_accName(""),m_balance(0)
{
}
Account::Account(std::string num, std::string name, double bal): m_accNumber(num), m_accName(name), m_balance(bal)
{
 
}
Account::Account(std::string num,std::string name):m_accNumber(num), m_accName(name)
{

}
Account::Account(const Account &ref):m_accNumber(ref.m_accNumber),m_accName(ref.m_accName),m_balance(ref.m_balance)
{
	
}

void Account::debit(double amount)
{
	m_balance -= amount;
}

void Account::credit(double amount)
{
	m_balance += amount;
}

double Account::getBalance() const
{
	return m_balance;
}

void Account::dispay() const
{
    std::cout << "Account Number : " << m_accNumber
            <<  "Name :"  << m_accName
            <<  "Balance: "  << m_balance;
}
