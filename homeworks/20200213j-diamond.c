#include<stdio.h>

int main()
{
    int n;

    printf("Add meg a gyémánt méretét: ");
    scanf("%d", &n);

    if(n<=0 || n%2==0)
    {
        printf("Hibas méret! Kérem adjon meg egy pozitív páratlan számot.\n");
        return 1;
    }

    int i, j;

    for(i=1; i<=n; i+=2)
    {
        for(j=0; j<(n-i)/2; j++)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=n-2; i>=1; i-=2)
    {
        for(j=0; j<(n-i)/2; j++)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}