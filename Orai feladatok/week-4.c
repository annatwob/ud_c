#include<stdio.h>

int tombszamol(int t[], int m) {
    int sum = 0;
    for(int i = 0; i < m; i++) {
        sum = sum + t[i];
    }

    return sum;
}

int tombszozat(int t[], int m) {
    int r = 1;
    for(int i = 0; i < m; i++) {
        r = r * t[i];
    }

    return r;
}

float tombatlag(int t[], int m) {
    int atlag = 0;
    for(int i = 0; i < m; i++) {
        atlag = atlag + t[i];
    }

    return atlag / (float)m; // 10 -> 10.0 int / float -> float
}

int novel(int a) {
    a = a + 1;
    return a;
}

int novel_tomb(int a[]) {
    a[0] = a[0] + 1;
    return a[0];
}

void novel_tomb_2(int t[], int m) {
    for(int i = 0; i < m; i++) {
        t[i] = t[i] + 1;
    }
}

int tomb_min(int t[], int m) {
    int tm = t[0];
    for(int i = 0; i < m; i++) {
        if (tm > t[i]) {
            tm = t[i];
        }
    }
    return tm;
}

// feladat 1
int tomb_max(int t[], int m) {
    int tm = t[0];
    for(int i = 0; i < m; i++) {
        if (tm < t[i]) {
            tm = t[i];
        }
    }
    return tm;
}

// feladat 2 tartalmazza-e X-et 0 ha nem 1 ha igen
int tomb_contains(int t[], int m, int x) {
    for(int i = 0; i < m; i++) {
        if (x == t[i]) {
            return 1;
        }
    }
    return 0;
}


int main() {
    const float MATH_PI = 3.1416;

    int b = 1;
    printf("%d\n", novel(b));
    printf("%d\n", b);

    int c[2] = {1, 2};
    printf("%d\n", c[0]);
    printf("%d\n", novel_tomb(c));
    printf("%d\n", c[0]);


    printf("%f\n", MATH_PI);

    int szamok[10] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int meret = 10;

    novel_tomb_2(szamok, meret);
    novel_tomb_2(szamok, meret);
    novel_tomb_2(szamok, meret);
    novel_tomb_2(szamok, meret);

    for(int i = 0; i  < meret; i++) {
        printf("%d\n", szamok[i]);
    }

    int eredmeny1 = tombszamol(szamok, meret);
    printf("összeg: %d\n", eredmeny1);

    int eredmeny2 = tombszozat(szamok, meret);
    printf("szorzat: %d\n", eredmeny2);

    float eredmeny3 = tombatlag(szamok, meret);
    printf("átlag: %f\n", eredmeny3);

    for(int i = 0; i  < meret; i++) {
        printf("%d\n", szamok[i]);
    }

    printf("\n");
    printf("%d\n", szamok[9]);

    return 0;
}