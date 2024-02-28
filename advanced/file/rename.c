#include <stdio.h>

int main() {
    // Specify the old and new file names
    char oldName[] = "oldfile.txt";
    char newName[] = "newfile.txt";

    // Attempt to rename the file
    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully.\n");
    } else {
        // Print an error message if renaming fails
        perror("Error renaming file");
    }

    return 0;
}
