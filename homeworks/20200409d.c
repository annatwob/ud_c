#include <stdio.h>

int main() {
    FILE *f;
    double szam, osszeg = 0.0;

    f = fopen("valos_szamok.txt", "r");
    if (f == NULL) 
    {
        printf("Hiba a fajl megnyitasakor!\n");
        return 1;
    }

    char sor[100];

    while (fgets(sor, sizeof(sor), f)) 
    {
        for (int i = 0; sor[i] != '\0'; i++) 
        {
            if (sor[i] == ',') 
            {
                sor[i] = '.';
            }
        }

        sscanf(sor, "%lf", &szam); //sscanf-stringbol adatokat olvas ki
        osszeg += szam;
    }

    fclose(f);

    printf("Az osszeg: %.20lf\n", osszeg);

    return 0;
}