// WAP to find the student with highest marks using an array of structures.
#include <stdio.h>

/* Define structure */
struct Student {
    int roll;
    float marks;
};

int main() {
    int i, maxIndex = 0;

    /* Initialize array of structures */
    struct Student s[5] = {
        {1, 75.5},
        {2, 88.0},
        {3, 69.5},
        {4, 92.0},
        {5, 80.0}
    };
    
    /* Find student with highest marks */
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    /* Display result */
    printf("Student with highest marks:\n");
    printf("Roll Number: %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
