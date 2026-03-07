#include<stdio.h>
#include<stdbool.h>

bool valid_triangle(double a, double b, double c)
{
    if(a<=0 || b<=0 || c<=0) //pozitivak-e az oldalak
    {
        return false;
    }

    if(a+b>c && a+c>b && b+c>a) //haromszogek ellenorzese
    {
        return true;
    }

    return false;
}

int main()
{
    double a, b, c;

    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    if(valid_triangle(a, b, c))
    {
        printf("A haromszog megszerkesztheto!\n");
    }
    else
    {
        printf("A haromszog nem megszerkesztheto!\n");
    }

    return 0;
}