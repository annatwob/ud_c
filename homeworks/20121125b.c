#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef char *string;

#define BUFSIZE 200
#define MAX_TANULOK 100

int pti(char *s)
{
    if(strlen(s) != 3)
    {
        return 0;
    }
    return (tolower(s[0]) == 'p' && tolower(s[1]) == 't' && tolower(s[2]) =='i');
}

// nev kisbetu nagybetu

void nev(char *s)
{
    if(strlen(s) > 0)
    {
        s[0] = toupper(s[0]);
        for(int i=1; s[i]; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
}

int main()
{
    FILE *file = fopen("nevek.csv", "r");
    if(file == NULL)
    {
        fprintf(stderr, "Hiba\n");
        return 1;
    }

    char sor[BUFSIZE];
    char pti_nevek[MAX_TANULOK][50];
    int db = 0;
    
    while(fgets(sor, BUFSIZE, file) != NULL)
    {
        sor[strcspn(sor, "\n\r")] = '\0';

        char *nev_pti = strtok(sor, ",");
        char *kor_pti = strtok(NULL, ",");
        char *szak_pti = strtok(NULL, ",");

        if(nev_pti && szak_pti)
        {
            if(pti(szak_pti))
            {
                nev(nev_pti);
                strcpy(pti_nevek[db], nev_pti);
                db++;
            }
        }
    }
    fclose(file);
//abc
    for(int i=0; i<db-1; i++)
    {
        for(int j=0; j<db-1; j++)
        {
            if(strcmp(pti_nevek[j], pti_nevek[j+1]) > 0)
            {
                char temp[50];
                strcpy(temp, pti_nevek[j]);
                strcpy(pti_nevek[j], pti_nevek[j+1]);
                strcpy(pti_nevek[j+1], temp);
            }
        }
    }

//kiiratas

    for(int i=0; i<db; i++)
    {
        printf("%s", pti_nevek[i]);
        if(i<db-1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}