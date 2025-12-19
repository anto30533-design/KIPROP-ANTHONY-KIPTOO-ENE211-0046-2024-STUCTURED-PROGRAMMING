#include <stdio.h>

int main() {
    int count = 10;
    int *pCount;

    pCount = &count;

    printf("Before modification:\n");
    printf("Value of count: %d\n", count);
    printf("Address of count: %p\n", (void*)&count);
    printf("Value stored in pCount: %p\n", (void*)pCount);
    printf("Value accessed using *pCount: %d\n\n", *pCount);

    printf("Modifying count using pointer pCount...\n");
    *pCount = 25;

    printf("\nAfter modification:\n");
    printf("Updated value of count: %d\n", count);
    printf("Value accessed using *pCount: %d\n", *pCount);

    printf("\n Verification \n");
    printf("count == *pCount: %s\n", (count == *pCount) ? "true" : "false");
    printf("&count == pCount: %s\n", (&count == pCount) ? "true" : "false");


    printf("\n Additional Modifications\n");

    *pCount += 5;
    printf("After *pCount += 5: count = %d\n", count);

    (*pCount)++;
    printf("After (*pCount)++: count = %d\n", count);

    *pCount = *pCount * 2;
    printf("After *pCount = *pCount * 2: count = %d\n", count);

    *pCount = (*pCount / 3) + 7;
    printf("After *pCount = (*pCount / 3) + 7: count = %d\n", count);

    return 0;
}
