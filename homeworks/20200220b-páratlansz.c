#include<stdio.h>

int main()
{
    int n, i;
    
    printf("Adj meg egy poziív egyész mszámot,\nn = ");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {
        if(i%2!=0)
        {
            printf("Páratlan számok visszafelé: ");
            printf("%d \n", i);
        }

    }

    return 0;
}