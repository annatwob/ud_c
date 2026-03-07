#include<stdio.h>

int constains(int t[],int size, int ertek)
{
    for(int i=0; i<size; i++)
    {
        if(t[i] == ertek)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int t[]={4, 7, 12, 5, 9};
    int size=sizeof(t)/sizeof(t[0]);

    int szam;

    printf("Adj meg egy szamot: ");
    scanf("%d",&szam);

    if(constains(t, size, szam))
    {
        printf("A szam szerepel a tombben.\n");
    }
    else
    {
        printf("A szam nem szerepel a tombben.\n");
    }

    return 0;
}