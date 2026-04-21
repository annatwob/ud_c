#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "prog1.h"
#include<ctype.h>

#define BUFSIZE 512
/* 
0 1 2 3 4  5  6 7 ... 511
h e l l o /n /0 ..........
          ^
          |
        '\0'
strlen(text)==6
*/ 
int main()
{
    char text[BUFSIZE];

    int kisbetuk = 0;
    int nagybetuk = 0;
    int szokozok = 0;
    int szamjegyek = 0;

    while(1)
    {
        printf("Szoveg (vege: *): ");
        fgets(text, sizeof(text), stdin);
        text[strlen(text) - 1] = '\0';
        //printf("'%s'\n", text);

        if(strcmp(text, "*") == 0) break; //strcmp csak stringeket hasonlit ossze so ez kell: ""

        int hossz = strlen(text);
        for(int i=0; i<hossz; i++)
        {
            char c = text[i];
            if(islower(c))
            {
                kisbetuk++;
            }
            else if(isupper(c))
            {
                nagybetuk++;
            }
            else if(c == ' ')
            {
                szokozok++;
            }
            else if(isdigit(c))
            {
                szamjegyek++;
            }
        }
        
    }
    printf("Kisbetuk szama: %d\n", kisbetuk);
    printf("Nagybetuk szama: %d\n", nagybetuk);
    printf("Szokozok szama: %d\n", szokozok);
    printf("Szamjegyek szama: %d\n", szamjegyek);


    return 0;
}
