#include <stdio.h>

int main() {

    int a = 5;
    a = 65;
    int terulet = a * a;    
    
    printf("A négyzet területe, %d * %d = %d\n", a, a, terulet);
    
    char c = 'A';
    printf("A character ASCII kódja: %d, maga a karakter: %c\n", c, c);
    
    float f1 = 0.1;
    float f2 = 0.2;
    float f3 = 0.3;
    
    printf("Float: %f %f %f %.17f\n", f1, f2, f3, f1+f2);
    
    double f4 = 0.3;
    
    printf("Kérem a négyzet A oldalát (cm): \n");
    scanf("%d", &a);
   
   
    terulet = a * a;
    printf("A négyzet területe, %d * %d = %d\n", a, a, terulet);
    
    if(a < 10) {
        printf("A kissebb, mint 10.\n");
    } else {
        printf("Nagyobb vagy egyenlő, mint 10.\n");
    }
    
    // + - * / % 10%2=0 . 11%2=1
    
    if(a % 2 == 0) {
        printf("a páros\n");
    } else {
        printf("a páratlan\n");
    }
    
    int d = 10 / 3;
    
    printf("10 / 3 = %d", d);

    return 0;

}