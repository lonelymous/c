#include <stdio.h>

// 
int fibonacci(int n) {
    // Ha az n kissebb vagy egyenlő 1-el visszatér n-el
    if (n <= 1) {
        return n;
    }
    
    //Mivel n nagyobb mint 1 ezért elkezdi csökkenteni az n-t és újra meghívja önmagát
    //mikor visszakapja az n-t kiírja a számokat
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d \n", fibonacci(i));
    }

    return 0;
}
