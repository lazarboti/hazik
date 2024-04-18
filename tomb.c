#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tomb[10];
    int meret = 10;
    srand(time(NULL));
    for (int i = 0; i < meret; i++)
    {
        tomb[i] = rand() % (99 - 10 + 1) + 10;
    }
    printf("A tömb elemei: ");
    for (int i = 0; i < meret; i++)
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
    int min = tomb[0];
    int max = 0;
    for (int i = 0; i < meret; i++)
    {

        if (min > tomb[i])
        {
            min = tomb[i];
        }
    }
    for (int i = 0; i < meret; i++)
    {

        if (max <= tomb[i])
        {
            max = tomb[i];
        }
    }
    printf("A legkisebb elem: %d \n", min);
    printf("A legnagyobb elem: %d \n", max);

    double atlag = 0;
    for (int i = 0; i < meret; i++)
    {
        atlag = atlag + tomb[i];
    }
    atlag = atlag / 10;
    printf("Az elemek átlaga: %.1lf \n", atlag);

    return 0;
}