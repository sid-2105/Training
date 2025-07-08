#include <stdio.h>
void callByValue(int a) {
    a = 20;
}

void callByReference(int *a) {
    *a = 20;    
}

int main() {
    int num = 10;
    // printf("Before callByValue: %d\n", num); 
    // int result = callByValue(num);
    // printf("After callByValue: %d\n", num); 
    printf("Before callByReference: %d\n", num);
    callByReference(&num);
    printf("After callByReference: %d\n", num);
    return 0;
}

