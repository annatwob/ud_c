#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 26

int char_count_m(char s[], char c) {
    int counter = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == c) {
            counter++;
        }
    }
    return counter;
}

void fill_char_array(char c[]) {
    int j = 0;
    for( int i = (int)'a'; i <= (int)'z'; i++) {
        c[j] = (char)i;
        j = j + 1;
    }
}

void read_from_keyboard(char c[], int size) {
    fgets(c, size, stdin);
}

int main() {

    /*
    Készítsünk egy karakter tömböt, amiben eltárolunk 26 darab betűt
    és az mind az angol abc kisbetűje legyen a-z-ig 
    eljárás segítségével 
    fill_char_array(c)
    */

    printf("size: %d\n", SIZE);

    printf("Írj be maximum 9 karakteres szöveget: ");
    char text[10];
    read_from_keyboard(text, 10);
    printf("%s\n", text);

    int num = atoi("129");
    printf("%d\n", num);

    float numf = atof("129.1");
    printf("%f\n", numf);

    /* kérjünk be egy nevet a read_from_keyboard segítéségével
    és ha a név Batman vagy Robin akkor írjuk ki azt, hogy Denevérveszély */

    char nev[50];
    printf("Kérem a neved: ");
    read_from_keyboard(nev, 50);
    printf("Hello ");
    if(strcmp(nev, "Batman\n") == 0) {
        printf("Denevérveszély\n");
    } else if(strcmp(nev, "Robin\n") == 0) {
        printf("Denevérveszély\n");
    } else {
        printf("%s\n", nev);
    }

    int batman_az = 1;
    char batman[10] = "Batman";
    /* nem tökéletes, a két string hosszát ellenőrízni kell! */
    for(int i = 0; i < 7;i++) {
        if (batman[i] == nev[i]) {

        } else if(nev[i] == '\n' || nev[i] == '\0') {

        } else {
            batman_az = 0;
        }
    }
    if (batman_az == 1) {
        printf("Batman az! Denevérveszély!\n");
    }

    /* 
    függvény, ami visszatér egy számmal még pedig át kell 
    adnunk egy szöveget és egy karaktert hozzá.
    Kérdés, hogy hányszor szerepel C karakter S szövegben, 
    a szöveget olvassuk be billentyűzetről.
    Hello = l => 2
    char_count
    */

    char s[10] = "Hello";
    int ccount = char_count_m(s, 'l');
    printf("Hello => l => %d\n", ccount);

    return 0;
}