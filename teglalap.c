#include <stdio.h>

int terulet(int a, int b)
{
    return a*b;

}

int kerulet(int a, int b)
{
    return 2*(a+b);

}

int main()
{
    int oldal1=0;
    while (oldal1<=0)
    {
        printf(" Az (A) oldal hossza:");
        scanf("%d",&oldal1);
    }

    int oldal2=0;
    while (oldal2<=0)
    {
        printf(" Az (B) oldal hossza:");
        scanf("%d",&oldal2);
    }
    printf("A téglalap területe: %d cm^2\n",terulet(oldal1,oldal2));

    printf("A téglalap kerülete: %d cm\n",kerulet(oldal1,oldal2));
    return 0;



}