#include<stdio.h>
#include<string.h>

int rfind_char(char s[], char c) {
    int last = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            last = i;
        }
    }

    return last;
}

int main()
{
    printf("%d\n", rfind_char("Abba", 'b'));    //2
    printf("%d\n", rfind_char("Abba", 'a'));    //3
    printf("%d\n", rfind_char("Abba", 'x'));    //-1
    printf("%d\n", rfind_char("Aladar", 'a'));  //4

    return 0;
}