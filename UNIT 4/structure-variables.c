// Variables declared using a structure are called structure variables.
#include <stdio.h>
struct structure_student{
    int roll;
    float marks;
};
int main(){
    struct structure_student s1;
    s1.roll = 1;
    s1.marks = 95.94;
    printf("Roll no: %d\nMarks: %.2f\n",s1.roll,s1.marks);

    return 0;

}