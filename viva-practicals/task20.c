// Develop a C program to use an array of structures to store multiple student records.
#include <stdio.h>
struct student{
    int roll;
    int marks;
};
int main(){
    struct student s[3]={
        {1,95},
        {2,96},
        {3,97}
    };
    printf("ROll no: %d Marks: %d\n",s[0].roll,s[0].marks);
    printf("Roll no: %d Marks: %d\n",s[1].roll,s[1].marks);
    printf("Roll no: %d Marks: %d",s[2].roll,s[2].marks);

    return 0;

}