#include <stdio.h>
#include <stdlib.h>

#define TSND 1000

void feltolt(const int n, int tomb[]);

int main() {
    srand(2021);

    int array[TSND];

    feltolt(TSND, array);

    return 0;
}


void feltolt(const int n, int tomb[]){
    //125 - 849
    double num_avg = 0;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        tomb[i] = rand() % (850 - 125) + 125;
    }

    for (int i = 0; i < n; i++) {
        num_avg += tomb[i];
    }
    
    double atlag = num_avg / n;

    for (int i = 0; i < n; i++) {
        if (tomb[i] > num_avg / n) {
            counter++;
        }
    }

    printf("%d", counter);
}