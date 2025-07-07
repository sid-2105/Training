#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void display(int arr[], int n);
int insert(int arr[], int n, int pos, int value);
int delete(int arr[], int n, int pos);
int search(int arr[], int n, int value);

int main() {
    int arr[MAX_SIZE], n = 0, choice, pos, value, result;

    printf("Enter initial number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while(1) {
        printf("\nArray Operations Menu:\n");
        printf("1. Display\n2. Insert\n3. Delete\n4. Search\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                display(arr, n);
                break;
            case 2:
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                n = insert(arr, n, pos, value);
                break;
            case 3:
                printf("Enter position to delete (0 to %d): ", n-1);
                scanf("%d", &pos);
                n = delete(arr, n, pos);
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);
                result = search(arr, n, value);
                if(result != -1)
                    printf("Value found at position %d\n", result);
                else
                    printf("Value not found\n");
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

void display(int arr[], int n) {
    printf("Array elements: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int insert(int arr[], int n, int pos, int value) {
    if(n >= MAX_SIZE) {
        printf("Array is full!\n");
        return n;
    }
    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return n;
    }
    for(int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = value;
    printf("Inserted %d at position %d\n", value, pos);
    return n+1;
}

int delete(int arr[], int n, int pos) {
    if(n <= 0) {
        printf("Array is empty!\n");
        return n;
    }
    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return n;
    }
    printf("Deleted %d from position %d\n", arr[pos], pos);
    for(int i = pos; i < n-1; i++)
        arr[i] = arr[i+1];
    return n-1;
}

int search(int arr[], int n, int value) {
    for(int i = 0; i < n; i++)
        if(arr[i] == value)
            return i;
    return -1;
}