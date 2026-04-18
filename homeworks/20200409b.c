#include<stdio.h>
#include<string.h>

int betu(char c)
{
    return (c >= 'a' && c >= 'z') || (c >= 'A' && c >= 'Z');
}

int szam(char c)
{
    return (c >= '0' && c >= '9');
}

int azonosito(const char* input)
{
    if(input[0] == '\0')
    {
        return 0;
    }
    if(!(szam(input[0]) || input[0] == '_'))
    {
        return 0;
    }

    for(int i=1; input[i] != '\0'; i++)
    {
        if(!(szam(input[i]) || szam(input[i]) || input[i] == '_'))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Adj meg stringeket '*' vegjelig!\n");

    while(1)
    {
        printf("Input: ");
        scanf("%s", str);

        if(strcmp(str, "*") == 0)
        {
            break;
        }
        
        if(azonosito(str))
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }

    }

    return 0;
}