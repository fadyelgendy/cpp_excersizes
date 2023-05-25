#include "HealthProfile.h"

int main() {
    std::string firstName;
    std::string lastName;
    std::string gender;
    int day;
    int month;
    int year;
    double height;
    double weight;

    std::cout << "Enter First Name: ";
    getline(std::cin, firstName);

    std::cout << "Enter Last Name: ";
    getline(std::cin, lastName);

    std::cout << "Enter Gender[male, female]: ";
    getline(std::cin, gender);

    std::cout << "Birthday[day month year]: ";
    std::cin >> day >> month >> year;

    std::cout << "Enter Height[CM]: ";
    std::cin >> height;

    std::cout << "Enter weight[KG]: ";
    std::cin >> weight;

    HealthProfile patientProfile{firstName, lastName, gender, day, month, year, height, weight};

    patientProfile.displayPatientRecord();
}