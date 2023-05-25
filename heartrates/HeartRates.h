#include <iostream>
#include <string>

#define CURRENT_YEAR 2023
#define START_YEAR 1900
#define TARGET_RATE_FACTOR 50

class HearRates {
    public:
        HearRates(std::string fname, std::string lname, int currentDay, int currentMonth, int currentYear): firstName{fname}, lastName{lname}, day{currentDay}, month{currentMonth}, year{currentYear} {

        }

        std::string getFirstName() const {
            return firstName;
        }

        void setFirstName(std::string fname) {
            firstName = fname;
        }

        std::string getLastName() const {
            return lastName;
        }

        void setLastName(std::string lname) {
            lastName = lname;
        }

        int getDay() const {
            return day;
        }

        void setDay(int currentDay) {
            if (currentDay >=1 && currentDay <=31) {
                day = currentDay;
            }
        }

        int getMonth() const {
            return month;
        }

        void setMonth(int currentMonth) {
            if (currentMonth >=1 && currentMonth <=12) {
                month = currentMonth;
            }
        }

        int getYear() const {
            return year;
        }

        void setYear(int currentYear)  {
            if (currentYear >= START_YEAR && currentYear <= CURRENT_YEAR) {
                year = currentYear;
            }
        }

        int getAge() const { // Calculate person Age, depending on years Only
            return CURRENT_YEAR - year;
        }

        int maximumHearRates() const { // calculate Maximum Heart rates
            return 220 - getAge();
        }

        int targetHearRates() const { // Calculate Target Heart rates
            return (maximumHearRates() * TARGET_RATE_FACTOR) / 100;
        }

        void displayHearRates() const {
            std::cout << "Heart Rates" << std::endl;
            std::cout << "Pserson Name: \t\t" << getFirstName() << " " << getLastName() << std::endl;
            std::cout << "Date of Birth: \t\t" << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
            std::cout << "Age: \t\t\t" << getAge() << " Years old." << std::endl;
            std::cout << "Maximum Heart Rates: \t" << maximumHearRates() << " P/M" << std::endl;
            std::cout << "target Heart Rates: \t" << targetHearRates() << " P/M" << std::endl << std::endl;
        }


    private:
        std::string firstName;
        std::string lastName;

        // Birthday parts
        int day;
        int month;
        int year;
};
