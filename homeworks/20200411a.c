#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void shuffle_str(int n, char tomb[])
{
    for(int i=n-1; i>0; i--)
    {
        int j = rand() % (i + 1);
        char temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

void generate_passwrd()
{
    const char *kisbetu = "abcdefghijklmnopqrstuvwxyz";
    const char *nagybetu = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *szamok = "0123456789";
    const char *specialis = ".,;'";
    const char *osszes = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;'";

    int hossz = rand() % 5 + 8;
    char pwd[13];

    pwd[0]=kisbetu[rand()&strlen(kisbetu)];
    pwd[1]=nagybetu[rand()&strlen(nagybetu)];
    pwd[2]=szamok[rand()&strlen(szamok)];
    pwd[3]=specialis[rand()&strlen(specialis)];

    for(int i=4; i<hossz; i++)
    {
        pwd[i]=osszes[rand()%strlen(osszes)];
    }

    pwd[hossz]='\0';

    shuffle_str(hossz, pwd);

    printf("%s\n", pwd);
}

int main()
{
    srand(time(NULL));

    generate_passwrd();

    return 0;
}