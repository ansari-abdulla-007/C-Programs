// Write a C program to modify array elements using a function and print updated values.
#include <stdio.h>
void change(int arr[]){
    arr[0]=100;
    arr[1]=200;
    arr[2]=300;
}
int main(){
    int arr[]={10,20,30};
    change(arr);
    printf("%d, %d, %d",arr[0],arr[1],arr[2]);
    return 0;
}