#include <stdio.h>

void csere (int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i]<0)
        {
            tomb[i]= tomb[i]*(-1);
        }
        
    }
    

}

int main()
{
    
    int tomb[10]={5, 10, 3, 4, 2, 6, -7, 21, 9, -10};
    int meret= 10;
    csere(meret, tomb);
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
        printf("\n");

    }

}