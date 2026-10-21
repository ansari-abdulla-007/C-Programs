// Write a C program to call the same function three times and print the message each time.
#include <stdio.h>
void myfunction(char name[]){
    printf("Hello %s\n",name);
}
int main(){
    myfunction("Abdulla");
    myfunction("Sahil");
    myfunction("Jimi");

    return 0;
}