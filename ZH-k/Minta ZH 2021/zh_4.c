#include <stdio.h>
#include <string.h>

typedef char* string;


int main() {

    char s[256];
    int smallCharCount = 0;
    int bigCharCount = 0;
    int numberCount = 0;
    int whitespaceCount = 0;


    do
    {
        printf("Szoveg (vege: *): ");
        fgets(s, sizeof(s), stdin);

        s[strcspn(s, "\n")] = '\0';

        if(strcmp(s, "*") == 0) break;

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                smallCharCount++;
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                bigCharCount++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                numberCount++;
            } else if (s[i] == ' ') {
                whitespaceCount++;
            }
        }

    } while (strcmp(s, "*") != 0);
    
    printf("\n");
    printf("Kisbetuk szama: %d\n", smallCharCount);
    printf("Nagybetuk szama: %d\n", bigCharCount);
    printf("Szokozok szama: %d\n", whitespaceCount);
    printf("Szamok szama: %d\n", numberCount);

    return 0;
}