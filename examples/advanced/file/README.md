## Fájlkezelés dokumentációja

Fájlkezelés: A C nyelv beépített eszközei a fájlok létrehozásához, olvasásához, írásához és kezeléséhez.
FILE típusú struktúrákat használunk a fájlok reprezentálására.

Példa: Fájl írása és olvasása
```c
void fileExample() {
    FILE *filePointer;
    char data[] = "Hello, World!";

    // Fájl írása
    filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        perror("Hiba a fajl megnyitasakor");
        exit(EXIT_FAILURE);
    }
    fprintf(filePointer, "%s", data);
    fclose(filePointer);

    // Fájl olvasása
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        perror("Hiba a fajl megnyitasakor");
        exit(EXIT_FAILURE);
    }
    char buffer[20];
    fscanf(filePointer, "%s", buffer);
    printf("Fajlbol olvasott adat: %s\n", buffer);
    fclose(filePointer);
}
```
