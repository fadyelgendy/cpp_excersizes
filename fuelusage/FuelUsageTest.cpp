#include "FuelUsage.h"

int main() {
    FuelUsage tripUsage{0,0};

    double kms;
    double liters;

    while (kms != -1)
    {
        std::cout << "Enter kilometers driven (-1 to quit): ";
        std::cin >> kms;

        if (kms == -1) return 0;

        std::cout << "Enter liters used: ";
        std::cin >> liters;

        tripUsage.setKilometers(kms);
        tripUsage.setLiters(liters);

        tripUsage.printUsage();
    }
    
}