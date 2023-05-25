#include "MotorVehicle.h"

int main() {
    MotorVehicle myMotorVehicle{"Lambohrgini", "Deaisl", 1997, "Black", 1600};

    myMotorVehicle.setColor("Red");
    myMotorVehicle.setYearOfManufacture(2000);

    myMotorVehicle.displayCarDetails();
}