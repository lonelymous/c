
## Rekurzió

Rekurzió: Egy folyamat, amely egy függvényben hívja önmagát.
A rekurzív függvényeknek egy alapvető esetük (base case) van, amely megszünteti a rekurziót.

[Példa](./recursion/)

## Pointerek dokumentációja

Pointer: Egy speciális típusú változó, ami memóriacímre mutat. A pointerek lehetővé teszik, hogy közvetlenül hivatkozzunk egy változóra az azt tároló memóriaterület címe alapján.

```c
void pointerExample() {
    int x = 10;
    int *ptr; // Pointer deklarációja

    ptr = &x; // Pointer inicializálása a változó memóriacímével

    printf("Ertek: %d\n", *ptr); // Dereferencing: A pointer által mutatott érték kiírása
}
```

## Fájlkezelés

Fájlkezelés: A C nyelv beépített eszközei a fájlok létrehozásához, olvasásához, írásához és kezeléséhez. FILE típusú struktúrákat használunk a fájlok reprezentálására.

[Példa](./file/readme.md)

## Absztrakt adat típusok

[Példa](./recursion/)
