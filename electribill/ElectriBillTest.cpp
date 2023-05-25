#include "ElectriBill.h"

int main() {
    double amount{0};

    std::cout << "Enter Bill Amount: ";
    std::cin >> amount;

    ElectriBill myBill{amount};
    myBill.printBill();
}