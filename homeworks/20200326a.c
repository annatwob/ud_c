#include<stdio.h>
#include<stdlib.h>

int abs(int x)
{
    if(x < 0)
    {
        return -x;
    }

    return x;
}

void copy_abs(int og[], int cp[], int n)
{
    for(int i=0; i<n; i++)
    {
        cp[i]=abs(og[i]);
    }
}

void tomb_write(int t[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d", t[i]);

        if(i < n-1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Hany darab szamot szeretnel bevinni?\n");
    scanf("%d",&n);

    int og[n];
    int cp[n];

    for(int i=0; i<n; i++)
    {
        printf("%d. szam: ", i+1);
        scanf("%d",&og[i]);
    }

    copy_abs(og, cp, n);

    printf("\nA bevitt szamok abszolutertekei: ");
    tomb_write(cp, n);

    printf("A megadott szamok: ");
    tomb_write(og, n);

    return 0;
}