#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char *string;

#define MAX 100
#define BUFFERSIZE 100

typedef struct
{
    char nev[20];
    int kor;
    char szak[5];
} Hallgato;

int feltolt(const char* fname, const int n, Hallgato tomb[])
{   
    int elemszam;
    FILE *file = fopen(fname, "r");
    if (file = NULL)
    {
        fprintf(stderr,"Error 1");
        exit(1);
    }
    char sor[BUFFERSIZE];
    char *p;
    string nev;
    int kor;
    string szak;
    int index = 0;
    while (fgets(sor, BUFFERSIZE, file) != NULL)
    {
        sor[strlen(sor)-1] = '\0';
        p=strtok(sor,",");
        nev =p;
        p =strtok(NULL,",");
        kor = atoi(p);
        p = strtok(NULL,",");
        szak= p;
        Hallgato h;
        strcpy(h.nev,nev);
        h.kor=kor;
        strcpy(h.szak,szak);
        tomb[index]= h ;
        index++;

    }
    fclose(file);
    return index;
}

void print_hallgato(const Hallgato *h)
{
    printf("név: %s, kor: %d, szak %s",h->nev,h->kor,h->szak);

}

int kiszur_ptisek(int elemszam,Hallgato tomb[],Hallgato ptisek[])
{

    int index = 0;
    for (int i = 0; i < elemszam; i++)
    {
        Hallgato akt = tomb[i];
        if (strcmpi(akt.szak,"pti")==0)
        {
            ptisek[index] = akt;
            index++;
        }
        
    }
    

}

int main()
{
    Hallgato tomb[MAX];
    const char *fname = "nevek.csv";
    int elemszam = feltolt(fname, MAX, tomb);
    for (int i = 0; i < elemszam; i++)
    {
        print_hallgato(&tomb[i]);
    }
    puts("---");

    Hallgato ptisek[MAX];

    int ptis_elemszam = kiszur_ptisek(elemszam,tomb,ptisek);
    for (int i = 0; i < ptis_elemszam; i++)
    {
        print_hallgato(&ptisek[i]);
    }
    

    return 0;
}