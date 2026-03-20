#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//C.)
int volt(int t[], int meret, int szam) 
{
    for (int i=0; i<meret; i++) 
    {
        if (t[i] == szam) 
        {
            return 1;
        }
    }
    return 0;
}

//B.) Bubble sort
void rendez(int t[], int n) 
{
    for (int i=0; i<n-1; i++) 
    {
        for (int j=0; j<n-i-1; j++) 
        {
            if (t[j] > t[j+1]) 
            {
                int tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int n, also, felso;

    srand(time(NULL));

    printf("Hany db random szamot kersz?\n");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    if (n > (felso-also+1)) 
    {
        printf("Hiba! Ennyi különböző szám nem generálható!\n");
        return 1;
    }

    int t[n];
    int i = 0;

    while (i < n) 
    {
        int r = also+rand()%(felso-also+1);

        if (!volt(t, i, r)) 
        {
            t[i] = r;
            i++;
        }
    }

    rendez(t, n);

    printf("\nA generalt szamok: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",t[i]);
    }

    printf("\n");

    return 0;
}