#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;


void merge(string s1, string s2);

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Hiba! Adj meg pontosan ket sztringet!\n");
        return -1;
    }

    merge(argv[1], argv[2]);

    return 0;
}

void merge(string s1, string s2) {
    if (strlen(s1) != strlen(s2)) {
        printf("Hiba! A ket sztring legyen azonos hosszusagu!\n");
        return;
    }

    for (int i = 0; i < strlen(s1); i++) {
        printf("%c", s1[i]);
        printf("%c", s2[i]);
    }
    printf("\n");
}