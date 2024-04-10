#include <stdio.h>
#include <time.h> // A rendszer óráját és dátumát kéri le és az azokhoz tartozó eszközöket.

int main() {
    // Get current time
    time_t t;
    struct tm *info;
    time(&t);
    info = localtime(&t);

    // Print the current time
    // Kiíratáskor kerekíteni kell az időt.
    printf("Current time: %02d:%02d:%02d\n", info->tm_hour, info->tm_min, info->tm_sec);

    return 0;
}
