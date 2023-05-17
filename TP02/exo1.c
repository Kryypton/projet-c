#include <stdio.h>

void affiche_entier (int n);
int produit (int a, int b);
void modifie_a (int a);

int main()
{
    affiche_entier(5);
    affiche_entier(produit(5,6));
    int a = 8;
    affiche_entier(a);
    modifie_a(a);
    affiche_entier(a);
    return 0;
}

void affiche_entier (int n)
{
    printf("La fonction vous affiche l'entier : %d\n", n);
}

int produit (int a, int b)
{
    return a * b;
}

void modifie_a (int a)
{
    a = a +1;
}