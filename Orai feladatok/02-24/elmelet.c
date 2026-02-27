#include<stdio.h>
int main()
{
    /*char c;
    printf("Akarod folytatni?\n");
    scanf(" %c", &c);
    if(c == 'i' || c == 'I') 
    {
        printf("Folytatas\n");
    } else if()
    {
        printf("A program leállt.\n");
    }
    else{}
    
    
}
    int main()
{
    for(int i=0; i<3; i++)
    {
        hello();
    }
    
    return 0;
}
*/
void hello(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("hello\n");
    }
}
int main()
{
    hello(2);
    printf("-------------\\n");
    hello(3);

    return 0;
}