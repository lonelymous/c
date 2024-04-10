#include <stdio.h>

int main() {
    // File open for writing
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Writing data to the file
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is an example of writing into a file.\n");

    // Closing the file
    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}