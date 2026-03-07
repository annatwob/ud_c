#include<stdio.h>

int min(int t[], int size)
{
    int min=t[0];

    for(int i=1; i<size; i++)
    {
        if(t[i] < min)
        {
            min=t[i];
        }
    }

    return min;
}

int max(int t[], int size)
{
    int max=t[0];

    for(int i=1; i<size; i++)
    {
        if(t[i] > max)
        {
            max=t[i];
        }
    }

    return max;
}

int main()
{
    int t[]={7, 2, 9, 4, 1, 5};

    int size=sizeof(t)/sizeof(t[0]);

    printf("Legkisebb elem: %d\n",min(t, size));
    printf("Legnagyobb elem: %d\n",max(t, size));

    return 0;
}