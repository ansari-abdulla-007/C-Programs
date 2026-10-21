// WAP to pass a structure to a function and prints its members.
#include <stdio.h>

/* Define a structure */
struct Student {
    int roll;
    float marks;
};

/* Function to receive structure and print values */
void display(struct Student s1) {
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
}

int main() {
    /* Declare and initialize structure variable */
    struct Student s1={1,85.5};

    /* Pass structure to function */
    display(s1);

    return 0;
}
