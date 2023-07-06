/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:50:40 by agimi             #+#    #+#             */
/*   Updated: 2023/07/06 16:45:17 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return	Account::_nbAccounts;
}

int Account::getTotalAmount()
{
	return	Account::_totalAmount;
}

int	Account::getNbDeposits()
{
	return	Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return	Account::_totalNbWithdrawals;
}

int	Account::checkAmount() const
{
	return	this->_amount;
}

void	Account::makeDeposit(int deposit)
{
	int	pam;

	pam = _amount;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_nbDeposits++;
	_amount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << pam << ";deposit:"
		<< deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	pam;
	
	if (checkAmount() > withdrawal)
	{
		pam = _amount;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_nbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << pam << ";withdrawal:"
			<< withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
		<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}