#include <stdio.h>

int main() {
    // Specify the old and new file paths
    char oldPath[] = "old_directory/oldfile.txt";
    char newPath[] = "new_directory/newfile.txt";

    // Attempt to move (rename) the file
    if (rename(oldPath, newPath) == 0) {
        printf("File moved successfully.\n");
    } else {
        // Print an error message if moving fails
        perror("Error moving file");
    }

    return 0;
}
