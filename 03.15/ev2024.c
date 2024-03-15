#include <stdio.h>

#define a (sizeof(int))


int main()
{
    printf("%ld\n",(a*a*a*a*a)+(a*a*a*a*a)-(a*a)-a-a);
    return 0;
}