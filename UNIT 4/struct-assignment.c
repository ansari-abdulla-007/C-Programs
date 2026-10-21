// Assigning one structure variable to another of the same type is called structure assignment.
#include <stdio.h>
struct student{
    int roll;
    float marks;
};
int main(){
    struct  student s1={1,90.5};
    struct student s2;
    s2=s1;

    printf("Roll no: %d\nMarks: %.2f",s2.roll,s2.marks);

    return 0;
}