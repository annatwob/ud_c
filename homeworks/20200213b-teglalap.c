#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;

    printf("Add meg a Teglalap oldal hosszat, h = ",h);
    scanf("%d",&h);
    printf("Add meg a Teglalap magassagat, m = ",m);
    scanf("%d",&m);

    int Terulet=h*m;
    int Kerulet=2*(h+m);

    printf("A Teglalap terulete: %d * %d = %d\n", h, m, Terulet);
    printf("A Teglalap kerulete: 2*(%d + %d) = %d\n", h, m, Kerulet);
    return 0;
}
