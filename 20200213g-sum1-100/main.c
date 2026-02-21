#include<stdio.h>

int main()
{
    int sum=0;
    
    for(int i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("A szamok osszege 1-100-ig: %d \n",sum);
   
    return 0;
}