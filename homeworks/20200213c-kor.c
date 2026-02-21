#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r;

    printf("A kor sugara r =  ",r);
    scanf("%lf",&r);

    float terulet = M_PI*pow(r, 2);
    float kerulet = 2*M_PI*r;

    printf("A kor terulete: pi * %f ^ 2 = %f\n", r, terulet);

    printf("A kor kerulete: 2 * pi * %f = %f\n", r, kerulet);

    return 0;
}
