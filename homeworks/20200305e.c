#include<stdio.h>

int is_even(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_odd(int n)
{
    return !is_even(n);
}

int main()
{
    int n;

    printf("Adj meg egy egesz szamot: ");
    scanf("%d",&n);

    if(is_even(n))
    {
        printf("A szam paros.\n");
    }
    else
    {
        printf("A szam nem paros.\n");
    }

    if(is_odd(n))
    {
        printf("A szam paratlan.\n");
    }
    else
    {
        printf("A szam nem paratlan.\n");
    }

    return 0;
}