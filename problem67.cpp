#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr;
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    ptr = &str[length - 1];

    printf("String in reverse order:\n");

    for (i = length - 1; i >= 0; i--) {
        printf("%c", *(ptr--)); 
    }

    printf("\n");

    return 0;
}

