#include <stdio.h>
#include <stdlib.h>

typedef struct iz
{
    struct iz *bal;
    struct iz *jobb;
    int adat;
} node;

void beszur(int a, node **root)
{
    if (*root == NULL)
    {
        *root = malloc(sizeof(node));
        (**root).adat = a;
        (**root).jobb = NULL;
        (**root).bal = NULL;
        return;
    }

    if ((**root).adat == a)
        return;

    if ((**root).adat < a)
        beszur(a, &(**root).jobb);
    if ((**root).adat > a)
        beszur(a, &(**root).bal);
}

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inOrder(root->bal);
        printf("%d ", root->adat);
        inOrder(root->jobb);
    }
}

int main()
{
    int i;
    node *gy = NULL;
    for (i = 0; i < 20; i++)
    {
        beszur(rand() % 1000, &gy);
    }

    inOrder(gy);
    printf("\n");
    return 0;
}
