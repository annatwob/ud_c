#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) 
{
    if (argc < 2) 
    {
        printf("Hasznalat: %s <fajlnev>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) 
    {
        perror("Hiba a fajl megnyitasakor");
        return 1;
    }

    int capacity = 1000000; 
    int *numbers = malloc(capacity * sizeof(int));
    int count = 0;

    if (numbers == NULL) 
    {
        fprintf(stderr, "Memoriafoglalasi hiba!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &numbers[count]) == 1) 
    {
        count++;

        if (count >= capacity) 
        {
            capacity *= 2;
            int *temp = realloc(numbers, capacity * sizeof(int));
            if (temp == NULL) 
            {
                fprintf(stderr, "Elfogyott a memoria!\n");
                free(numbers);
                return 1;
            }
            numbers = temp;
        }
    }
    fclose(fp);

    qsort(numbers, count, sizeof(int), compare);

    for (int i = 0; i < count; i++) 
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);

    return 0;
}