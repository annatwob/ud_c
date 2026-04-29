#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle(int n, int tomb[])
{
    for(int i=n-1; i>0; i--)
    {
        int j=rand()%(i+1);

        int temp=tomb[i];
        tomb[i]=tomb[j];
        tomb[j]=temp;
    }
}

int main()
{
    srand(time(NULL));

    int t[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = sizeof(t) / sizeof(t[0]);

    printf("Eredeti: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",t[i]);
    }
    printf("\n");

    shuffle(n, t);

    printf("Kevert: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");


    return 0;
}