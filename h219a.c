#include <stdio.h>

int main()
{
    int szam=1;
    int osszeg=0;
    while (szam !=0)
    {
        printf("Adjon meg egy egész számot (vége 0):");
        scanf("%d",&szam);
        osszeg =osszeg+szam;
    }

    
    printf("Az elemek összege: %d\n",osszeg);

    return 0;
}