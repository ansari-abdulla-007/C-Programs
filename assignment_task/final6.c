// write c program to check whether a number is positive or negative or zero using operators.
#include <stdio.h>
int main(){
    int num=-5;

    if(num>0){
        printf("number is positive");
    } else if(num<0){
        printf("number is negative");
    } else{
        printf("number is zero");
    }
    return 0;
}