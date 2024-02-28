#include <stdio.h>

// Define a struct named "Person"
struct Person {
    char name[50];
    int age;
    double height;
};

int main() {
    // Declare a variable of type "Person"
    struct Person person1;

    // Assign values to the struct members
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 1.75;

    // Print the values of the struct members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}