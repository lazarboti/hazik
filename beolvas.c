#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int main()
{
    string fajlnev = get_string("Adja meg a fájl nevét: ");
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
        printf("%s\n",sor);
    }
    fclose(file);
    printf("%s sikeresen bezárva\n",fajlnev);
    
    return 0;
}