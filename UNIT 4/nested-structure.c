// A structure defined inside another structure is called a nested structure.
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    struct Date dob;
};

int main() {
    struct Student s = {1, {12, 2, 2026}};
    printf("Roll no: %d\nDOB: %d/%d/%d",s.roll,s.dob.day, s.dob.month, s.dob.year);
    return 0;
}