#include<stdio.h>

int main()
{
    int i, Sum=0;

    printf("Az ASCII tabla 32-től 126-ig: \n");
    for(i=32; i<=126; i++)
    {
        printf("%d: %c\n",i ,i); //%c-karakter, %d-tizedes
    }

    for(i='A'; i<='Z'; i++)
    {
        Sum+=i;   
    }

    printf("Az angol ábécé nagybetűihez tartozó ASCII értékek összege: %d\n",Sum);
    
    return 0;
}