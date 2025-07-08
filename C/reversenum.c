#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    int x=num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; 
        reversed = reversed * 10 + remainder; 
        num /= 10; 
    }

    printf("Reversed Number: %d\n", reversed);
    if (x == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}