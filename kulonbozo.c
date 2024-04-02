#include <stdio.h>

int main() 
{
    int szamok[100] = {0};
    int szam;
    int kulonbozo = 0;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    printf("Szám: ");
    while (1)
    {
        scanf("%d", &szam);
        
        if (szam == 0) 
        {
            break;
        }
        
        if (szam < 1 || szam > 99) 
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            printf("Szám: ");
            continue;
        }

        if (!szamok[szam]) 
        {
            szamok[szam] = 1;
            kulonbozo++;
        }
        
        printf("Szám: ");
    }

    printf("\n%d db különböző szám lett megadva.\n", kulonbozo);
    printf("Ezek (növekvő sorrendben): ");

    
    for (int i = 1; i <= 99; i++) 
    {
        if (szamok[i]) 
        {
            printf("%d", i);
            kulonbozo--;
            if (kulonbozo > 0) 
            {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}