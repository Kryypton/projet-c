#include <stdio.h>

void somme_et_produit (int a, int b, int* pt_somme, int* pt_produit);

int main()
{
    int somme, produit ;
    int a = 5;
    int b = 5;
    somme_et_produit(a, b , &somme, &produit);
    printf("somme : %d , produit : %d\n", somme, produit);
}

void somme_et_produit(int a, int b, int* pt_somme, int* pt_produit)
{
    *pt_somme = a + b;
    *pt_produit = a * b;
}