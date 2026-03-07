#include<stdio.h>
#include<stdlib.h>

void positive(int t[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(t[i] < 0)
        {
            t[i]=abs(t[i]);
        }
    }
}

void tomb(int *t, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d",t[i]);
        if(i < size-1)
        {
            printf(", ");
        }
    }
    
    printf("\n");
}

int main()
{
    int t[]={4, -7, 10, -3, 5, -12};
    int size=sizeof(t)/sizeof(t[0]);

    printf("Tomb az eljaras elott: \n");
    tomb(t,size);

    positive(t,size);

    printf("Tomb az eljaras utan:\n");
    tomb(t,size);
    
    return 0;
}