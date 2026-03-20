#include<stdio.h>

void write(int volt[])
{
    int elso=1;
    for(int i=0; i<99; i++)
    {
        if(volt[i])
        {
            if(!elso)
            {
                printf(", ");
            }
            printf("%d",i);
            elso=0;
        }
    }
    printf("\n");
}

int main()
{
    int szam;
    int volt[100]={0};
    int db=0;

    printf("Adj meg 0 vegjelig egesz szamokat az [1,99] intervallumbol!\n");

    while(1)
    {
        printf("Szam: ");
        scanf("%d", &szam);

        if(szam == 0)
        {
            break;
        }

        if(szam<1 || szam>99)
        {
            printf("Ez a szam kivul esik az elfogadhato intervallumon!\n");
            continue;
        }

        if(!volt[szam])
        {
            volt[szam]=1;
            db++;
        }
    }

    printf("\n%d db kulonbozo szam lett megadva.\n",db);
    printf("Ezek novekvo sorrendben: ");
    write(volt);

    return 0;
}