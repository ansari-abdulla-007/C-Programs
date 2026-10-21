// write a program to store employee details(id,name,salary) using structure and display them.
#include <stdio.h>
struct employee{
    int id;
    char name[20];
    int salary;
};
int main(){
    struct employee s1={101,"Abdulla",50000};
    printf("Employee details!\n");
    printf("Id: %d\nName: %s\nSalary: %d",s1.id,s1.name,s1.salary);

    return 0;
}