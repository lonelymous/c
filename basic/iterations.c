#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 5; i++) {  //Tipp: Ha így hozod létre az "i" változót, miután végzett a for megszűnik létezni az "i".
        printf("%d ", i);
    }
    printf("\n");
    int j = 0;
    // Addig fut amíg a while igaz.
    while (j < 3) {
        printf("While loop iteration %d\n", j + 1);
        j++;
    }
    int k=1;

    //Minden esetben lefut egyszer. Utána addig fut amíg a while igaz.
    do
    {
        printf("DoWhile loop iteration %d\n", k);
        k++;
    } while (k<1);
    
    return 0;
}
