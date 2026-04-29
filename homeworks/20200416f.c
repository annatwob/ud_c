#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int choice(const int n, const int tomb[])
{
    for(int i=0; i<n; i++)
    {
        int random_index = rand()%n;
        
        return tomb[random_index];
    }
}

int main()
{
    srand(time(NULL));

    int szamok[] = {10, 20, 30, 40, 50};
    int meret = 5;

    int valasztott = choice(meret, szamok);

    printf("A valasztott elem: %d\n", valasztott);

    return 0;
}