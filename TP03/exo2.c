#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* tableau;
    int taille;
} super_tableau_t ;

typedef super_tableau_t chaine_t;

super_tableau_t* nouveau_super_tableau (int taille);
void initialise_super_tableau (super_tableau_t* super_tab, char car);
void affiche_super_tableau (super_tableau_t* super_tab);
void liberation_du_super_tableau (super_tableau_t* super_tab);
void place_dans_super_tableau (super_tableau_t* super_tab, int indice, char car);
char lecture_du_super_tableau (super_tableau_t* super_tab, int indice);
int taille_super_tableau(super_tableau_t* super_tab);

/// EXO3 

int chaine_est_valide (chaine_t* chaine);
int taille_de_la_chaine (chaine_t* chaine);
void affiche_chaine (chaine_t* chaine);
void ajoute_caractere (chaine_t* chaine, char car);
void allonge_tableau_de_la_chaine (chaine_t* chaine);

int main()
{
    /*super_tableau_t* tab = nouveau_super_tableau(10);
    initialise_super_tableau(tab, 'a');
    affiche_super_tableau(tab);
    tab->tableau[0] = 'b';
    affiche_super_tableau(tab);
    place_dans_super_tableau(tab, 2, 'g');
    affiche_super_tableau(tab);
    printf("%d\n",taille_super_tableau(tab));*/
    
    /// EXO 3
    chaine_t* chaine = nouveau_super_tableau(1);
    place_dans_super_tableau(chaine, 0, '\0');
    affiche_chaine(chaine);
    printf("%d\n",chaine_est_valide(chaine));
    printf("%d\n",taille_de_la_chaine(chaine));
    ajoute_caractere(chaine,'o');
    ajoute_caractere(chaine,'o');
    ajoute_caractere(chaine,'o');
    ajoute_caractere(chaine,'o');
    ajoute_caractere(chaine,'o');
    ajoute_caractere(chaine,'o');
    ajoute_caractere(chaine,'o');
    affiche_chaine(chaine);
    printf("%d\n",taille_de_la_chaine(chaine));
    printf("%d\n", chaine->taille);
    return 0;
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

void place_dans_super_tableau (super_tableau_t* super_tab, int indice, char car)
{
    super_tab->tableau[indice] = car;
}

int taille_super_tableau(super_tableau_t* super_tab)
{
    int cpt = 0;
    while (super_tab->tableau[cpt] !='\0')
    {
        cpt = cpt +1;
    }
    return cpt;
}


/// EXO 3 

int chaine_est_valide (chaine_t* chaine)
{
    for (int cpt = 0; cpt<chaine->taille; cpt++) {
        if (chaine->tableau[cpt] == '\0'){
            return 1;
        }
    }
    return 0;
}

int taille_de_la_chaine (chaine_t* chaine)
{
    if (chaine_est_valide(chaine) == 0) {
        return -1;
    }
    int cpt = 0;
    while (chaine->tableau[cpt] != '\0')
    {
        cpt = cpt+1;
    }
    return cpt; 
}

void affiche_chaine (chaine_t* chaine)
{
    if (chaine_est_valide(chaine) == 1)
    {
        for (int cpt = 0; cpt<chaine->taille ; cpt ++)
        {
            printf("%c", chaine->tableau[cpt]);
        }
        printf("\n");
    }
}

void ajoute_caractere (chaine_t* chaine, char car)
{
    if (chaine_est_valide(chaine) == 1 && taille_de_la_chaine(chaine)<=chaine->taille)
    {
        allonge_tableau_de_la_chaine(chaine);
    }
    place_dans_super_tableau(chaine, taille_de_la_chaine(chaine), car);
}

void allonge_tableau_de_la_chaine (chaine_t* chaine)
{   
    chaine->taille = chaine->taille + 1;
    chaine->tableau = realloc(chaine->tableau, chaine->taille*sizeof(char));
    chaine->tableau[chaine->taille] = '\0';

}