#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Két paramétert (számot) kell megadni.");
    }
    else
    {
        int a = atoi(argv[1]) + atoi(argv[2]);;
        printf("Az összeg: %d", a);
    }
    puts("");

    return 0;
}
