#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tulipe;
    int rose;
    int pivoine;
} bouquet_t;

typedef struct {
    int nb_bouquets;
    bouquet_t** tableau;
} commande_t;

commande_t* nouvelle_commande(int nb_bouquets);
void remplir_commande(commande_t* commande); 
void affiche_commande(commande_t* commande);
void libere_commande(commande_t* commande);
int main() 
{
    commande_t* com = nouvelle_commande(3);
    remplir_commande(com);
    affiche_commande(com);
    libere_commande(com);
    affiche_commande(com);
    return 0;
}

commande_t* nouvelle_commande(int nb_bouquets)
{
    commande_t* commande = malloc(sizeof(commande_t));
    commande->nb_bouquets = nb_bouquets;
    commande->tableau = malloc(sizeof(bouquet_t*) * nb_bouquets);
    for (int cpt = 0; cpt<nb_bouquets; cpt++) {
        commande->tableau[cpt] = malloc(sizeof(bouquet_t*));
    }
    return commande;
}

void remplir_commande(commande_t* commande) 
{
    for (int cpt = 0 ; cpt<(commande->nb_bouquets) ; cpt++)
    {
        commande->tableau[cpt]->pivoine = cpt;
        commande->tableau[cpt]->tulipe = cpt;
        commande->tableau[cpt]->rose = cpt;
    }
}

void affiche_commande(commande_t* commande)
{
    printf("La commande contient %d bouquets.\n", commande->nb_bouquets);
    for (int cpt = 0 ; cpt<(commande->nb_bouquets) ; cpt++)
    {
        printf("Bouquet %d : %d rose, %d tulipe et %d pivoine\n",cpt, commande->tableau[cpt]->rose, commande->tableau[cpt]->tulipe, commande->tableau[cpt]->pivoine);
    }
}

void libere_commande(commande_t* commande)
{
    for (int cpt = 0 ; cpt<(commande->nb_bouquets) ; cpt++)
    {
        free(commande->tableau[cpt]);
    }
    free(commande->tableau);
    free(commande);
}

