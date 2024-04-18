#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    printf("Hány darab random számot kérsz?\n");
    int n = 0;
    scanf("%d", &n);
    int tomb[n];
    int also = 0;
    int felso = 1;
    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);
    int tombketto[felso];
    for (int i = 0; i < felso; i++)
    {
        tombketto[i] = 0;
    }

    int szamok = 0;
    puts("");
    while (szamok != n)
    {
        int random = rand() % (felso - also + 1) + also;
        if (tombketto[random] == 0 && random > also)
        {

            tomb[szamok] = random;
            tombketto[random] = 1;
            szamok++;
        }
    }
    int szamlalo=0;
    puts("");
    printf("A generált számok: ");
    for (int i = 0; i < felso; i++)
    {
        if (tombketto[i] == 1 && szamlalo<n-1)
        {
            printf("%d, ", i);
            szamlalo++;
        }
        else if (tombketto[i] == 1)
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
}