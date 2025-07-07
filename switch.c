#include <stdio.h>
int main(){
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ");
    scanf("%d", &ch);
    switch(ch){
        case 1: printf("Addition: %d\n", a + b); 
            break;
        case 2: printf("Subtraction: %d\n", a - b);
        break;
        case 3: printf("Multiplication: %d\n", a * b);
        break;
        case 4:
        if (b!= 0) {
            printf("Division: %d\n", a / b);
        } else {
            printf("Division by zero is not allowed. \n");
            break;
        
        }
        default: printf("Invalid choice.\n");
    }
    return 0;
}
        