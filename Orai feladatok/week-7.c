#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int osszead(int a, int b) 
{
    return a + b;
}

void kiir(int a, int b) 
{
    printf("%d", a + b);
}

void beolvasas(int a) 
{
    // ide kell írni...
}

struct Pont 
{
    int x;
    int y;
};

struct Pont holvanapirospont() 
{
    struct Pont pirospont;
    pirospont.x = 100;
    pirospont.y = 150;

    return pirospont;
}

int main(int argc, char *argv[]) 
{

    struct Pont pirospont = holvanapirospont();

    printf("%d %d\n", pirospont.x, pirospont.y);

    printf("Argumentumok száma: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    if (argc == 3) {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int c = a + b;

        printf("a + b = %d\n", c);
    }

    // string műveletek és tömbök minta feladat

    char text1[20] = "Hello ";
    char nev[20] = "Pista";


    int text1_hossz = strlen(text1);
    int nev_hossz = strlen(nev);

    char szoveg[40] = "";

    for(int i = 0; i < text1_hossz;i++) {
        szoveg[i] = text1[i];
    }

    for(int i = 0; i < nev_hossz;i++) {
        szoveg[text1_hossz + i] = nev[i];
    }

    printf("%s%s\n", text1, nev);

    printf("%s\n", szoveg);

    // véletlen szám
    // shuffle

    srand(time(NULL));
    int r = rand();
    printf("random szám: %d\n", r);

    printf("1 és 10 között random szám: %d\n", r % 10);

    int a, b;

    printf("kérek két számot: a b\n");
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);

    // /*
    //     minta ZH
    // */

    // int kisbetu = 0;
    // int nagybetu = 0;
    // int szokoz = 0;
    // int szamjegy = 0;

    // char szoveg[255] = "";
    // do {
    //     printf("Szöveg (vége: *): ");
    //     fgets(szoveg, 255, stdin);

    //     for(int i = 0; i < strlen(szoveg); i++) 
    //     {
    //         if(szoveg[i] == ' ') 
    //         {
    //             szokoz++;
    //         }
    //         if ((int)szoveg[i] >= 48 && (int)szoveg[i] <= 57) 
    //         {
    //             szamjegy++;
    //         }
    //         if ((int)szoveg[i] >= 97 && (int)szoveg[i] <= 122) 
    //         {
    //             kisbetu++;
    //         }
    //         if ((int)szoveg[i] >= 65 && (int)szoveg[i] <= 90) 
    //         {
    //             nagybetu++;
    //         }
    //     }

    // } while(strcmp(szoveg,"*\n"));

    // printf("Kisbetűk száma:   %d\n", kisbetu);
    // printf("Nagybetűk száma:  %d\n", nagybetu);
    // printf("Számjegyek száma: %d\n", szamjegy);
    // printf("Szóközök száma:   %d\n", szokoz);

    return 0;
}