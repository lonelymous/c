#include <stdio.h>
#include <time.h>

int main() {
    // Get current time
    time_t t;
    struct tm *info;
    time(&t);
    info = localtime(&t);

    // Print the current time
    printf("Current time: %02d:%02d:%02d\n", info->tm_hour, info->tm_min, info->tm_sec);

    return 0;
}
