#include <stdio.h>
int main()
{
    // int a = 10;
    // while(a<0){
    //     printf("%d\n",a);
    //     a++; //a=a+1
    // }

    // do
    // {
    //     printf("%d\n", a);
    //     a++;
    // } while (a < 0);


    for(int i=0;i<=5;i++){ //rows
        for(int j=0;j<i;j++){ //columns
            printf("%d ", j+1);
        }
        printf("\n");
    }

    // while(1){
    //     printf("Infinite loop\n");
    //     break; // Uncomment this line to exit the infinite loop
    // }

    return 0;
}