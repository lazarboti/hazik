#include <stdio.h>

int main()
{
    int szam=1;
    int db=0;
    while (szam !=0)
    {
        printf("Adjon meg egy egész számot (vége 0):");
        scanf("%d",&szam);
        if (szam>0)
        {
            db++;
        }
    }

    
    printf("A pozitív elemek száma: %d\n",db);

    return 0;
}