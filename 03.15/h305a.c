#include <stdio.h>
#include <stdbool.h>

bool rendezo(int meret, int tomb[])
{
    bool valasz=true;
    int tarolt = tomb[0];
    for (int i = 1; i < meret; i++)
    {
        if(tarolt < tomb[i])
        {
            valasz=true;

        }
        else
        {
            return false;
        }
        tarolt = tomb[i];
    }
    return true;
    

}
int main()
{
    int tomb[10]={1, 2, 3, 5, 4, 7, 12, 5, 4, 6};
    int meret= 10;
    bool valasz=true;
    valasz= rendezo(meret, tomb);

    if (valasz==true)
    {
        printf("A tömb rendezet\n");
    }
    else
    {
        printf("A tömb rendezetlen\n");
    }   
    return 0;
}
