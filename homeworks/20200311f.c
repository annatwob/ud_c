#include<stdio.h>
#include<string.h>

int char_count(char s[], char c)
{
    int count=0;
    for(int i=0; s[i] !='0'; i++)
    {
        if(s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    printf("%d\n", char_count("Abba", 'b'));    //2
    printf("%d\n", char_count("Abba", 'a'));    //1
    printf("%d\n", char_count("Abba", 'x'));    //0
    return 0;
}