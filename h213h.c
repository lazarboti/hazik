#include <stdio.h>

int main()
{
    int osszeg = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (i%5==0 || i%3 ==0)
        {
            osszeg=osszeg+i;
        }
        
    }
    printf("A számok összege melyek 3 és 5 többszörösei: %d",osszeg);

    return 0;
}