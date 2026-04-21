#include<stdio.h>

//primszam ellenorzese
int prim(int szam)
{
    for(int i=2; i<=szam/2; i++)
    {
        if(szam % i == 0)
        {
            return 0; //nem prim
        }
    }
    return 1; //prim
}

int main()
{
    int n;

    printf("Kerem a szamot: ");
    scanf("%d", &n);

//Prímszámok kiírása
    int osszeg = 0;
    int elso=1;
    printf("Primszamok %d-ig: ", n);

    for(int i=2; i<=n; i++)
    {
        if(prim(i))
        {
            if(!elso)
            {
                printf(", ");
            }
            printf("%d ", i);
            elso=0;
            osszeg += i;
        }
    }
    printf("\nPrimszamok osszege: %d\n", osszeg);
    
//Osztók keresése 
    printf("Primszamok osszegenek osztoi: ");
    elso=1;
    for(int i=1; i<=osszeg; i++)
    {
        if(osszeg % i == 0)
        {
            if(!elso)
            {
                printf(", ");
            }
            printf("%d ", i);
            elso=0;
        }
    }
    printf("\n");

    return 0;
}