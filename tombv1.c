#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void keres(int tomb[SIZE], int *min, int *max, double *atlag)
{
    *min = tomb[0];
    for (int i = 0; i < SIZE; i++)
    {

        if (*min > tomb[i])
        {
            *min = tomb[i];
        }
    }
    for (int i = 0; i < SIZE; i++)
    {

        if (*max <= tomb[i])
        {
            *max = tomb[i];
        }
    }
    int osszeg = 0;
    for (int i = 0; i < SIZE; i++)
    {
        osszeg = osszeg + tomb[i];
    }
    *atlag = osszeg / SIZE;
}
int main()
{
    int tomb[SIZE];

    int min = tomb[0];
    int max = tomb[0];
    double atlag = 0;
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        tomb[i] = rand() % (99 - 10 + 1) + 10;
    }
    printf("A tömb elemei: ");
    for (int i = 0; i < SIZE; i++)
    {
        if (i != 9)
        {
            printf("%d, ", tomb[i]);
        }
        else
        {
            printf("%d\n", tomb[i]);
        }
    }
    keres(tomb, &min, &max, &atlag);
    printf("A legkisebb elem: %d \n", min);
    printf("A legnagyobb elem: %d \n", max);
    printf("Az elemek átlaga: %.1lf \n", atlag);

    return 0;
}