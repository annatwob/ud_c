#include<stdio.h>

unsigned long long fibonacci(int a)
{
    if(a==0)
    {
        return 0;
    }

    if(a==1)
    {
        return 1;
    }

    unsigned long long x=0, y=0, temp;

    for(int i=2; i<=a; i++)
    {
        temp=x+y;
        x=y;
        y=temp;
    }

    return y;

}

int main()
{
    for(int i=0; i<=100; i++)
    {
        printf("%llu\n",fibonacci(i));
    }

    return 0;
}