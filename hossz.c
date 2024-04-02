#include <stdio.h>
#include <string.h>

#define SIZE 200

int main()
{
    char word[200];
    int leghosszabb = 0;
    
    printf("Adj meg szavakat '*' végjelig:\n");
    int szavak = 0;
    while (1)
    {
        printf("Szó: ");
        fgets(word, SIZE, stdin);
        if (word[strlen(word) - 2] == '*')
        {
            break;
        }
        
        szavak++;
        
        int hossz = strlen(word) - 1;
        if (hossz > leghosszabb) 
        {
            leghosszabb = hossz-1;
        }
    }
    
    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", szavak, leghosszabb);
    
    return 0;
}