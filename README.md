# C Programozási Nyelv

Ez a dokumentáció az alapvető információkat tartalmazza a C programozási nyelv használatához. 
A C egy erős típusú programozási nyelv, amely kifejezetten célzott a hatékonyságra és a rendszerprogramozásra.

## Változó Típusok

A C-ben a változóknak különböző típusai vannak, amelyek meghatározzák azoknak a tartalmazott értékek típusát és méretét. Néhány alapvető változó típus:

## Karaktereket tárol,
- **char:**   | 1 bájt |
## Egész számokat tárol:
- **short:**  | 2 bájt |
- **int:**    | 4 bájt |
- **long:**   | 8 bájt |
## Nem negatív egész számokat tárol:
- **unsigned short:** | 2 bájt |
- **unsigned int:**   | 4 bájt |
- **unsigned long:**  | 8 bájt |
## Lebegőpontos számokat tárol:
- **float:**   | 4 bájt |
- **double:**  | 8 bájt |

## I/O | Be- és Kimenet

A `scanf` és `printf` függvényeket használjuk a felhasználótól való bemenet beolvasására és kimenet kijelzésére.

[Példa](./basic/input_output.c)

## Iterációk | Ciklusok

Az iteráció a programozásban olyan folyamat, amely lehetővé teszi, hogy egy adott kódblokk ismételten végrehajtódjon, amíg egy bizonyos feltétel teljesül. C-ben három alapvető iterációs struktúra áll rendelkezésre:

### for

A **for** ciklus kifejezetten célzott a számlálóval vezérelt ismétlésekre. A struktúra a következőképpen néz ki:

```c
for (kezdeti_érték; feltétel; léptetés) {
    // kódblokk
}
```

- **kezdeti_érték:** Az inicializációs lépés, ahol egy számláló vagy változó kezdeti értéke adódik meg.
- **feltétel:** Az ismétlés feltétele. Amíg ez a feltétel igaz, a ciklus folytatódik.
- **léptetés:** A számláló vagy változó értékét itt változtatjuk meg, ez hajtódik végre minden ciklusvégén.

### while

A **while** ciklus addig ismétlődik, amíg egy adott feltétel igaz. A struktúra a következő:

```c
while (feltétel) {
    // kódblokk
}
```
- **feltétel:** Az ismétlés feltétele. Amíg ez a feltétel igaz, a ciklus folytatódik.

### do while

A **do while** ciklus szintén addig ismétlődik, amíg egy adott feltétel igaz. Azonban, a feltétel ellenőrzése a kódblokk végén történik, tehát legalább egyszer mindenképpen végrehajtódik.

```c
do {
    // kódblokk
} while (feltétel);
```
- **feltétel:** Az ismétlés feltétele. Amíg ez a feltétel igaz, a ciklus folytatódik.

## Elágazások

### if - else if - else

Az **if** utasítás segítségével ellenőrizhetjük egy feltétel igazságértékét, és csak akkor hajtódik végre a következő kódblokk, ha a feltétel teljesül. Az **else if** ágak további feltételeket adhatnak hozzá. Az **else** ág akkor hajtódik végre ha semmilyen más ágban nem teljesült a feltétel.

```c
if (feltétel1) {
    // kódblokk1
} else if (feltétel2) {
    // kódblokk2
} else if (feltétel3) {
    // kódblokk3
} else {
    // kódblokk4
}
```

### switch

A **switch** utasítás egy másik módja az elágazásnak, különösen akkor hasznos, amikor több lehetséges esetet kell kezelni.

```c
switch (kifejezés) {
    case érték1:
        // kódblokk1
        break;
    case érték2:
        // kódblokk2
        break;
    // további esetek
    default:
        // kódblokk alapértelmezett eset
}
```

## Include Direktívák

Az `#include` direktíva lehetővé teszi külső fájlok beolvasását a forráskódba. Néhány gyakran használt fájl:

- **stdio.h:** A standard bemenet és kimenet funkciókat tartalmazza (`printf`, `scanf` stb.).

- **stdlib.h:** Az általános könyvtár funkciókat tartalmazza (`malloc`, `free` stb.).

- **math.h:** Matematikai funkciókat tartalmazza (`sin`, `cos` stb.).

Példa:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kód itt

    return 0;
}
```
