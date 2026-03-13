#include<stdio.h>
#include<string.h>

void line(char c, int lenght)
{
    for(int i=0; i<lenght; i++)
    {
        printf("%c",c);
    }
    printf("\n");
}

int main()
{
    printf("hello\n");
    line('-',40);
    printf("world\n");

    return 0;
}