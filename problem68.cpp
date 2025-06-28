#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is palindrome
int isPalindrome(char *start) {
    char *end = start + strlen(start) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters (optional)
        while (!isalnum(*start) && start < end) start++;
        while (!isalnum(*end) && start < end) end--;

        if (tolower(*start) != tolower(*end)) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

