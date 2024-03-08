#include <stdio.h>
#include <math.h>

double terfogat(double a)
{
    return (4.0/3.0)*a*a*a*M_PI;

}

double felszin(double a)
{
    return 4*M_PI*a*a;

}

double get_double()
{
    double szam;
    printf("Adja meg a gömb sugarát: ");
    scanf("%le",&szam);
    return szam;
}

int main()
{
    int sugar=get_double();
    printf("A gömb térfogata: %.2le cm^3\n",terfogat(sugar));

    printf("A gömb felszine: %.2le cm^2\n",felszin(sugar));
    return 0;



}