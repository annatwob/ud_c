#include<stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6;
    const int osszeg_cel = 90;
    const long szorzat_cel = 996300;

    for(n1 = 1; n1 <= 40; n1++)
    {
        if(szorzat_cel % n1 != 0)
        {
            continue;
        }

        for(n2 = n1+1; n2 <= 41; n2++)
        {
            if(szorzat_cel % ((long)n1 * n2) != 0)
            {
                continue;
            }
            if(n1 + n2 >= osszeg_cel)
            {
                break;
            }

            for(n3 = n2 +1; n3 <=42; n3++)
            {
                long szorzat3 = (long)n1 * n2 * n3;
                if(szorzat_cel % szorzat3 != 0)
                {
                    continue;
                }
                if(n1 + n2 + n3 >= osszeg_cel)
                {
                    break;
                }

                for(n4 = n3 + 1; n3 <=43; n4++)
                {
                    long szorzat4 = szorzat3 * n4;
                    if(szorzat_cel % szorzat4 != 0)
                    {
                        continue;
                    }
                    if(n1 + n2 + n3 >= osszeg_cel)
                    {
                        break;
                    }

                    for(n5 = n4 + 1; n5 <=44; n5++)
                    {
                        int jelenlegi_osszeg = n1 + n2 + n3 + n4 + n5;
                        if(jelenlegi_osszeg >= osszeg_cel)
                        {
                            break;
                        } 

                        long jelenlegi_szorzat = szorzat4 * n5;
                        if(szorzat_cel % jelenlegi_szorzat != 0)
                        {
                            continue;
                        }

                        n6 = osszeg_cel - jelenlegi_osszeg;

                        if(n6 > n5 && n6 <=45)
                        {
                            if(jelenlegi_szorzat % n6 == szorzat_cel)
                            {
                                printf("A nyeroszamok: %d, %d, %d, %d, %d, %d\n", n1, n2, n3, n4, n5, n6);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}