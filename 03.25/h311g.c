#include <stdio.h>
#include <string.h>
#include "prog1.h"

int rfind_char(string s,  char c)
{
    int indx=-1; //-2 ről kell indexelés miatt
    for (int i = 0; i < strlen(s); i++)
    {
        if (c == s[i])
        {
            indx= i;
        }
        
    }
    //indx++;
    return indx;
    

}

int main()
{
    string s = "Abba";
    char c = 'b';
    int indx = rfind_char(s,c);
    if (indx < 0)
    {
        printf("Nem szerepel a betű a szóban\n");
    }
    else
    {
        printf("A szóban az %d. helyen szerepel a betű\n", indx);

    }

}