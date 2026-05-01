#include<stdio.h>

#define CELLAK_SZAMA 600

int main()
{
    //0-zarva, 1-nyitva
    int cellak[CELLAK_SZAMA+1] = {0};

    for(int i=1; i<=CELLAK_SZAMA; i++)
    {
        for(int j=i; j<= CELLAK_SZAMA; j+=i)
        {
            if(cellak[j] == 0)
            {
                cellak[j]  = 1; //nyitja
            }
            else
            {
                cellak[j] = 0; //zarja
            }
        }
    }

    printf("Nyitott cellakL: ");
    int elso = 1;

    for(int i=1; i<=CELLAK_SZAMA; i++)
    {
        if(cellak[i] == 1)
        {
            if(!elso)
            {
                printf(", ");
            }
            printf("%d", i);
            elso = 0;
        }
    }
    printf("\n\n");

    printf("Onellenorzeshez: ");
    for(int i=1; i<=CELLAK_SZAMA; i++)
    {
        if(cellak[i] == 1)
        {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}