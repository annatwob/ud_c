#include<stdio.h>
#include<string.h>
#include "prog1.h"

int match_ends(int n, char *words[])
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        int len = strlen(words[i]);

        if(len >= 2 && words[i][0] == words[i][len-1])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char *szavak[]={"aba", "xyz", "aa", "x", "bbb"};
    int szavak1_meret = 5;

    int eredmeny = match_ends(szavak1_meret, szavak);

    printf("Eredmeny: %d\n", eredmeny);

    return 0;
}