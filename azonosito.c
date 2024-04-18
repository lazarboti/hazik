#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_c_identifier(string szo)
{
    if (szo[0]=='\n')
    {
        return 0;
    }
    if (!isalpha(szo[0]&& szo[0] !='_' ))
    {
        return 0;
    }
    for (int i = 0; i < strlen(szo); i++)
    {
        if (!isalnum(szo[i])&& szo[i] != '_')
        {
            return 0;
        }
        
    }
    return 1;
    

}

int main()
{

    string azonosito;
    do
    {
        azonosito = get_string("Adja meg a jelszavát '*' végjelig: ");
        if (is_valid_c_identifier(azonosito))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    } while (azonosito[strlen(azonosito)-1] != '*');

    return 0;
}