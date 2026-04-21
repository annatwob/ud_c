#include<stdio.h>
#include<string.h>

int main()
{
    char sor[100]; //egy szövegsor tárolására (max 99 karakter + \0)
    int maganhangzo = 0;
    int massalhangzo = 0;
    int egyeb = 0;

    while(1)//vegtelen ciklus
    {
        printf("Szoveg (vege: *): ");
        fgets(sor, 100, stdin); //fgets egy teljes sort beolvas
        
        if(sor[0] == '*' && sor[1] == '\n')
        {
            break;
        }

        int i=0;

        while(sor[i]!='\0')
        {
            if(sor[i]=='\n')
            {
                sor[i]='\0';
            }

            i++;
        }

        for(int i=0; sor[i]!='\0'; i++)
        {        
           
                char c = sor[i];

                if(c==' ') 
                {
                    continue;
                }

                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
                {
                        maganhangzo++;
                }
                else if((c>='a' && c<='z') || (c>='A' && c<='Z'))
                {
                        massalhangzo++;
                }
                else
                {
                        egyeb++;
                }
        }
    }

    printf("\n- Maganhangzok szama: %d\n", maganhangzo);
    printf("- Massalhangzok szama: %d\n", massalhangzo);
    printf("- Egyeb karakterek szama: %d\n", egyeb);
  
    return 0;
}