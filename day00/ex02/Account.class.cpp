/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Account.class.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: guillaume <guillaume@student.le-101.fr>    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/11 07:31:25 by guillaume    #+#   ##    ##    #+#       */
/*   Updated: 2020/03/11 07:56:47 by guillaume   ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Account.class.hpp"
/*
class Account {
	public:
		typedef Account		t;

		static int	getNbAccounts( void );
		static int	getTotalAmount( void );
		static int	getNbDeposits( void );
		static int	getNbWithdrawals( void );
		static void	displayAccountsInfos( void );

		Account( int initial_deposit );
		~Account( void );

		$void	makeDeposit( int deposit );
		$bool	makeWithdrawal( int withdrawal );
		$int		checkAmount( void ) const;
		$void	displayStatus( void ) const;

	private:

		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp( void );

		int				_accountIndex;
		int				_amount;
		int				_nbDeposits;
		int				_nbWithdrawals;

		Account( void );
};
*/

Account::Account( int initial_deposit )
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

void    Account::makeDeposit(int deposit) {
    _amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (_amount > withdrawal)
        return (true);
    return (false);
}

int		Account::checkAmount() const {
    return (_amount);
}

void	Account::displayStatus() const {
    // TODO
}

int	Account::getNbAccounts() {
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount() {
    return (Account::_totalAmount);
}

int	Account::getNbDeposits() {
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos() {

}