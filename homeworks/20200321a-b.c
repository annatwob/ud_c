#include<stdio.h>
#define SIZE 26

char* fill_char_array(char c[])
{
    for(int i=0; i<SIZE; i++)
    {
        c[i]='a'+i;
    }
    c[SIZE]='\0'; //string lezarasa
    
    return c;
}

int main()
{
    char tomb[SIZE+1]; 
    
    printf("Az angol abc: %s \n",fill_char_array(tomb));

    return 0;
}