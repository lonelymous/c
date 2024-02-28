#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t t;
    struct tm *current_time;

    time(&t);
    current_time = localtime(&t);

    // Extract day of the week
    int day_of_week = current_time->tm_wday;

    // Define an array of weekdays
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Print the current day
    printf("Today is %s\n", days[day_of_week]);

    return 0;
}
