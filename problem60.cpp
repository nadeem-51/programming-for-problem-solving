#include <stdio.h>

// Macro definitions
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PRINT_HELLO() printf("Hello, World!\n")

int main() {
    int r = 5;
    int a = 10, b = 20;

    // Using PI macro
    float area = PI * SQUARE(r);
    printf("Area of circle with radius %d = %.2f\n", r, area);

    // Using MAX macro
    printf("Maximum of %d and %d is %d\n", a, b, MAX(a, b));

    // Using PRINT_HELLO macro
    PRINT_HELLO();

    return 0;
}

