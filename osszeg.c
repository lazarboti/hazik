#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int main()
{
    string fajlnev = "valos.txt";
    double szam;
    char sor[MAX];
    string Ssor;
    double osszeg=0;
    FILE *file =fopen(fajlnev,"r");
    if (file == NULL)
    {
        printf("Hiba! A fájlt nem sikerült megnyitni!\n");
        return 1;
    }
    else
    {
        printf("%s sikeresen megnyitva\n",fajlnev);
    }
    while (fgets(sor, MAX, file)!=NULL)

    {
        sor[strlen(sor)-1]= '\0';
        Ssor = sor;
        szam = atoi(Ssor);
        osszeg = osszeg +szam;
    }
    fclose(file);
    printf("%s sikeresen bezárva\n",fajlnev);
    
    printf("A szamok osszege: %.5lf\n",osszeg);
    return 0;
}