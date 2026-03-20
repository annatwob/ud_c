#include<stdio.h>

int text_len(char text[]) {
    int length = 0;
    for(int i = 0; i < 100; i++) {
        if(text[i] == '\0') {
            break;
        }
        length = length + 1;
    }

    return length;
}

int palindrom(char text[]) {
    int len = text_len(text);
    int from_left = 0;
    int from_right = len - 1;

    while(from_left < from_right) {
        if(text[from_left] != text[from_right]) {
            return 0;
        }
        from_left++;
        from_right--;
    }

    return 1;
}

int find_char(char text[], char c) {
    int len = text_len(text);
    for(int i = 0; i < len; i++) {
        if (text[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {

    char nev[100];
    printf("Add meg a neved: ");
    scanf("%s", nev);    


    printf("Szia, %s!\n", nev);
    

    for(int i = 0; i < 100; i++) {
        printf("%c\n", nev[i]);
        if(nev[i] == '\0') {
            break;
        }
    }

    /* Kérjünk be egy szöveget és mondjuk meg, hogy milyen hosszú az a szöveg */
    /*int length = 0;
    for(int i = 0; i < 100; i++) {
        if(nev[i] == '\0') {
            break;
        }
        length = length + 1;
    }


    printf("Szöveg hossza: %d\n", length);*/

    /* 2. feadalt írjunk egy olyan FV ami vissza adja, hogy 
    palindróm-e az átadott szöveg 1 ha igen, 0 ha nem */

    printf("Add meg a palindróm szöveget: ");
    scanf("%s", nev);

    if (palindrom(nev) == 1) {
        printf("Palindróm");
    } else {
        printf("Nem palindróm");
    }

    /* szövegben megkeres egy adott karaktert és vissza adja az első indexét */
    // find_char("kis pista", "p") => 4 
    // find_char("kis pista", "X") => -1 ha nincs olyan karakter -1

    printf("kis pista, p => %d\n", find_char("kis pista", 'p'));

    
    char text[200] = "Béla;Zoli;";

    char nev1[200] = "";
    char nev2[200] = "";
    int l = text_len(text);
    int indul = 0;

    for(int i = 0; i < l;i++) {
        if(text[i] == ';') {
            if(text_len(nev1) == 0) {
                for(int k = indul; k < i; k++) {
                    nev1[k] = text[k];
                }
                nev1[i + 1] = '\0';
                indul = i + 1;
            } else if(text_len(nev2) == 0) {
                for(int k = indul; k < i; k++) {
                    nev2[k-indul] = text[k];
                }
                nev2[indul - i] = '\0';
                indul = i;
            }
        }
    }
    printf("név1 %s\n", nev1);
    printf("név2 %s\n", nev2);

    return 0;
}