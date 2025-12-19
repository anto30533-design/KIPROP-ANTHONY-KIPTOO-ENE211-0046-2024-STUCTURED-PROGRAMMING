#include <stdio.h>

// Function prototype
void swapNumbers(int *ptr1, int *ptr2);

int main() {
    int a = 10;
    int b = 20;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("Address of a: %p\n", (void*)&a);
    printf("Address of b: %p\n\n", (void*)&b);

    swapNumbers(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    printf("\n Additional Example \n");
    int x = 100, y = 200;
    printf("Before: x = %d, y = %d\n", x, y);
    swapNumbers(&x, &y);
    printf("After:  x = %d, y = %d\n", x, y);

    return 0;
}

void swapNumbers(int *ptr1, int *ptr2) {
    printf("\nInside swapNumbers() function:\n");
    printf("ptr1 points to address: %p, value: %d\n", (void*)ptr1, *ptr1);
    printf("ptr2 points to address: %p, value: %d\n", (void*)ptr2, *ptr2);


    int temp = *ptr1;  d by ptr1
    *ptr2 = temp;
    *ptr1 = *ptr2;

    printf("After swapping inside function:\n");
    printf("*ptr1 = %d, *ptr2 = %d\n\n", *ptr1, *ptr2);
}
