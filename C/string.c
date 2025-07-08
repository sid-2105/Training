#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    char str[6]={'H', 'e', 'l', 'l', 'o', '\0'};
    printf("String: %s\n", str);

    char str3[] = "Hello, World!";

    // Print the original string
    printf("Original String: %s\n", str3);
    
    // Input two strings
    printf("Enter first string: ");
    // scanf("%s", str1);
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character
    // scanf("%s", str2);

   
    strcat(str1, " ");
    strcat(str1, str2);




    // Print concatenated string
    printf("Concatenated String: %s\n", str1);
    printf("Length of Concatenated String: %zu\n", strlen(str1));
    printf("Comparison Result: %d\n", strcmp(str1, str2));
    printf("Copy Result: %s\n", strcpy(str1,str2));
    printf("First String: %s\n", str1);
    printf("Second String: %s\n", str2);


    return 0;
}

