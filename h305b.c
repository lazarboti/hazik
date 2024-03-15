#include <stdio.h>
#include <stdbool.h>

int is_min(int meret, int tomb[])
{

    int min = tomb[0];
    for (int i = 1; i < meret; i++)
    {
        if(min > tomb[i])
        {
            min= tomb[i];

        }

    }
    return min;
    

}

int is_max(int meret, int tomb[])
{

    int max = tomb[0];
    for (int i = 1; i < meret; i++)
    {
        if(max < tomb[i])
        {
            max= tomb[i];

        }

    }
    return max;
    

}
int main()
{
    int tomb[10]={1, 2, 3, 5, 4, 7, 12, 5, 4, 6};
    int meret= 10;
    int minimum=0;
    int maximum=0;
    minimum= is_min(meret, tomb);
    maximum= is_max(meret, tomb);


    printf("A tomb legkissebb eleme: %d\n",minimum);
    printf("A tomb legnagyobb eleme: %d\n",maximum);
    return 0;
}
