

#include <iostream>
#include "Account.h"
using namespace std;


Account::Account( int initialBalance )
{
   balance = 0;


   if ( initialBalance > 0 )
      balance = initialBalance;


   if ( initialBalance < 0 )
      cout << "Error: Initial balance cannot be negative.\n" << endl;
} // end Account constructor


void Account::credit( int amount )
{
   balance = balance + amount;
} // end function credit


void Account::debit( int amount )
{
   if ( amount > balance )
      cout << "Debit amount exceeded account balance.\n" << endl;

   if ( amount <= balance )
      balance = balance - amount;
} // end function debit


int Account::getBalance()
{
   return balance;
} // end function getBalance
