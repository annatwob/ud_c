#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "prog1.h"
//osszefesules
void merge(string s1, string s2)
{
    int hossz = strlen(s1); //mindegy hogy 1 vagy 2, mert azonos hosszusaguak
    for(int i=0; i<hossz; i++)
    {
        putchar(s1[i]);
        putchar(s2[i]);
    }
    puts("\n");
}

int main(int argc, string argv[])
{
    if(argc != 3) //3, mert bele szamolja az elinditott program nevet
    {
        puts("Hiba! Adj meg pontosan ket stringet!");   
        exit(1);
    }
    //else:
    string s1 = argv[1];
    string s2 = argv[2];

    if(strlen(s1) != strlen(s2))
    {
        puts("Hiba! A ket string legyen azonos hosszusagu!");
        exit(2);
    }
    //else:
    merge(s1, s2);

    return 0;
}