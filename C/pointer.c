#include <stdio.h>

int main(){
    int *ptr;
    int *ptr2;
    ptr2=&ptr;
    int x = 10;
    ptr = &x; // Assign the address of x to ptr
    printf("Value of x: %d\n", *ptr); // Dereference ptr to get the value of x
    printf("Address of x: %p\n", (void*)&x); // Print the address of x
    printf("Address stored in ptr: %p\n", (void*)ptr); // Print the address stored in ptr
    printf("Size of pointer: %zu bytes\n", sizeof(ptr)); // Print the size of a pointer in bytes
    printf("Address of ptr2: %p\n", (void*)&ptr2); // Print the address of ptr2

    return 0;
}