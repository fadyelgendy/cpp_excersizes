#include <string>
#include <iostream>
#include <iomanip>

#define CURRENT_YEAR 2023
#define HEART_RATE_CONST 220
#define HEART_RATE_PERCENT 50

class HealthProfile {
    public:
        HealthProfile(std::string fname, std::string lname, std::string pgender, int cday, int cmonth, int cyear, double pheight, double pweight): firstName{fname}, lastName{lname}, gender{pgender}, day{cday}, month{cmonth}, year{cyear}, height{pheight}, weight{pweight}
        {
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

        std::string getGender() const {
            return gender;
        }

        void setGender(std::string pgender) {
            gender = pgender;
        }

        int getDay() const {
            return day;
        }

        void setDay(int currentDay) {
            if (currentDay >= 1 && currentDay <=12) {
                day = currentDay;
            }
        }

        int getMonth() const {
            return month;
        }

        void setMonth(int currentMonth) {
            if (currentMonth >= 1 && currentMonth <=12) {
                month = currentMonth;
            }
        }

        int getYear() const {
            return year;
        }

        void setYear(int currentYear) {
            if (currentYear >= 1 && currentYear <=12) {
                year = currentYear;
            }
        }

        double getHeight() const {
            return height;
        }

        void setHeight(double pHeight) {
            if (pHeight > 0) {
                height = pHeight;
            }
        }

        double getWeight() const {
            return weight;
        }

        void setWeight(double pWeight) {
            if (pWeight > 0) {
                weight = pWeight;
            }
        }

        int getAge() const {
            return CURRENT_YEAR - getYear();
        }

        int getMaximumHeartRate() const {
            return HEART_RATE_CONST - getAge();
        }

        int getTargetHeartRate() const {
            return (getMaximumHeartRate() * HEART_RATE_PERCENT) / 100;
        }

        void getBMI() const {
            std::cout << "BMI Values" << std::endl;
            std::cout << "Underweight\tless than 18.5" << std::endl;
            std::cout << "Normal\tbetween 18.5 and 25.9" << std::endl;
            std::cout << "Overweight\tbetween 25 and 29.9" << std::endl;
            std::cout << "Obese\t\t30 or greater" << std::endl << std::endl;

            float bmi = (weight / (height * height)) * 10000;
            std::cout << "Your BMI is: " << bmi << std::endl;
        }

        void displayPatientRecord() const {
            std::cout << "Patient Name: " << getFirstName() << " " << getLastName() << std::endl;
            std::cout << "Gender: " << getGender() << std::endl;
            std::cout << "Birthday: " << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
            std::cout << "Age: " << getAge() << std::endl;
            std::cout << "Maximum heart rate: " << getMaximumHeartRate() << std::endl;
            std::cout << "Target heart rate: " << getTargetHeartRate() << std::endl;
            getBMI();
        }

    private:
        std::string firstName;
        std::string lastName;
        std::string gender;
        int day;
        int month;
        int year;
        double height;
        double weight;
};
