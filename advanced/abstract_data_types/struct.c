#include <stdio.h>

// Define a struct named "Person"
// A struct-al tudsz egy dologhoz több tulajdonságot is hozzárendelni, majd később ezekre külön hivatkozni.
// Itt csak a felépítését hozzuk létre, de ebből később bármennyit hozhatunk létre.
struct Person {
    char name[50];
    int age;
    double height;
};

int main() {
    // Declare a variable of type "Person"
    // Így hivatkozunk magára a struct-ra, meg kell adni hogy melyik struktúra alapján szeretnéd létrehozni,
    //majd ugyanúgy adni kell neki egy nevet amire hivatkozhatsz.
    struct Person person1;

    // Assign values to the struct members
    // Így tudunk értéket adni az adott struct változónak.
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 1.75;

    // Print the values of the struct members
    // Így tudjuk kiíratni az adott változó adatait.
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}