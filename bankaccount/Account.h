#include <string>
#include <iostream>

class Account {
    public:

        Account(std::string accountName, int initBalance): name{accountName} {
            setBalance(initBalance);
        }

        std::string getName() const {
            return name;
        }

        void setName(std::string accountName) {
            name = accountName;
        }

        int getBalance() const {
            return balance;
        }

        void setBalance(int initBalance) {
            if (initBalance > 0) {
                balance = initBalance;
            }
        }

        void deposit(int amount) {
            if (amount > 0) {
                balance = balance + amount;
                
                std::cout << "Amount deposit with: $" << amount << std::endl;
            }
        }

        void withdraw(int amount) {
            if (getBalance() < amount) {
                std::cout << "Withdraw amount exceeded account balance." << std::endl;
                return;
            }

            setBalance(balance - amount);
        }

        void printAccount() const {
            std:: cout << "Account name: " << getName() << std::endl;
            std::cout << "Available balance: $" << getBalance() << std::endl;
        }

    private:
        std::string name;

        int balance;
};
