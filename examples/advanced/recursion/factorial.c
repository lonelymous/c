#include <stdio.h>

// 
int factorial(int n) {
    // Leellenőrzi hogy az n az 0 vagy 1 értéke van-e ha igen akkor visszatér az 1-el
    if (n == 0 || n == 1) {
        return 1;
    }

    // Ha az n nagyobb mint 1, akkor jut el ide, majd meghívja ismét önmagát,
    // mikor már 1-el tér vissza összeszorozza visszamenőleg az értékeket
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    
    return 0;
}