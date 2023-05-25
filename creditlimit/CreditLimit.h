#include <iostream>

class CreditLimit {
    public:
        CreditLimit(int number, double balance, double charges, double credits, double limit) {
            setAccountNumber(number);
            setBeginningBalance(balance);
            setTotalChargs(charges);
            setTotalCredits(credits);
            setCreditLimit(limit);
        }

        int getAccountNumber() const {
            return accountNumber;
        }

        void setAccountNumber(int number) {
            if (number > 0)
                accountNumber = number;
        }

        double getBeginningBalance() const {
            return beginningBalance;
        }

        void setBeginningBalance(double balance) {
            if (balance > 0)
                beginningBalance = balance;
        }

        double getTotalChargs() const {
            return totalCharges;
        }

        void setTotalChargs(double charges) {
            if (charges > 0)
                totalCharges = charges;
        }

        double getTotalCredits() const {
            return totalCredits;
        }

        void setTotalCredits(double credits) {
            if (credits > 0)
                totalCredits = credits;
        }

        double getCreditLimit() const {
            return creditLimit;
        }

        void setCreditLimit(double limit) {
            if (limit > 0)
                creditLimit = limit;
        }

        bool limitExceeded() {
            double spent = getBeginningBalance() + getTotalChargs() - getTotalCredits();

            setBeginningBalance(spent);

            return spent > getCreditLimit();
        }

        void printDetails() {
            if (limitExceeded() == true){
                std::cout << "New Balance is: " << getBeginningBalance() << std::endl;
                std::cout << "Account: " << getAccountNumber() << std::endl;
                std::cout << "Credit Limit: " << getCreditLimit() << std::endl;
                std::cout << "Balance: " << getBeginningBalance() << std::endl;
                std::cout << "Credit Limit Exceeded." << std::endl;
            } else {
                std::cout << "New Balance is: " << getBeginningBalance() << std::endl;
            }
        }

    private:
        int accountNumber;
        double beginningBalance;
        double totalCharges;
        double totalCredits;
        double creditLimit;
};
