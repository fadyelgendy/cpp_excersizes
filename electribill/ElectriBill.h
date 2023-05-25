#include <iostream>

#define VAT 18
#define EWURA 1
#define ERA 3
#define KW_PRICE 295

class ElectriBill {
    public:
    explicit ElectriBill(double amount) {
        setAmountPaid(amount);
    }

    double getAmountPaid() const {
        return amountPaid;
    }

    void setAmountPaid(double amount) {
        if (amount > 0) {
            amountPaid = amount;
        }
    }

    double getVAT() const {
        return (getAmountPaid() * VAT ) / 100;
    }

    double getEWURA() const {
        return (getAmountPaid() * EWURA ) / 100;
    }

    double getERA() const {
        return (getAmountPaid() * ERA ) / 100;
    }

    double getUnits() const {
        double remain = getAmountPaid() - getVAT() - getERA() - getEWURA();

        return remain / KW_PRICE;
    }

    void printBill() const {
        std::cout << "ElectriBill" << std::endl;
        std::cout << "Amount paid: " << getAmountPaid() << std::endl;
        std::cout << "VAT: " << getVAT() << std::endl;
        std::cout << "ERA: " << getERA() << std::endl;
        std::cout << "EWURA: " << getEWURA() << std::endl;
        std::cout << "Units: " << getUnits() << std::endl;
    }
    
    private:
        double amountPaid{0};
};
