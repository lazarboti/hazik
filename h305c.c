#include <stdio.h>

int main()
{
    
    int tomb[10]={5, 10, 3, 4, 2, 6, 7, 21, 9, 10};
    int meret= 10;
    int osszeg=0;
    int tarolt = tomb[0];
    for (int i = 1; i < meret; i++)
    {
        if (tarolt>tomb[i])
        {
            osszeg +=(tarolt-tomb[i]);
        }
        else
        {
            osszeg += (tomb[i]-tarolt);
        }   
        tarolt = tomb[i];
    }
    printf("Magasság külömbség összege %d\n",osszeg);
    
 
    return 0;
}