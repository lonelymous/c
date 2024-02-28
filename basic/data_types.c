#include <stdio.h>

int main() {
    // One character (1 byte)
    char charVar = 'A';
    // A string (array of characters)
    char stringVar[] = "Hello, World!";
    // Integer (4 bytes)
    int integerVar = 5;
    // Float (4 bytes)
    float floatVar = 3.14;
    // Double (8 bytes)
    double doubleVar = 3.14159265359;

    printf("Character: %c\n", charVar);
    printf("String: %s\n", stringVar);
    printf("Integer: %d\n", integerVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);

    return 0;
}
