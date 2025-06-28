#include <stdio.h>

// Define structure for student
struct Student {
    int rollNo;
    float marks;
};

int main() {
    int n, i, topperIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];  // Array of structures

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find topper (maximum marks)
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Display topper's details
    printf("\nTopper of the class:\n");
    printf("Roll Number: %d\n", s[topperIndex].rollNo);
    printf("Marks: %.2f\n", s[topperIndex].marks);

    return 0;
}

