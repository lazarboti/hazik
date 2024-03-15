#include <stdio.h>
#include <stdbool.h>

bool is_paros(int szam)
{
    if (szam%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

bool is_paratlan(int szam)
{
    if (szam%2!=0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int paros =0;
    printf("A, Adjon meg egy számot: ");
    scanf("%d",&paros);
    bool Avalasz = is_paros(paros);

    int paratlan =0;
    printf("B, Adjon meg egy másik számot: ");
    scanf("%d",&paratlan);
    bool Bvalasz = is_paratlan(paratlan);

    if (Avalasz == true)
    {
        printf("A, 1\n");
    }
    else
    {
        printf("A, 0\n");
    }
    
    if (Bvalasz == true)
    {
        printf("B, 1\n");
    }
    else
    {
        printf("B, 0\n");
    }



    return 0;
}
