# KIPROP-ANTHONY-KIPTOO-ENE211-0046-2024-STUCTURED-PROGRAMMING

1. Difference Between a Normal Variable and a Pointer

## NORMAL VARIABLE
What it stores: An actual value (e.g., integer, float, character).
Memory access: Accesses its own memory location directly.
Reading value: Use the variable name.
Modifying value: Assign a new value to the variable.
example
int x = 10;  // x stores the value 10 directly
printf("%d", x);  // Directly reads value 10
x = 20;  // Directly modifies to 20

## POINTER VARIABLE
What it stores: The memory address of another variable.
Memory access: Accesses memory indirectly via the stored address.
Reading value: Dereference the pointer using *.
Modifying value: Dereference and assign a new value.
Example
int x = 10;
int *ptr = &x;  // ptr stores address of x
printf("%d", *ptr);  // Indirectly reads value 10 via address
*ptr = 20;  // Indirectly modifies x to 20

2. Variable vs Pointer Declaration and Definition
   
## Variable Declaration & Definition
int num;        // Declaration (allocates memory for an integer)
int num = 5;    // Definition with initialization

## Pointer Declaration & Definition
int *ptr;               // Declaration: ptr can store address of integer
int *ptr = NULL;        // Definition: initialized to NULL
int num = 5;
int *ptr = &num;        // Definition: stores address of num

## Role of Operators
* (Asterisk):
In declaration: int *ptr - declares a pointer
In expression: *ptr - dereferences (accesses value at address)
& (Ampersand):
Address-of operator: &num - gets memory address of variable
Returns the location where variable is stored
Example:
int value = 42;
int *pointer = &value;   // & gets address of value, stores in pointer
int retrieved = *pointer; // * accesses value at stored address (42)

3. Dereferencing a Pointer

Meaning
Dereferencing means accessing the value stored at the memory address contained in a pointer. It "follows" the pointer to the actual data.
int x = 5;
int *p = &x;

printf("%d", *p);  // reads value of x (5)

*p = 15;           // modifies value of x
printf("%d", x);   // outputs 15

4. When Pointers Are Preferred Over Normal Variables
   
Use Case 1: Passing Large Data to Functions
Avoids copying large structures → improves performance.
void update(int *n) {
    *n = 100;
}

Use Case 2: Dynamic Memory Allocation
Required when memory size is decided at runtime.
int *arr = (int *)malloc(5 * sizeof(int));

5. Limitations and Risks of Using Pointers

Dangling pointers: Pointing to freed memory
Memory leaks: Forgetting to free allocated memory
Null pointer dereferencing: Causes program crashes
Complexity: Harder to debug than normal variables

6. Call by Value vs Call by Reference

## Call by Value
Mechanism: Copy of data is passed to function
Original Data: Unchanged outside function
Memory: New memory allocated for parameter
Example
void incrementByValue(int num) {
    num++;  // Modifies local copy only
}

int main() {
    int x = 5;
    incrementByValue(x);
    printf("%d", x);  // Still 5, not 6
    return 0;
}

## Call by Reference
Mechanism: Address of data is passed to function
Original Data: Can be modified by function
Memory: No new memory for actual data
void incrementByReference(int *num) {
    (*num)++;  // Modifies original variable
}

int main() {
    int x = 5;
    incrementByReference(&x);
    printf("%d", x);  // Now 6
    return 0;
}

7. Practical Scenarios

## a. When Call by Value Is Preferred
When original data must remain unchanged
For small data types (int, char, float)
Safer and simpler logic
Example: Mathematical calculations
int square(int x) {
    return x * x;
}

## b. When Call by Reference Is Preferred
When function must modify original data
When passing large data structures
To return multiple values from a function
Example: Swapping values
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

