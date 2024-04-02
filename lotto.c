#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int db;
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &db);

    int also; 
    int felso;
    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    
    if (also >= felso)
    {
        printf("Hiba: Az alsó határ nem lehet nagyobb vagy egyenlő a felső határnál!\n");
        return 0;
    }

    printf("\nA generált számok: ");
    srand(time(NULL)); 
    for (int i = 0; i < db; i++) 
    {
        int szam = rand() % (felso - also + 1) + also;
        printf("%d ", szam);
    }
    printf("\n");

    return 0;
}