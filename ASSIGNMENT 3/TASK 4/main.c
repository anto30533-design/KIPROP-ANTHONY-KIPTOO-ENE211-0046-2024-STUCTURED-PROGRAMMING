#include <stdio.h>

int main() {
    int num1 = 15;
    int num2 = 25;

    int *ptr1;
    int *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Initial Setup:\n");
    printf("num1 = %d, Address: %p\n", num1, (void*)&num1);
    printf("num2 = %d, Address: %p\n", num2, (void*)&num2);
    printf("ptr1 points to address: %p\n", (void*)ptr1);
    printf("ptr2 points to address: %p\n\n", (void*)ptr2);

    int sum = *ptr1 + *ptr2;

    printf("Addition Result:\n");
    printf("Using pointers: *ptr1 + *ptr2 = %d + %d = %d\n",
           *ptr1, *ptr2, sum);

    int result;
    int *ptrSum = &result;
    *ptrSum = *ptr1 + *ptr2;
    printf("Using pointer for sum: %d\n\n", result);

    printf("--- Additional Arithmetic Operations ---\n");

    int difference = *ptr1 - *ptr2;
    printf("Subtraction: *ptr1 - *ptr2 = %d - %d = %d\n",
           *ptr1, *ptr2, difference);

    int product = (*ptr1) * (*ptr2);
    printf("Multiplication: *ptr1 * *ptr2 = %d * %d = %d\n",
           *ptr1, *ptr2, product);

    if (*ptr2 != 0) {
        float quotient = (float)(*ptr1) / (*ptr2);
        printf("Division: *ptr1 / *ptr2 = %d / %d = %.2f\n",
               *ptr1, *ptr2, quotient);
    } else {
        printf("Division by zero not allowed.\n");
    }

    if (*ptr2 != 0) {
        int remainder = *ptr1 % *ptr2;
        printf("Modulus: *ptr1 %% *ptr2 = %d %% %d = %d\n",
               *ptr1, *ptr2, remainder);
    } else {
        printf("Modulus by zero not allowed.\n");
    }

    printf("\n User Input Version \n");

    int a, b;
    int *pA = &a;
    int *pB = &b;

    printf("Enter first number: ");
    scanf("%d", pA);

    printf("Enter second number: ");
    scanf("%d", pB); ;

    int userSum = *pA + *pB;
    printf("\nUser Input Results:\n");
    printf("%d + %d = %d\n", *pA, *pB, userSum);

    return 0;
}
