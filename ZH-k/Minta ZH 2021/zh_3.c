#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int sum = 0;

    while (a < 4000000) {
        if (a % 2 != 0) {
            sum += a;
        }

        int next = a + b;
        a = b;
        b = next;
    }

    printf("%d\n", sum);

    return 0;
}