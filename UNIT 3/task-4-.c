// Write a C program using a function with name and age as parameters and print the output.
#include <stdio.h>
void myfunction(int age,char name[]){
    printf("Age: %d\nName: %s",age,name);
}
int main(){
    myfunction(18,"Abduu");
    return 0;
}