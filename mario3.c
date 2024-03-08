#include <stdio.h>

int main()
{
    int magassag=0;
    printf("Magasság:");
    scanf("%d",&magassag);
    int levego=magassag-1;
    int kocka=0;
    for (int i = 1; i <= magassag; i++)
    {
        for (int j = 0; j < levego; j++)
        {
            printf(" ");
        }
        levego--;
        for (int k = 0; k <= kocka; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l <= kocka; l++)
        {
            printf("#");
        }
        kocka++;
        printf("\n");
    }
    return 0;
}