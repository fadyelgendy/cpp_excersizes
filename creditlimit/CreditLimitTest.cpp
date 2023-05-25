#include "CreditLimit.h"

int main() {
    int accountNumber;
    double beginningBalance;
    double totalCharges;
    double totalCredits;
    double creditLimit;

    while (accountNumber != -1) {
        std::cout << "Enter account number (-1 to quit):";
        std::cin >> accountNumber;

        if (accountNumber == -1) return 0;

        std::cout << "Enter beginning balance:";
        std::cin >> beginningBalance;

        std::cout << "Enter total charges:";
        std::cin >> totalCharges;

        std::cout << "Enter total credits:";
        std::cin >> totalCredits;

        std::cout << "Enter credit limit:";
        std::cin >> creditLimit;

        CreditLimit newCreditLimit{accountNumber, beginningBalance, totalCharges, totalCredits,creditLimit};

        newCreditLimit.printDetails();
    }
}