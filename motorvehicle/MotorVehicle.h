#include <iostream>
#include <string>

class MotorVehicle {
    public:
        MotorVehicle(std::string motorMake, std::string motorFuleType, int year, std::string carColor, int capacity): make{motorMake}, fuelType{motorFuleType},yearOfManufacture{year}, engineCapacity{capacity}, color{carColor} {

        }

        std::string getMake() const { // return car make
            return make;
        }

        void setMake(std::string motorMake) { // Set car new make
            make = motorMake;
        }

        std::string getFuelType() const { // Return car fuel type
            return fuelType;
        }

        void setFuelType(std::string type) { // Set Car fuel type
            fuelType = type;
        }

        int getYearOfManufacture() const { // return Car Year of manufacture
            return yearOfManufacture;
        }

        void setYearOfManufacture(int year) { // Set new Car year of manufacture
            if (year > 0) {
                yearOfManufacture = year;
            }
        }

        std::string getColor() const { // Return car color
            return color;
        }

        void setColor(std::string motorColor) { // Set new car color
            color = motorColor;
        }

        int getEngineCapacity() const { // Return Engin Capacity
            return engineCapacity;
        }

        void setEngineCapacity(int capacity) { // Set New Engine Capacity
            if (capacity > 0) {
                engineCapacity = capacity;
            }
        }

        void displayCarDetails() const { // Print out car details
            std::cout << "Car Details:" << std::endl;
            std::cout << "Make: \t\t\t" << getMake() << std::endl;
            std::cout << "Fuel Type: \t\t" << getFuelType() << std::endl;
            std::cout << "Year Of Manufacture: \t" << getYearOfManufacture() << std::endl;
            std::cout << "Color: \t\t\t" << getColor() << std::endl;
            std::cout << "Engine Capacity: \t" << getEngineCapacity() << std::endl << std::endl;
        }

    private:
        std::string make; // Car make
        std::string fuelType; // Fuel type
        int yearOfManufacture; // year of manufacture
        std::string color; // Car color
        int engineCapacity; // engine capacity
};
