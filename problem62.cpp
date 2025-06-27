#include <stdio.h>

// Define structure for a student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];  // Array of structures

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // Reads full name including spaces

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details in tabular format
    printf("\n%-10s %-25s %-10s\n", "Roll No", "Name", "Marks");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-25s %-10.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}

