#include <stdio.h>
#include <stdbool.h>

bool vaild_triangle(int a, int b, int c)
{
    if (a+b>c && a+c>b && c+b>a)
    {
        return true;
    }
    else
    {
        return false;
    }   


}

int main()
{
    int aoldal=0;
    while (aoldal<=0)
    {
        printf("Az (A) oldal hossza: ");
        scanf("%d",&aoldal);
    }
    int boldal=0;
    while (boldal<=0)
    {
        printf("Az (AB oldal hossza: ");
        scanf("%d",&boldal);
    }
    int coldal=0;
    while (coldal<=0)
    {
        printf("Az (C) oldal hossza: ");
        scanf("%d",&coldal);
    
 
    }

    bool valasz = vaild_triangle(aoldal,boldal,coldal);
    if (valasz==true)
    {
        printf("A háromszög szerkeszthető\n");
    }
    else
    {
        printf("A háromszög nem szerkeszthető\n");
    }   

    return 0;
}