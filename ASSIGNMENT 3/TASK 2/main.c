#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;


    ptr = &num;

    printf("1. Value of num: %d\n", num);
    printf("2. Value stored in ptr (address of num): %p\n", (void*)ptr);
    printf("3. Address of num: %p\n", (void*)&num);
    printf("4. Value accessed using *ptr (dereferenced value): %d\n", *ptr);

    printf("\n Verification\n");
    printf("Address of ptr itself: %p\n", (void*)&ptr);
    printf("Size of num: %lu bytes\n", sizeof(num));
    printf("Size of ptr: %lu bytes\n", sizeof(ptr));

    return 0;

}
