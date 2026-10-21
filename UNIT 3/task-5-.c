// Write a C program to pass an array {10, 20, 30} to a function and print all elements.
#include <stdio.h>
void display(int arr[]){
    printf("First element is: %d\n",arr[0]);
    printf("Second element is: %d\n",arr[1]);
    printf("Third element is: %d",arr[2]);
}
int main(){
    int arr[]={10,20,30};
    display(arr);

    return 0;
}