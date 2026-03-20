#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

int main(int s, char *c[]) {
    if (s != 3) 
    {
        printf("Hiba! Két paramétert (számot) kell megadni!\n");
        return 1;
    }

    int a = atoi(c[1]);
    int b = atoi(c[2]);

    int eredmeny = sum(a, b);

    printf("%d\n", eredmeny);
/*  ./a.out 20 5
            25
*/
    return 0;
}