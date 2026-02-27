#include<stdio.h>
int main()
{
    char c='A';

    printf("%c\n", c);
    printf("%c, %d\n", c, c);
    printf("%c, %d\n", (int)c, (int)c);
    
    return 0;
}