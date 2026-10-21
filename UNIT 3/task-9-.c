// Write a C program where a function accepts another function as argument.
#include <stdio.h>
void hello(){
    printf("Hello from function!");
}
void mycall(void (*f)()){
    f();
}
int main(){
    mycall(hello);
    return 0;
}