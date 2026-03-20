#include<stdio.h>

int lenght(char s[])
{
    int i=0;

    while(s[i] != '\0' && s[i] != '\n')
    {
        i++;
    }

    return i;
}

int csillag(char s[])
{
    return(s[0] == '*' && (s[1] == '\n' || s[1] == '\0'));
}

int main()
{
    char szo[100];
    int db=0;
    int max=0;

    printf("Adj meg szavakat '*' vegjelig!\n");

    while(1)
    {
        printf("Szo: ");
        fgets(szo, sizeof(szo), stdin);

        if(csillag(szo))
        {
            break;
        }

        int h = lenght(szo);

        if(h > max)
        {
            max = h;
        }
        db++;
    }

    printf("\n%d db szot adtal meg. ", db);
    printf("A leghosszabb szo %d karakterekbol all. \n", max);

    return 0;
}