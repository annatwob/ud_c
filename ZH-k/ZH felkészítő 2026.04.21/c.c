#include<stdio.h>

#define MAX 4000000

int main()
{
    int a = 1;
    int b = 2;

    int total = 0;

    while(1)
    {
        if(a >= MAX)
        {
            break;
        }
        //else: 
        if(a % 2 == 1)
        {
            total+=a;
            //printf("%d ", a);
        }
        int tmp = a + b;
        a = b; 
        b = tmp;
    }

    printf("%d ", total);

    return 0;
}