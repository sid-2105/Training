#include <stdio.h>

int main(){
    int a=1,b=2,temp;
    printf("Before swap: a=%d, b=%d\n", a, b);
    // temp = a;
    // a = b;
    // b = temp;
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swap: a=%d, b=%d\n", a, b);
}