#include <stdio.h>

// Define structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student details:\n");
    printf("Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Name: ");
    scanf(" %[^\n]", s.name);  // reads string with spaces

    printf("Marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

