#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Writing to a file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "Hello, file handling in C!\n");
    fclose(fp);

    // Reading from a file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("Read: %s", data);
    }
    fclose(fp);

    // Appending to a file
    fp = fopen("example.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(fp, "Appending a new line.\n");
    fclose(fp);

    // Removing a file
    if (remove("example.txt") == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Unable to delete the file.\n");
    }

    return 0;
}