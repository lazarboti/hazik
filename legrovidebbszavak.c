#include <stdio.h>
#include "prog1.h"
#include <string.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Nem adtál meg egyetlen szót sem!");
        return 1;
    }
    int min = strlen(argv[1]);
    for (int i = 1; i < argc; i++)
    {   
        int pillanat =strlen(argv[i]);

        if (pillanat < min)
        {
            min = strlen(argv[i]);
        }
    }
    for (int i = 1; i < argc; i++)
    {
        int pillanat2 =strlen(argv[i]);
        if (pillanat2 == min)
        {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}