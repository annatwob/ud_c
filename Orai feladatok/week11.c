#include<stdio.h>
#include <string.h>
#include <stdlib.h>


/*
Ha felsoroljuk a 10-nél kisebb pozitív egész számokat, melyek 3-nak vagy 5-nek a többszörösei, akkor a köv. számokat kapjuk: 3, 5, 6 és 9. Ezek összege 23.

Állapítsuk meg azon 1000-nél kisebb számok összegét, melyek 3-nak vagy 5-nek a többszörösei.
*/

// 0-val térünk vissza, ha osztható 1 el ha nem osztható 3mal vagy 5el

/*
int oszthato(int n) {
    if(n % 3 == 0 || n % 5 == 0) {
        return 0;
    } else {
        return 1;
    }
}
if (n == 1) {
int feladat1(int n) {
    int vissza = 0;
    if (oszthato(n) == 0) {
        vissza = n;
    }string
    n = n - 1;
    if (n == 1) {
        return 0;
    }
    return vissza + feladat1(n);
}

int main() {
    printf("visszatérési érték: %d\n", oszthato(6));
    printf("visszatérési érték: %d\n", oszthato(4));
    int osszeg = 0;

    for(int i = 0;i < 1000;i++) {
        if(oszthato(i) == 0) {
            osszeg = osszeg + i;
        }
    }

    printf("első 1000 szám összege, amely osztható 3mal vagy 5vel: %d\n", osszeg);

    printf("első 1000 szám összege rekurzívan, amely osztható 3mal vagy 5vel: %d\n", feladat1(999));
}*/
/*
int main() {
    char nev[100] = ""; // "\0"
    char nev2[100] = ""; // "\0"
    printf("Kérek egy becenevet, szóköz nélkül: ");
    scanf("%s", nev);  // Zoli => "Zoli\0"
    printf("%s\n", nev);

    char *nev3;
    size_t  len, maxsize;

    maxsize = strlen(nev) + 1;
    printf("memória méret: %zu\n", maxsize);
    nev3 = malloc(sizeof(*nev3) * maxsize);
    stpcpy(nev3, nev);
    
    strcpy(nev2, nev);

    printf("%s\n", nev2);

    printf("Név másolás pointerrel: %s\n", nev3);

    char *nev4;
    nev4 = strdup(nev);

    printf("Név másolás pointerrel (strdup): %s\n", nev4);

    free(nev3);
    free(nev4);
}*/

/* 1 akkor erős, 0 akkor gyenge */

/*
int erospista(char *pwd) {
    int hossz = strlen(pwd);
    int kisbetu = 0;
    int nagybetu = 0;
    int szamjegy = 0;
    int speckarakter = 0;
    for(int i = 0; i < hossz; i++) {
        if(pwd[i] >= 'a' && pwd[i] <= 'z') {
            kisbetu++;
        }
        if(pwd[i] >= 'A' && pwd[i] <= 'Z') {
            nagybetu++;
        }
        if(pwd[i] >= '0' && pwd[i] <= '9') {
            szamjegy++;
        }
        if(pwd[i] == '.' || pwd[i] == ',' || pwd[i] == ';' || pwd[i] == ':') {
            speckarakter++;
        }
    }
    if(kisbetu > 0 && nagybetu > 0 && szamjegy > 1 && speckarakter > 0) {
        return 1;
    }
    return 0;
}

int main() {

    FILE *fajl = fopen("password.txt", "r");

    if(fajl == NULL) {
        printf("Nem létezik a fájl\n");
        return 1;
    } else {
        //printf("Létezik a fájl\n");
    }

    char *sor;
    ssize_t nread;
    size_t len = 0;
    int erosjelszavak = 0;
    while((nread = getline(&sor, &len, fajl)) != -1) {
        if(erospista(sor)) {
            erosjelszavak++;
        }
    }

    printf("%d\n", erosjelszavak);

    free(sor);
}*/
// 1 2 3
// 4 5 6
// 7 8 9


int main() {
    srand(1980);
    int matrix[3][3] = {{1, 2, 3}, {4,5,6}, {7,8,9}};
    printf("2.sor 2.oszlop értéke: %d\n", matrix[1][1]);
    printf("2.sor 3.oszlop értéke: %d\n", matrix[1][2]);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 100 + 50;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int min = matrix[0][0];
    int max = matrix[0][0];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(min > matrix[i][j]) {
                min = matrix[i][j];
            }
            if(max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }
    }
    printf("matrix min %d max %d \n", min, max);

    return 0;
}

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

// 0 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8 9



// 0 1 2
//--------
// 1 2 3 | 0
// 4 5 6 | 1
// 7 8 9 | 2
// [sor][oszlop]

typedef struct Matrix {
    int min;
    int max;
} Matrix; 


Matrix getminmax(int n,int m[5][5]) {
    Matrix ret;
    ret.min = m[0][0];
    ret.max = m[0][0];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(m[i][j] < ret.min) {
                ret.min = m[i][j];
            }
            if(m[i][j] > ret.max) {
                ret.max = m[i][j];
            }
        }   
    }
    return ret;
}

void kiir(int n,int matrix[5][5]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }   
        printf("\n");
    }
}

int main() {
    srandom(1980);
    int matrix[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matrix[i][j] = rand() % 90 + 10;
        }   
    }

    kiir(5, matrix);

    Matrix eredmeny = getminmax(5, matrix);
    printf("Legkisebb elem: %d\nLegnagyobb elem: %d\n", eredmeny.min, eredmeny.max);

}


#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("mozi.csv", "r");
    if(file==NULL) {
        printf("Nem sikerült megnyitni\n");
        return 1;
    }

    int ertek;
    int db = 0;
    char *sor;
    char *token;
    char *filmneve;
    size_t len = 0;
    while(getline(&sor, &len, file) != -1) {
        // sor = 9,2;A remény rabjai (1994);727260
        token = strtok(sor, ";");
        filmneve = strtok(NULL, ";");
        token = strtok(NULL, ";");
        ertek = atoi(token);
        if(ertek >= 500000) {
            printf("%s\n", filmneve);
            db++;
        }
    }

    printf("%d darab ilyen film található.\n", db);


    return 0;
}