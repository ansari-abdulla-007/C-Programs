// Develop a C program to find the largest of three numbers using if–else ladder.
#include <stdio.h>
int main(){
    int a=10;
    int b=25;
    int c=9;

    if(a>=b && a>=c){
        printf("Largest number is a",a);
    }
    else if(b>=a && b>=c){
        printf("Largest number is b",b);
    }
    else{
        printf("Largest number is c",c);
    }

    return 0;
}