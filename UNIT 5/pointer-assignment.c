#include <stdio.h>
int main(){
    int a = 30;
    int *p1=&a;
    int *p2;

    p2=p1;

    printf("Value: %d",*p2);
    return 0;
}