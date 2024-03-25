#include <stdio.h>
#include <string.h>
#include "prog1.h"

int char_count(string s,  char c)
{
    int szam=0; 
    for (int i = 0; i < strlen(s); i++)
    {
        if (c == s[i])
        {
            szam++;
        }
        
    }
    return szam;
    

}

int main()
{
    string s = "Abba";
    char c = 'b';
    int szam = char_count(s,c);

    printf("A szóban %d -szer szerepel a megadott betű\n",szam);


}