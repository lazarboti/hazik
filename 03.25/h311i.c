#include <stdio.h>


int main()
{
    for (int i = 1; i <= 100; i++)
    {
        int szam = i;
        printf("%d \n",szam);
        if(szam % 3 ==0 && szam % 5 == 0)
        {
            printf("fizzbuzz\n");
        }
        else if (szam % 5 == 0)
        {
            printf("buzz\n");
        }
        else if (szam % 3 == 0)
        {
            printf("fizz\n");
        }
    }
    
    return 0;   
}