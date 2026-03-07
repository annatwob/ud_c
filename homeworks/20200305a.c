#include<stdio.h>

int is_sorted(int t[], int size)
{
    if(size == 0)
    {
        return 1;
    }

    for(int i=0; i<size-1; i++)
    {
        if(t[i] > t[i+1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int t[] = {1, 3, 7, 9, 15, 20};
    int size = sizeof(t)/sizeof(t[0]);
    
    if(is_sorted(t, size))
    {
        printf("A tomb rendezett.\n");
    }
    else
    {
        printf("A tomb nem rendezett.\n");
    }

    return 0;
}