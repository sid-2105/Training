#include <stdio.h>
 int main(){
    printf("hey i am passing control to harsh function\n");
    harsh();
    printf("control returned to main function\n");
    int result = sum(5, 10);
    printf("The sum of 5 and 10 is: %d\n", result);
    return 0;
 }

 harsh(){
    printf("Hello, Harsh!\n");
 }

 int sum(int a, int b) {
    return a + b;
 }

 