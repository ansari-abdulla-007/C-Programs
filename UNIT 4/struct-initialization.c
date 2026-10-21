// Assigning values to structure members at the time of declaration is called stucture initialization.
#include <stdio.h>
struct Student{
    int id;
    int marks;
};
int main(){
    struct Student s1 = {1,90};

    printf("ID: %d\n",s1.id);
    printf("Marks: %d\n",s1.marks);

    return 0;
}