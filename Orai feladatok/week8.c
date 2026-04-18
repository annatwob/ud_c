#include<stdio.h>

typedef struct Pont {
    int x;
    int y;
} Pont;

typedef struct Diak {
    char* name;
    char* neptuncode;
    int birthdate;
} Diak;

Diak getDiak() {
    /* Bizniccc logik */
    Diak adottdiak;
    adottdiak.name = "József";
    adottdiak.neptuncode = "ABC123";
    adottdiak.birthdate = 2002;

    return adottdiak;
}

Pont getPont() {
    Pont eger;
    eger.x = 100;
    eger.y = 200;
    return eger;
}

int main() {
    Pont eger = getPont();
    printf("Egér pontja: %d %d\n", eger.x, eger.y);

    Diak diak = getDiak();
    printf("Diák neve: %s, code: %s, születési dátuma: %d\n", diak.name, diak.neptuncode, diak.birthdate);
}


///////

#include<stdio.h>
#include<stdlib.h>

void feltolt(const int n, int tomb[]) {
    for(int i = 0; i < n; i++) {
        int r = rand() % 10 + 10;
        tomb[i] = r;
    }
}

int main() {
    srandom(42);
    int n = 1000;
    int tt[1000] = {0};

    feltolt(n, tt);

    int ertekek[10] = {0};

    for(int i = 0; i < n; i++) {
        ertekek[ tt[i] - 10 ] = ertekek[ tt[i] - 10 ] + 1;
    }

    for(int i = 0; i < 10; i++) {
        printf("A %d-es előfordulása: %d\n", i+10, ertekek[i]);
    }
}

///////

#include<stdio.h>

int main() {
    int szam = 10;
    int legnagyobbszam = 0;
    int osztokszama = 0;

    int aktoszto = 0;

    printf("Kérem adja meg a számot: ");
    scanf("%d", &szam);

    for(int i = 1; i <= szam; i++) {
        aktoszto = 0;
        for(int j = 1; j <= i; j++) {
            if (i % j == 0) {
                aktoszto++;
            }
        }
        if (aktoszto > osztokszama) {
            osztokszama = aktoszto;
            legnagyobbszam = i;
        }
    }

    printf("A legtöbb osztóval rendelkező szám: %d\n", legnagyobbszam);
    printf("A %d osztóinak száma: %d\n", legnagyobbszam, osztokszama);
}


// DEBUG //

#include<stdio.h>

int main() {
    int szam = 10;
    int legnagyobbszam = 0;
    int osztokszama = 0;

    int aktoszto = 0;

    printf("Kérem adja meg a számot: ");
    scanf("%d", &szam);

    printf("Ezt a számot adta meg a felhasználó %d\n", szam);

    for(int i = 1; i <= szam; i++) {
        printf("Aktuális szám(tehát az I értéke): %d\n", i);
        
        aktoszto = 0;
        for(int j = 1; j <= i; j++) {
            printf("aktuális osztók száma %d. %d osztható e %d: ", aktoszto, i, j);
            if (i % j == 0) {
                printf("igen\n");
                aktoszto++;
            } else {
                printf("nem\n");
            }
        }
        printf("Tehát az %d osztóinak száma: %d.\n", i, aktoszto);
        if (aktoszto > osztokszama) {
            osztokszama = aktoszto;
            legnagyobbszam = i;
        }
    }

    printf("A legtöbb osztóval rendelkező szám: %d\n", legnagyobbszam);
    printf("A %d osztóinak száma: %d\n", legnagyobbszam, osztokszama);
}