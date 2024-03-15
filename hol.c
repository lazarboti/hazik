#include <stdio.h>
#include <stdbool.h>

bool szerep(int meret, int tomb[], const int benne)
{
    bool valasz=true;
    for (int i = 0; i < meret; i++)
    {
        if(benne == tomb[i])
        {
            return true;
            break;


        }
        else
        {
            valasz=false;
        }
    }
    return valasz;

}


int hol(int meret, int tomb[], const int szam)
{

    int index=0;
    for (int i = 0; i < meret; i++)
    {
        if(szam == tomb[i])
        {
            index=tomb[i]+1;
            return index;
            break;
        }

    }
    return index;

}
int main()
{
    int tomb[10]={1, 2, 3, 5, 4, 7, 12, 5, 4, 6};
    int meret= 10;
    int szam=0;
    printf("Adjon meg egy számot: ");
    scanf("%d",&szam);
    bool valasz= szerep(meret, tomb, szam);
    if (valasz==true)
    {
        int index=0;
        index=hol(meret, tomb, szam);
        printf("A tömben az %d. helyen szerepel ez a szám\n", index);

    }
    else
    {
        printf("Nincs benne ebben a tömben a megadott szám\n");
    }
    
}
