#include <stdio.h>

int main()
{
    int szam =0;
    printf("Adjon meg egy egész számot:");
    scanf("%d",&szam);
    for (int i = 1; szam >= i; szam--)
    {
        if (szam%2!=0)
        {
            printf("%d\n",szam);
        }

    }

    

    return 0;
}