#include <stdio.h>
void change(int a[]){
    a[0]=100;
    a[1]=200;
    a[2]=300;
} 
int main(){
    int arr[]={10,20,30};
    change(arr);
    printf("%d, %d, %d",arr[0],arr[1],arr[2]);

}