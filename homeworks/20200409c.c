#include<stdio.h>

int get_number_of_lines()
{

}

int main(int argc, char *argv[])
{
    
    // printf("%d \n", argc);
    
    if(argc==1)
    {
        printf("Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }
    
    // for(int i=0; i<argc; i++)
    // {
    //     printf("%s ", argv[i]);
    // }
    
    char *filename = argv[1];
    FILE *file = fopen(filename, "r");
    if(file == NULL)
    {
        printf("Hiba! A %s nevu file-t nem sikerult megnyitni!\n", filename);
        return 1;
    }

    int line_counter=0;
    const unsigned max_length = 256;
    char buffer[max_length];

    while(fgets(buffer, max_length, file)) 
    {
        line_counter++;
    }
    printf("%d", line_counter);


    fclose(file);


    return 0;
}