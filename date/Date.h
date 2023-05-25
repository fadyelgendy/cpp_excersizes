#include <iostream>

class Date {
    public:
        Date(int currentDay, int currentMonth, int currentYear): day{currentDay}, month{currentMonth}, year{currentYear} {

        }
        
        int getDay() const {
            return day;
        }

        void setDay(int currentDay) {
            if (currentDay >=1 && currentDay<= 31) {
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

        void setYear(int currentYear) {
            if (currentYear >= 1900 && currentYear <= 2023) {
                year = currentYear;
            }
        }

        void displayDate() const {
            std::cout << getMonth() << "/" << getDay() << "/" << getYear() << std::endl;
        }

    private:
        int day;
        int month;
        int year;
};
