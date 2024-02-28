#include <stdio.h>

// Define an enum for days of the week
enum Days {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    // Declare a variable of type Days
    enum Days today;

    // Assign a value to the variable
    today = MONDAY;

    // Print the value of the variable
    printf("Today is %d\n", today);

    return 0;
}
