#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0; //numeros de cuentas
int	Account::_totalAmount = 0;	//cantidad de dinero
int	Account::_totalNbDeposits = 0; //cantidad del deposito
int	Account::_totalNbWithdrawals = 0; //cantidad que saca

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex;
	std::cout <<";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex;
	std::cout <<";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[19920104_091532]";
	std::cout << " accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount > withdrawal)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << "[19920104_091532]";
		std::cout << " index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		_amount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "[19920104_091532]";
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}
