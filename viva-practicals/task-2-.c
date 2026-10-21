// Develop a C program to demonstrate relational and logical operators.
#include <stdio.h>
int main(){
    int a = 10;
    int b = 15;
    printf("Relational Operators:\n");
    printf("%d\n",a>b);
    printf("%d\n",b>a);
    printf("%d\n",a<b);
    printf("%d\n",a==b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
    printf("%d\n",a!=b);

    printf("Logical Operators:\n");
    printf("%d\n",(a<b)&&(a!=b));
    printf("%d\n",(a==b)||(b>a));
    printf("%d\n",!(a==b));

    return 0;
}