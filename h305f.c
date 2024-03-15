#include <stdio.h>

int main()
{
    
    int tomb[10]={5, 10, 3, 4, 2, 6, 7, 21, 9, 10};
    int meret= 10;
    for (int i = 0; i < meret; i++)
    {
        if (meret-1==i)
        {
            printf("%d",tomb[i]);
        }
        else
        {
            printf("%d, ",tomb[i]);
        }

    }
    printf("\n");

}