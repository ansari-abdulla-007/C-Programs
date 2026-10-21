// Develop a C program to store and display student details using structure.
#include <stdio.h>
struct student{
    int roll;
    float marks;
    char name[20];
};
int main(){
    struct student s1={1,65.5,"Abduu"};
    printf("Roll no: %d\nMarks: %.2f\nName: %s",s1.roll,s1.marks,s1.name);

    return 0;
}