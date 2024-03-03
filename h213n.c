#include <stdio.h>

int main()
{
    int szam=1;
    int dbp=0;
    int dbn=0;
    while (szam !=0)
    {
        printf("Adjon meg egy egész számot (vége 0):");
        scanf("%d",&szam);
        if (szam>0)
        {
            dbp++;
        }
        else if (szam<0)
        {
            dbn++;
        }
        
    }

    
    printf("A pozitív elemek száma: %d\n",dbp);
    printf("A negatív elemek száma: %d\n",dbn);

    return 0;
}