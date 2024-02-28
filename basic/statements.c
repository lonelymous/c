#include <stdio.h>

// switch statement
// a single expression with multiple possible values, and you want to execute different code blocks based on the specific value of that expression.
char* switchStatement(int day_of_week) {
    switch (day_of_week) {
        case 0:
            return "Sunday";
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        default:
            return "Invalid day";
    }
}

// if statement
// multiple conditions that may not be directly related to the value of a single expression. It's versatile and can handle complex branching logic.
char* ifStatement(int day_of_week) {
    if (day_of_week == 0) {
        return "Sunday";
    } else if (day_of_week == 1) {
        return "Monday";
    } else if (day_of_week == 2) {
        return "Tuesday";
    } else if (day_of_week == 3) {
        return "Wednesday";
    } else if (day_of_week == 4) {
        return "Thursday";
    } else if (day_of_week == 5) {
        return "Friday";
    } else if (day_of_week == 6) {
        return "Saturday";
    } else {
        return "Invalid day";
    }
}

int main() {
    int num;

    printf("Enter a number\t(0-6): ");
    scanf("%d", &num);

    printf("Switch statement: %s\n", switchStatement(num));
    printf("If statement: %s\n", ifStatement(num));

    return 0;
}
