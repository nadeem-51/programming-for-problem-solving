#include <stdio.h>

// Function to sort the array using pointers (Bubble Sort)
void sortArray(int *arr, int size) {
    int i, j, temp;
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap using pointers
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array using function
    sortArray(arr, n);

    // Display sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    printf("\n");
    return 0;
}


