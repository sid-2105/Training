#include <stdio.h>

int main(){
    // int arr[20];
    // for(int i = 0; i < 20; i++){
    //     arr[i] = i * 2; 
    // }

    // printf("Array elements:\n");
    // for(int i = 0; i < 20; i++){
    //     printf("%d ", arr[i]);
    // }

    int arr[4][2];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            arr[i][j] = i + j;
        }
    }
    printf("\n2D Array elements:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}