#include<stdio.h>

int main() {

    // gép találja ki a számot, amire gondoltam, 1 és 10 között.

    int szam = 0;
    int a = 10;
    int b = 1;
    int gepszam = (a + b) / 2;
    printf("Számkitalálós feladat, gondolj egy számra 1 és 10 között.\n");
    do {
        printf("A szám amire gondoltál az %d, ha kisebb írj -1et ha nagyobb 1et ha annyi 0át\n", gepszam);
        scanf("%d", &szam);
        if (szam == -1) {
            a = gepszam;
            gepszam = (a + b) / 2;
        } else if(szam == 1) {
            b = gepszam;
            gepszam = (a + b) / 2;  
        }
        
    } while(szam != 0);

    printf("A szám amire gondoltál az a %d\n", gepszam);

}