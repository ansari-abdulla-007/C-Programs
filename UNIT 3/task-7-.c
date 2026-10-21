// Write a C program to demonstrate call by reference using array.
#include <stdio.h>

/* Function jo array change karega */
void change(int a[])
{
    a[0] = 100;   // pehla element change kar diya
}

int main()
{
    int a[3] = {10, 20, 30};

    printf("Before function call:\n");
    printf("%d %d %d", a[0], a[1], a[2]);

    change(a);   // function call

    printf("\n\nAfter function call:\n");
    printf("%d %d %d", a[0], a[1], a[2]);

    return 0;
}
