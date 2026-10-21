// Write a C program to pass a name to a function and print "Hello name".
#include <stdio.h>
void myfunction(char name[]){
    printf("Hello %s\n",name);
}
int main(){
    myfunction("Ansari!");
    return 0;
}