#include <stdio.h>

int main()
{
    int szam1 =0;
    printf("Adjon meg egy egész számot:");
    scanf("%d",&szam1);
    int szam2 =0;
    printf("Adjon meg egy másik egész számot:");
    scanf("%d",&szam2);
    if (szam1 > szam2)
    {
        printf(">\n");
    }
    else if (szam1<szam2)
    {
        printf("<\n");
    }
    else
    {
        printf("=\n");
    }
    
    


    return 0;
}