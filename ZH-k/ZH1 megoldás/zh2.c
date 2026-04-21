#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 1000

void feltolt(const int n, int tomb[])
{
    for(int i=0; i<n; i++)
    {
        tomb[i] = rand() %10 +10;
        //tomb[i] = rand() %(19-9)+10;
    }
}

int main()
{
    int tomb[N];
    srand(time(NULL));
    feltolt(N, tomb);
    int db[20] = {0};

    for(int i=0; i < N; i++)
    {
        db[tomb[i]]++;
    }

    for(int i=10; i<=19; i++)
    {
        printf("A %d-es szám előfordulása: %d\n", i, db[i]);
    }

    return 0;
}