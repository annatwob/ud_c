/* 407a */

#include<stdio.h>
#include<stdlib.h>

typedef struct Elemek {
    int min;
    int max;
    double avg;
} Elemek; 

Elemek elemez(int n, int tomb[]) {
    Elemek result;

    result.min = tomb[0];
    result.max = tomb[0];
    result.avg = 0;

    for(int i = 0; i < n; i++) {
        if(tomb[i] < result.min) {
            result.min = tomb[i];
        }
        if(tomb[i] > result.max) {
            result.max = tomb[i];
        }
        result.avg = result.avg + tomb[i];
    }

    result.avg = result.avg / n;

    return result;
}

int main() {
    srandom(42);
    int tomb[10] = {0};

    for(int i = 0; i < 10; i++) {
        tomb[i] = rand() % 90 + 10;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    Elemek result = elemez(10, tomb);

    printf("Min: %d Max: %d Avg: %lf\n", result.min, result.max, result.avg);

    return 0;
}


/* 326d */

/*A) verzió

Írjunk programot, ami egy adott intervallumon generál N db véletlen számot.

Példa:

Hány db random számot kérsz?
5
Alsó határ: 1
Felső határ (zárt intervallum): 90

A generált számok: 7 23 88 45 65
A feladat általánosítva lett, vagyis minden paramétert a felh.-tól kérünk be.

Itt a kimenetben még lehetnek azonos számok.*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    srandom(100);
    int n = 0;
    int min = 0;
    int max = 0;
    int tomb[1000] = {0};
    printf("Hány db random számot kérsz? ");
    scanf("%d", &n);
    printf("Alsó határ: ");
    scanf("%d", &min);
    printf("Felső határ: ");
    scanf("%d", &max);

    int gdb = 0;
    while(n > gdb) {
        int szam = rand() % (max-min+1) + min;
        int belerakjuk = 1;

        for(int i = 0; i < gdb; i++) {
            if (tomb[i] == szam) {
                belerakjuk = 0;
            }
        }
        if(belerakjuk == 1) {
            tomb[gdb] = szam;
            gdb = gdb + 1;
        }
    }

    /*for(int i = 0; i < n; i++) {
        int szam = rand() % (max-min+1) + min;
        tomb[i] = szam;
    }*/

    printf("Rendezetlen számok: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    // tomb rendezes növekvő sorrendbe B) feladat BUBORÉK RENDEZÉS
    // Két egymásba ágyazott for ciklus
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(tomb[i] < tomb[j]) {
                int tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
    }

    printf("A generált számok: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");


}

/* 409c */

#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fajl = fopen("input.txt", "r");

    if(fajl == NULL) {
        printf("Nem létezik a fájl\n");
        return 1;
    } else {
        printf("Létezik a fájl\n");
    }

    char *sor;
    ssize_t nread;
    size_t len = 0;
    int sorokszama = 0;
    while((nread = getline(&sor, &len, fajl)) != -1) {
        sorokszama++;
        printf("Beolvastuk ezt a sort: %s, aminek a hossza: %zd %zd\n", sor, nread, len);
    }
    printf("\n");
    printf("Sorok száma: %d\n", sorokszama);
    free(sor);
    return 0;
}