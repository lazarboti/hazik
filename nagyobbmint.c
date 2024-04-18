#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int main()
{
    string fajlnev = "in.txt";
    double szam;
    string Ssor;
    char sor[MAX];
    int db=0;
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
    while (fgets(sor,MAX, file) !=NULL)
    {
        Ssor = sor;
        szam= atoi(Ssor);
        if (szam > 0.5);
        {
            db++;
        }
        
    }
    fclose(file);
     printf("%s sikeresen bezárva\n",fajlnev);
    
    printf("0.5-nél nagyobb szamok: %d\n",db);
    return 0;
}