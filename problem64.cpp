#include <stdio.h>

int main() {
    int a = 10;          // A normal integer variable
    int *p;              // Pointer to an integer

    p = &a;              // Assign address of variable a to pointer p

    // Display using normal variable
    printf("Value of a: %d\n", a);

    // Display using pointer
    printf("Value of a using pointer: %d\n", *p);

    // Display address of a using pointer
    printf("Address of a: %p\n", &a);
    printf("Address stored in pointer p: %p\n", p);
    printf("Address of pointer p itself: %p\n", &p);

    // Modify value of a using pointer
    *p = 20;
    printf("Value of a after modifying through pointer: %d\n", a);

    return 0;
}

