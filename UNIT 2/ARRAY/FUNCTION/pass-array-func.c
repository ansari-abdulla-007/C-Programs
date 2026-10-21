#include <stdio.h>

// Function receiving array
void display(int arr[]) {
    printf("First Element = %d\n", arr[0]);
    printf("Second Element = %d\n", arr[1]);
    printf("Third Element = %d\n", arr[2]);
    printf("Fourth Element = %d\n", arr[3]);
}

int main() {
    int numbers[] = {10, 20, 30, 40};

    // Passing array to function
    display(numbers);

    return 0;
}