#include <stdio.h>

int main(int argc, char *argv[]) 
{
    if (argc != 2) {
        printf("Használat: %s fajlnev\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) 
    {
        printf("Nem sikerült megnyitni a fájlt\n");
        return 1;
    }

    int numbers[1000]; 
    int n = 0;

    while (fscanf(file, "%d", &numbers[n]) == 1) 
    {
        n++;
    }

    fclose(file);

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}