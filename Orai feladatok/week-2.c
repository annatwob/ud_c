#include<stdio.h>

int main() {

    printf("Első for ciklus\n");

    for(int i = 0;i < 5;i++) {
        printf("ciklus számláló: %d\n", i);
    }

    printf("Második for ciklus\n");

    for(int i = 5;i > 0;i--) {
        printf("ciklus számláló: %d\n", i);
    }

    printf("Harmadik for ciklus\n");

    for(int i = 10;i < 5;i++) {
        printf("ciklus számláló: %d\n", i);
    }

    printf("Harmadik for ciklus\n");


    for(int i = 0;i < 10;i = i + 2) {
        printf("ciklus számláló: %d\n", i);
    }

    /*for(;;) {
        printf("végtelen ciklus");
        break;
    }*/

    printf("while ciklus1\n");

    int i = 0;
    while(i < 5) {
        printf("ciklus számláló: %d\n", i);
        i++;
    }

    printf("while ciklus2\n");

    i = 0;
    while(1==1) {
        printf("ciklus számláló: %d\n", i);
        i++;
        if(i >= 5) {
            break;
        }
    }

    printf("do while\n");
    i = 100;
    do {
        printf("ciklus számláló: %d\n", i);
        i ++;
    } while(i < 10);

    /* 1. írjatok ki a számokat 10-től 100-ig for és while ciklussal IS */

    for (int i = 10; i < 101;i++) {
        printf("%d\n", i);
    }

    /* 2. írjátok ki az első 10 fibonacci számot for és while Xi = Xi-2 + Xi-1 // 0 1 1 2 3 5 */
    
    int x1 = 0;
    int x2 = 1;

    for(int i = 0; i < 10; i++) {
        int x = x2 + x1;
        printf("fibonacci: %d\n", x);
        x2 = x1;
        x1 = x;
    }

    for(int i = 0;i < 5;i++) {
        printf("ciklus számláló: %d\n", i);
    }

    i = 0;
    while(i < 5) {
        printf("ciklus számláló: %d\n", i);
        i++;
    }

    /* 2. beolvasás X alkalommal */

    int n = 0;

    int a1 = 0;
    int a2 = 0;
    int a3 = 0;

    printf("fájl beolvasása\n");
    scanf("%d", &n);
    for(int i = 0;i < n;i++) {
        scanf("%d %d %d", &a1, &a2, &a3);
        if(a1>a2 && a1>a3) printf("legnagyobb értéke: %d\n", a1);
        if(a2>a1 && a2>a3) printf("legnagyobb értéke: %d\n", a2);
        if(a3>a1 && a3>a2) printf("legnagyobb értéke: %d\n", a3);
    }

    /* 3. beolvasás és max érték kiválasztása */

    /* 4. tipus feladat: beolvasás végjelig. DO WHILE. olvassunk be egy számot, 
    ha 0 akkor hagyjuk abba a futatást, ha nem nulla akkor számoljuk, 
    hogy osszesen hány darab számot adtunk meg, írjuk ki hány darab számot adtunk megs */

    int szam = 0;
    int db = 0;

    printf("Adj meg számokat végjel (0)");

    do {
        scanf("%d", &szam);
        if (szam != 0) {
            db = db + 1;
        }

    } while(szam != 0);

    printf("Megadott számok db: %d\n", db);


    return 0;
}