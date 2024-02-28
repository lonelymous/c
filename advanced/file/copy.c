#include <stdio.h>

int main() {
    // Specify source and destination file names
    char sourceFilename[] = "source.txt";
    char destinationFilename[] = "destination.txt";

    // Open source file for reading in binary mode
    FILE *source = fopen(sourceFilename, "rb");
    if (source == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file for writing in binary mode
    FILE *destination = fopen(destinationFilename, "wb");
    if (destination == NULL) {
        perror("Error opening destination file");
        fclose(source);
        return 2;
    }

    // Copy content from source to destination
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    // Print a success message and close the files
    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
