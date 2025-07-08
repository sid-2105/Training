#include <stdio.h>
float sum(float a, float b); // Function prototype for sum
int main() { //main=sid
    
    int chai;

    int harsh(int ing); // Function prototype for harsh
    void welcome(); // Function prototype for welcome
    void sid(); // Function prototype for sid
    

    printf("Enter a number: ");
    scanf("%d", &chai);

    if (harsh(chai)) {
        printf("%d is a prime number.\n", chai);
    } else {
        printf("%d is not a prime number.\n", chai);
    }
    welcome(); // Function to display welcome message`
    sid(); // Function to greet Sid
    float result = sum(5.6, 10.8); // Example of calling the sum function, though its result is not used
    printf("Calling from main %d\n", result); // Display the result of the sum function
    return 0;
}

int harsh(int ing) {
    if (ing<= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= ing/2; i++) {
        if (ing % i == 0) return 0; // n is divisible by i, hence not prime
    }
    return 1; // n is prime
}

void welcome() {
    printf("Welcome to the Prime Number Checker!\n");
    float welresult = sum(5.5, 10.8); // Example of calling the sum function, though its result is not used
    printf("Welcome result %d\n", welresult); // Display the result of the sum function
}

void sid(){
    printf("Hello, Sid!\n");
}

float sum(float a, float b) {
    return a + b; // Function to return the sum of two integers
}