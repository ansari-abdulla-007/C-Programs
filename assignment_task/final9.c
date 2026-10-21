// Write a c program to print even numbers between 1 to 20 using loop.
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=20;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}