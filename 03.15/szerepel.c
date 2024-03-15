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
        printf("A tömben szerepel a szám\n");
    }
    else
    {
        printf("A tömben nem szerepel a szám\n");
    }   
    return 0;
}
