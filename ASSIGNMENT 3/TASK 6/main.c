#include <stdio.h>

// Function prototypes
void incrementByValue(int num);
void incrementByReference(int *num);

int main() {

    int number = 10;
    printf("Pass by Value vs Pass by Reference\n\n");

    printf("Initial value of number: %d\n", number);
    printf("Address of number: %p\n\n", (void*)&number);

    printf(" Pass by Value \n");
    printf("Calling incrementByValue(number)...\n");

    incrementByValue(number);

    printf("After incrementByValue(number): %d\n", number);
    printf("Number remains unchanged!\n\n");

    printf("--- Pass by Reference ---\n");
    printf("Calling incrementByReference(&number)...\n");

    incrementByReference(&number);

    printf("After incrementByReference(&number): %d\n", number);
    printf("Number has been incremented!\n\n");



    return 0;
}

void incrementByValue(int num) {
    printf("Inside incrementByValue():\n");
    printf("  Received parameter value: %d\n", num);
    printf("  Parameter address: %p\n", (void*)&num);

    num++;

    printf("  After increment: %d\n", num);
    printf("  (This change only affects the local copy)\n");
}


void incrementByReference(int *num) {
    printf("Inside incrementByReference():\n");
    printf("  Received address: %p\n", (void*)num);
    printf("  Value at that address: %d\n", *num);

    (*num)++;

    printf("  After increment: %d\n", *num);
    printf("  (This change affects the original variable)\n");
}
