#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double osszeg(int tomb[], int size)
{
    int osszeg=0;
    for(int i=0; i<size; i++)
    {
        osszeg+=tomb[i];
    }
    return osszeg;
}

void asd(int tomb[], int *min, int *max, int meret)
{
    *min=tomb[0];
    *max=tomb[0];

    for(int i=0; i<meret; i++)
    {
        if(tomb[i]<*min)
        {
            *min=tomb[i];
        }

        if(tomb[i]>*max)
        {
            *max=tomb[i];
        }
    }
}

int main()
{
    int tomb[10];
    int min, max;
    double atlag;

    srand(10);

    for(int i=0; i<10; i++)
    {
        tomb[i]=rand()%90+10;
    }

    int elso=0;
    printf("A tomb elemei: ");
    for(int i=0; i<10; i++)
    { 
        if(elso == 0)
        {
            printf("%d ",tomb[i]);
            elso++;
        }
        else
        {
            printf(", %d",tomb[i]);
        }
       
    }
    printf("\n");

    asd(tomb, &min, &max, 10);
    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    double eredmeny=osszeg(tomb, 10);
    printf("Az eredmeny: %f\n", eredmeny/10);
    
    return 0;
}