#include<stdio.h>

int main()
{
    int n, i;
    
    printf("Adj meg egy egész számot, n =  ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
       if(i%4 == 0)
       {
            printf("%d\n", i);
       }
    }

    return 0;
}