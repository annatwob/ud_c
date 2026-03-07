#include <stdio.h>

int indexof(int t[], int size, int value)
{
    for(int i = 0; i < size; i++)
    {
        if(t[i] == value)
            return i;
    }

    return -1;
}

int main()
{
    int t[] = {4, 7, 12, 5, 9};
    int size = sizeof(t) / sizeof(t[0]);

    int keresett = 8;

    int eredmeny = indexof(t, size, keresett);

    if(eredmeny >= 0)
    {
        printf("Az elem indexe: %d\n", eredmeny);
    }
    else
    {
        printf("Az elem nincs a tombben.\n")
    }

    return 0;
}