#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        fprintf(stderr, "Hasznalat: %s <fajlnev>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) 
    {
        perror("Hiba a fajl megnyitasakor");
        return 1;
    }

    int max_hossz = -1;
    int max_sor_szama = 0;
    
    int aktualis_hossz = 0;
    int aktualis_sor_szama = 1;
    int c;

    while ((c = fgetc(file)) != EOF) 
    {
        if (c == '\n') 
        {
            if (aktualis_hossz > max_hossz) 
            {
                max_hossz = aktualis_hossz;
                max_sor_szama = aktualis_sor_szama;
            }
            aktualis_sor_szama++;
            aktualis_hossz = 0;
        } else 
        {
            aktualis_hossz++;
        }
    }

    if (aktualis_hossz > 0) 
    {
        if (aktualis_hossz > max_hossz) 
        {
            max_hossz = aktualis_hossz;
            max_sor_szama = aktualis_sor_szama;
        }
    }

    if (max_hossz != -1) 
    {
        printf("%d %d\n", max_sor_szama, max_hossz);
    }

    fclose(file);
    
    return 0;
}