#include "HeartRates.h"

int main() {
    std::string firstName;
    std::string lastName;
    int day;
    int month;
    int year;

    std::cout << "First name: ";
    getline(std::cin, firstName);

    std::cout << "Last name: ";
    getline(std::cin, lastName);

    std::cout << "Birthday[day month year]: ";
    std::cin >> day >> month >> year;


    HearRates myHearRates{firstName, lastName, day, month, year};

    myHearRates.displayHearRates();
}