#include<stdio.h>
#include<stdlib.h>

int hight_diff(int t[], int size)
{
    int sum=0;

    for(int i=0; i<size-1; i++)
    {
        sum+=abs(t[i]-t[i+1]);
    }

    return sum;
}

int main()
{
    int t[]={2, 1, 0, 2, 4};
    int size=sizeof(t)/sizeof(t[0]);

    int eredmeny = hight_diff(t, size);

    printf("A magasaagkulonbsegek osszege: %d\n",eredmeny);

    return 0;
}