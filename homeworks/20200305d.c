#include<stdio.h>

int main()
{
    putschar('A' + 'A' - 'P'); //2
    putschar('A' + 'A' - 'R'); //0
    putschar('A' + 'A' - 'P'); //2
    putschar('A' + 'A' - 'L'); //6
    putschar("\n"); 

    return 0;
}