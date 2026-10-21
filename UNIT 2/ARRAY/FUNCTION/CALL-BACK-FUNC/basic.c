// call back function.
#include <stdio.h>
void Abdulla(){
    printf("Abduu!\n");
}
void call(void(*f)()){
    f();
}
int main(){
    call(Abdulla);
    return 0;
}