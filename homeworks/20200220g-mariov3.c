#include<stdio.h>
int main()
{
    int  i,j;
    int m;

    printf("Add meg a derkszogu haromszog magassagat:");
    scanf("%d",&m);

    for(i=1; i<=m; i++)
    {
        //elso haromszog
        for(j=0; j<m-i; j++)
        {
            printf(" ");
        }

        for(j=0; j<i; j++)
        {
            printf("#");
        }

        printf("  ");

        //masodik haromszog
        for(j=0; j<i; j++)
        {
            printf("#");
        }
       
        for(j=0; j<=m-i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}