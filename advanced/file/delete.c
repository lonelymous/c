#include <stdio.h>

int main() {
    // Specify the file name to be deleted
    char filename[] = "file.txt";

    // Attempt to delete the file
    if (remove(filename) == 0) {
        printf("%s deleted successfully.\n", filename);
    } else {
        // Print an error message if deletion fails
        perror("Error deleting file");
    }

    return 0;
}
