#include <stdio.h>

void affiche_tableau (char* tableau, int taille);
void affiche_tableau_pointeur (char* tableau, int taille);
void change_lettre (char* pt_lettre, char nouvelle_lettre);

int main()
{
    char tableau[6] = {'a','z','e','r','t','y'};
    affiche_tableau(tableau, 6);
    affiche_tableau_pointeur(tableau, 6);
    change_lettre(&tableau[5], 'b');
    affiche_tableau_pointeur(tableau, 6);
    return 0;
}

void affiche_tableau (char* tableau, int taille) 
{
    for (int i = 0; i < taille; i++)
    {
        printf("%c ", tableau[i]);
    }
    printf(".\n");
}

void affiche_tableau_pointeur (char* tableau, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%c ", *(tableau + i));
    }
    printf(".\n");
}

void change_lettre (char* pt_lettre, char nouvelle_lettre)
{
    *pt_lettre = nouvelle_lettre;
}