#include <stdio.h> // tout le temps !
#include <stdlib.h> // pour malloc


void test_pointeur (void);

int main()
{
	test_pointeur();
    return 0;
}

void test_pointeur() {
   int a = 10;//Déclaration et initialisation de l'entier a
   int* pt_a = &a;//Déclaration initialisation du pointeur pt_a pointant vers a
  
   printf("Valeur de a : %d\n", a);
   printf("Adresse de a : %p\n", &a);
   printf("Valeur de pt_a : %p\n", pt_a);
   printf("Contenu de la case mémoire pointée par pt_a : %d\n", *pt_a);
}
