#include <string>
#include <iostream>
class Account {
    public:
    Account(std::string accountName , int initialBalance)
        : name {accountName} {
            if (initialBalance > 0) {
                balance = initialBalance; 
                }
            }

        void withdraw(int withdrawAmount) {
            if (withdrawAmount > 0 && withdrawAmount < balance){
                balance = balance - withdrawAmount;
            }
            else { 
               std::cout << "Withdrawal amount exceeded account balance.\n"; 

            }

        }

    
        void deposit(int depositAmount) {
            if (depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(std::string accountName) {
            name = accountName;
        }

        std::string getName() const {
            return name;
        }
    private : 
        std::string name;
        int balance{5};
    



};
    

