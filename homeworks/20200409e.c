#include <stdio.h>

int main() {
    FILE *be, *ki;
    double szam;
    int db = 0;

    be = fopen("in.txt", "r");
    if (be == NULL) {
        printf("Hiba az in.txt megnyitasakor!\n");
        return 1;
    }

    printf("# in.txt sikeresen megnyitva\n");

    ki = fopen("out.txt", "w");
    if (ki == NULL) {
        printf("Hiba az out.txt megnyitasakor!\n");
        fclose(be);
        return 1;
    }

    printf("# 0,5-nel nagyobb szamok szurese...\n");

    while (fscanf(be, "%lf", &szam) == 1) {
        if (szam > 0.5) {
            fprintf(ki, "%.20lf\n", szam);
            db++;
        }
    }

    printf("# szures vege\n");

    fclose(be);
    fclose(ki);

    printf("# out.txt bezarva\n");
    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", db);

    return 0;
}