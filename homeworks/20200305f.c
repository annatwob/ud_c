#include<stdio.h>

void tomb(int t[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(i<size-1)
        {
            printf("%d, ",t[i]);
        }
        else
        {
            printf("%d", t[i]);
        }
    }

    printf("\n");
}

int main()
{
    int t[]={4, 7, 34, 23, 67};
    int size=sizeof(t)/sizeof(t[0]);
    
    tomb(t, size);

    return 0;
}