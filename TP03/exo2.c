#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* tableau;
    int taille;
} super_tableau_t ;


super_tableau_t* nouveau_super_tableau (int taille);
void initialise_super_tableau (super_tableau_t* super_tab, char car);
void affiche_super_tableau (super_tableau_t* super_tab);
void liberation_du_super_tableau (super_tableau_t* super_tab);
void place_dans_super_tableau (super_tableau_t* super_tab, int indice, char car);
char lecture_du_super_tableau (super_tableau_t* super_tab, int indice);

int main()
{
    super_tableau_t* tab = nouveau_super_tableau(10);
    initialise_super_tableau(tab, 'a');
    affiche_super_tableau(tab);
    tab->tableau[0] = 'b';
    affiche_super_tableau(tab);
    return 0;
}

void place_dans_super_tableau (super_tableau_t* super_tab, int indice, char car)
{
    super_tab->tableau[indice] = car;
}

char lecture_du_super_tableau (super_tableau_t* super_tab, int indice)
{
    return super_tab->tableau[indice];
}

super_tableau_t* nouveau_super_tableau (int taille)
{
    super_tableau_t* super_tab = malloc (sizeof(super_tableau_t));
    super_tab->taille = taille;
    super_tab->tableau = malloc(super_tab->taille*sizeof(char));
    return super_tab;
}

void initialise_super_tableau (super_tableau_t* super_tab, char car)
{
    for (int cpt = 0; cpt<super_tab->taille; cpt++)
    {
        super_tab->tableau[cpt] = car;
    }
}

void affiche_super_tableau (super_tableau_t* super_tab)
{
    printf("|");
    for (int cpt = 0; cpt<super_tab->taille; cpt++)
    {
        printf("%c|", super_tab->tableau[cpt]);
    }
    printf("\n");
}

void liberation_du_super_tableau (super_tableau_t* super_tab)
{
    free(super_tab->tableau);
    free(super_tab);
}