#include <stdio.h>

int main()
{
    int magassag=0;
    while (magassag%2==0)
    {
        printf("Magasság:");
        scanf("%d",&magassag);
    }
    int levego=(magassag-1)/2;
    int csillag=1;
    for (int i = 1; i <= magassag; i++)
    {
        if ((magassag+1)/2>i)
        {
            for (int j = 0; j < levego; j++)
            {
                printf(" ");
            }
            levego--;
            for (int l = 1; l <= csillag; l++)
            {
                printf("*");
            }
            csillag=csillag+2;
            printf("\n");
        }
        else
        {
            for (int k = 0; k < levego; k++)
            {
                printf(" ");
            }
            levego++;
            for (int a = 1; a <= csillag; a++)
            {
                printf("*");
            }
            csillag=csillag-2;
            printf("\n");
        }    
    }
    return 0;
}