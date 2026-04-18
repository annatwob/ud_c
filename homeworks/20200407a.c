#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct adat{
    int min;
    int max;
    double atlag;

}adat;

adat getadat(){
    adat a;
    a.min;
    a.max;
    a.atlag;

    return a;
}

adat asd(int tomb[], int meret)
{
    adat a;
    int osszeg = 0;

    a.min=tomb[0];
    a.max=tomb[0];

    for(int i=0; i<meret; i++)
    {
        if(tomb[i]<a.min)
        {
            a.min=tomb[i];
        }

        if(tomb[i]>a.max)
        {
            a.max=tomb[i];
        }
        osszeg += tomb[i];
    }
    a.atlag = (double)osszeg / meret;

    return a;
}

int main()
{
    int tomb[10];
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

    adat b = asd(tomb, 10);

    printf("Legkisebb elem: %d\n", b.min);
    printf("Legnagyobb elem: %d\n", b.max);
    printf("Az eredmeny: %f\n", b.atlag);
    
    return 0;
}