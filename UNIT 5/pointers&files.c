// The address operator(&) is used to obtain the memory address of a variable.
#include <stdio.h>
int main(){
    int a = 10;
    printf("Value: %d\n",a);
    printf("Address: %p",&a);

    return 0;
}