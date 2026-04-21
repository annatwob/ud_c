#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define N 1000
//randint fuggveny kiirasa zhra

int randint(int lo, int hi)
{
    int veletlen = rand();
    int intervallum = hi - lo + 1;

    veletlen = veletlen % intervallum;
    veletlen = lo + veletlen;

    return veletlen;
}

int get_random_number() //segedfg 1.
{
    return randint(125, 849); // 125-->849 [125, 850)- ig az intervallunmbol a szamok]
}

int get_sum(const int n, const int tomb[]) //segedfg 1.
{
    int total = 0;
    for(int i=0; i<n; i++)
    {
        total += tomb[i];
    }

    return total;
}

double get_atlag(const int n, const int tomb[])
{
    return (double)get_sum(n, tomb) / (double)n; //c-ben eleg csak az egyik double csak biztosra megy
}

void feltolt(const int n, int tomb[])
{
    for(int i=0; i<n; i++)
    {
        tomb[i]=get_random_number();
        //tomb[i] = randint(125,849);
    }
}

int main()
{
    srand(2021);

    int szamok[N]; //tartalma memoriaszemet

    feltolt(N, szamok);

    double atlag = get_atlag(N, szamok);

    printf("Atlag: %2.lf\n", atlag);
    printf("\n");

    int felette = 0;

    for(int i=0; i<N; i++)
    {
        if(szamok[i] > atlag)
        {
            felette++;
        }
    }
    printf("Atlag feletti ertekek szama: %d\n", felette);

    /*for(int i=0; i<N; i++)
    {
        printf("%d ", szamok[i]);
    }
    puts(""); //printf("\n");
    */

    return 0;
}