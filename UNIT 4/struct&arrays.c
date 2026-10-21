// An array of structures stores multiple structure variables of the same type.
#include <stdio.h>
struct student{
    int roll;
    float marks;
};
int main(){
    struct student s[3]={
        {1,95.5},
        {2,87.9},
        {3,98.5}
    };

    printf("Roll no: %d Marks: %.2f\n",s[0].roll,s[0].marks);
    printf("Roll no: %d Marks: %.2f\n",s[1].roll,s[1].marks);
    printf("ROll no: %d Marks: %.2f\n",s[2].roll,s[2].marks);

    return 0;
}