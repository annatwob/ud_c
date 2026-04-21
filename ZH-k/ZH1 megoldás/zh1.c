#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    //printf("argc = %d\n",argc);

    if(argc != 3)
    {
        printf("Hiba: Két argumentum szükséges. Kérjük, adjon meg egy szöveget, majd egy számot!\n");
        return 1;
    }

    /*for(int i=0; i<argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    */
//string es szam kiolvasas
    int eltol=atoi(argv[2]);
    //printf("eltol = %d\n", eltol);

//karakterenként végigmenni
//eltolás
    for(int i=0; argv[1][i] != '\0'; i++)
    {
        char c = argv[1][i];
        c = ((c - 'a' + eltol) % 26) + 'a' ;
        printf("%c", c);
    }
    printf("\n");

    return 0;
}