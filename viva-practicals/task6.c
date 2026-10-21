// Develop a C program to check whether a given year is a leap year.
#include <stdio.h>

int main() {
    int year = 2024;   // Given year (fixed value)

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year", year);
    }
    else {
        printf("%d is NOT a Leap Year", year);
    }

    return 0;
}
