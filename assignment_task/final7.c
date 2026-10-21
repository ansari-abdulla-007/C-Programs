// write a c program to find the largest of three numbers using if-else.
#include <stdio.h>
int main(){
    int a=10,b=30,c=20;
    if(a>b && a>c){
        printf("a is the largest number");
    } else if(b>a && b>c){
        printf("b is the largest number");
    } else{
        printf("c is the largest number");
    }
    return 0;
}