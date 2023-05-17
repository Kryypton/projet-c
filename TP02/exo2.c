#include <stdio.h>

void test_pointeur (void);
int plus_egal (int* pt_a, int b);
int fois_egal (int* pt_a, int b);

int main()
{
    test_pointeur();
    int a = 10; 
    int* pt_a = &a;
    printf("Mult : %d\n", plus_egal(pt_a, 5));
    fois_egal(pt_a,5);
    printf("%d", *pt_a);
    return 0;
}

void test_pointeur(void) {
    int a = 10; // Déclaration et initialisation de l'entier a
    int* pt_a = &a; // Déclaration et initialisation du pointeur pt_a pointant vers a
    
    printf("Valeur de a : %d\n", a);
    printf("Adresse de a : %p\n", (void *)&a);
    printf("Valeur de pt_a : %p\n", (void *)pt_a);
    printf("Contenu de la case mémoire pointée par pt_a : %d\n", *pt_a);
}

int plus_egal (int* pt_a, int b) 
{
    return *pt_a * b;
}

int fois_egal (int* pt_a, int b)
{
    *pt_a = *pt_a * b;
    return 0;
}

