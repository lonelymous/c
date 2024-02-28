#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Read the existing PATH variable
    char* path = getenv("PATH");
    if (path == NULL) {
        printf("PATH variable not found\n");
        return 1;
    }

    // Append a new path to the existing PATH variable
    char new_path[] = "/usr/local/bin";
    size_t path_len = strlen(path);
    size_t new_path_len = strlen(new_path);
    size_t total_len = path_len + new_path_len + 2; // +2 for ':' and '\0'
    char* updated_path = malloc(total_len);
    if (updated_path == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    snprintf(updated_path, total_len, "%s:%s", path, new_path);

    // Set the updated PATH variable
    if (setenv("PATH", updated_path, 1) != 0) {
        printf("Failed to set the updated PATH variable\n");
        return 1;
    }

    // Print the updated PATH variable
    printf("Updated PATH: %s\n", getenv("PATH"));

    // Clean up
    free(updated_path);

    return 0;
}
