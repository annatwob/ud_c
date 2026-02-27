#include<stdio.h>

int legnagyobb_oszto(int n)
{
    if(n<=1)
    {
        return 0;
    }

    for(int i=n/2; i>=1; i--)
    {
        if(n%i==0)
        {
            return i;
        }
    }

    return 1;
}

int main()
{
    for(int i=1; i<=50; i++)
    {
        printf("%d legnagyobb osztoja: %d\n",i, legnagyobb_oszto(i));
    }

    return 0;
}