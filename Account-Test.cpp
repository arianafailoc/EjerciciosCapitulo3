#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
//Probando el método Withdraw
    Account account{"Ariana Failoc", 5000};
    cout << "Balance is $ "<< account.getBalance()<<"\n";
    account.withdraw(687);
    cout << "Balance is $ "<< account.getBalance()<<"\n";
    account.withdraw(6000);
    cout << "Balance is $ "<< account.getBalance()<<"\n";
}


