#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char *string;

#define BUFSIZE 200

int main()
{
    FILE *file = fopen("nevek.csv", "r");
    if(file == NULL)
    {
        fprintf(stderr, "Hiba\n");
        exit(1);
    }

    char sor[BUFSIZE];
    char *p;
    string nev;
    int kor;
    string szak;
    
    while(fgets(sor, BUFSIZE, file) != NULL)
    {
        sor[strlen(sor)-1] = '\0';

        p = strtok(sor, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        szak = p;

        if(strcmp(szak, "MI") ==0)
        {
            puts(nev);
        }
        //printf("nev: %s, kor: %d, szak: %s\n", nev, kor, szak);
    }

    fclose(file);

    return 0;
}