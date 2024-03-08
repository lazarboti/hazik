#include <stdio.h>
#include <math.h>

double terulet(double a)
{
    return a*a*M_PI;

}

double kerulet(double a)
{
    return 2*a*M_PI;

}

int main()
{
    double sugar=0;
    while (sugar<=0)
    {
        printf("A kör sugara:");
        scanf("%le",&sugar);
    }


    printf("A kör területe: %.2le cm^2\n",terulet(sugar));

    printf("A kör kerülete: %.2le cm\n",kerulet(sugar));
    return 0;



}