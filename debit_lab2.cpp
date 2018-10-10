#include <iostream>

using namespace std;
class Account{
public:
    Account(double initial_bal)
    {
    balance=initial_bal;
    }
    void credit(double amount)
    {
    balance=balance+amount;
    }
    double getBalance()
    {
    return balance;
    }
    void debitf(double debit)
    {
        balance=balance-debit;
    }

private:
    double balance;

};

int main()
{   double debit;
    Account acct1(45);
    cout<<"Account 1 balance is "<<acct1.getBalance()<<"\n";

    acct1.credit(50);
    cout<<"Account 1 balance is "<<acct1.getBalance()<<"\n";
    cout<<"Enter debit amount :";
    cin >>debit;
    if (debit>acct1.getBalance())
    {
        cout<<"Debit amount exceeded account balance";
	return 0;
    }
    else
    {
        acct1.debitf(debit);
    }
    cout<<"Account 1 remaining balance is "<<acct1.getBalance()<<"\n";

    return 0;
}
