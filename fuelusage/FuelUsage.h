#include <iostream>

class FuelUsage {
    public:
        FuelUsage(double km, double usedLiters): kilometers{km}, liters{usedLiters} {}

        double getKilometers() const {
            return kilometers;
        }

        void setKilometers(double km) {
            if (km >= 0) {
                kilometers = km;
            }
        }

        double getLiters() const {
            return liters;
        }

        void setLiters(double usedLiters) {
            if (usedLiters >= 0) {
                liters = usedLiters;
            }
        }

        double getTripUsage() const {
            return getKilometers() / getLiters();
        }

        double getTotalUsage() const {
            return getLiters() / getTripUsage();
        }

        void printUsage() const {
            std::cout << "kms per liter this trip: " << getTripUsage() << std::endl;
            std::cout << "total kms per liter: " << getTotalUsage() << std::endl;
        }

    private:
        double kilometers{0};
        double liters{0};
};
