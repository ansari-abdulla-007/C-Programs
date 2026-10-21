// assigning the address of a variable to a pointer at the time of declaration.
#include <stdio.h>
int main(){
    int a = 30;
    int *p =&a;

    printf("%d",*p);

    return 0;
}