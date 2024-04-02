#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define SIZE 26

void feltolt(char tomb[])
{
    for (int i = 0; i <= SIZE; i++)
    {
        if (i==26)
        {
            tomb[i]='\0';
        }
        else
        {
            tomb[i] = 'a' + i;
        } 

    }
    string szöveg = tomb;
    printf("%s \n",szöveg);
}

int main()
{
    string szöveg;
    char abece[SIZE];
    feltolt(abece);
    //printf(abece);

    return 0;
}