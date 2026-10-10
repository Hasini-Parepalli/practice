
#include <iostream>

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0)   {
        return true;
    }
    return false;
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        if (isLeapYear(year)) {
            return 29;
        }
        return 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

int daysInYear(int year) {
    int total = 0;
    for (int month = 1; month <= 12; month++) {
        total += daysInMonth(month, year);
    }
    return total;
}

int main() {
    int year, month;

    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    if (month < 1 || month > 12) {
        std::cout << "Invalid month." << std::endl;
        return 1;
    }

    if (isLeapYear(year)) {
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " is not a leap year" << std::endl;
    }

    std::cout << "Month " << month << " has " << daysInMonth(month, year) << " days." << std::endl;
    std::cout << "The whole year has " << daysInYear(year) << " days." << std::endl;

    return 0;
}
