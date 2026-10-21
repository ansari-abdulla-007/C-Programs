// Develop a C program to find the factorial of a number using while loop.
#include <stdio.h>
int main(){
    int n=6;
    int i=1;
    int factorial = 1;

    while(i<=n){
        factorial=factorial *i;
        i++;
    }
    printf("Factorial = %d",factorial);

    return 0;
}