#include <stdio.h>

/*
típus név(paraméterek) {
    blokk
}
*/

int negyzetre_emel(int szam) {
    return szam * szam;
}

int hatvanyozas(int a, int b) {
    int vissza = a;
    for(int i = 1; i < b; i ++) {
        vissza = vissza * a;
    }
#
    return vissza;
}

/* kiszámolja egy negatív szám abszolúlt értékét */
int my_abs(int a) {
    if ( a < 0) {
        a = a * -1;
    }
    return a;
}

int main() {

    int ertek = 0;
    ertek = negyzetre_emel(4);

    printf("4 * 4 = %d\n", ertek);

    ertek = hatvanyozas(2, 8);

    printf("2 * 8 = %d\n", ertek);

    ertek = hatvanyozas(12, 7);

    printf("12 * 7 = %d\n", ertek);

    printf("abs(%d) = %d\n", -5, my_abs(-5));

    printf("3 a négyzeten: %d\n", negyzetre_emel(3));
    int negyzet = 0;
    int szam = 3;
    int vegeremeny = negyzetre_emel(szam);
    vegeremeny = negyzetre_emel(negyzetre_emel(3));
    printf("3 a négyzeten: %d\n", vegeremeny);

    /*
    // MarioV1
    int m = 0;
    printf("magassag: ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    // MarioV2
    printf("magassag: ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m-i; j++) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", i);
        if(i == 5) {
            break;
        }
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        if(i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    /* írjuk ki 10-ig az összes páros 
    számot a continue felhasználásával 


    for(int i = 1; i < 11; i++) {
        if(i % 2 == 1) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n"); */

    return 0;
}