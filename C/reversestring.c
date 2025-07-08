#include <stdio.h>


void reverseString(char* str) {
    int len = 0, i;
    char temp;
    while (str[len] != '\0') {
        len++;
    }
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}