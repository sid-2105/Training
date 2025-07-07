#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
        printf("Converted character: %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        // Already lowercase
        printf("Character is already lowercase: %c\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }
}