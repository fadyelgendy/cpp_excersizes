#include "Date.h"

int main() {
    Date myDate{1,5,2005};

    myDate.setDay(6);
    myDate.setMonth(3);
    myDate.setYear(1991);

    myDate.displayDate();
}