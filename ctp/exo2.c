#include <stdio.h>
#include <stdlib.h> 

typedef struct {
    int tulipe;
    int rose;
    int pivoine;
} bouquet_t;

bouquet_t* nouveau_bouquet(void);
void initialise_bouquet(bouquet_t* bouquet, int nb_roses, int nb_tulipes, int nb_pivoines);
void affiche_bouquet(bouquet_t* bouquet);
void libere_bouquet(bouquet_t* bouquet);
bouquet_t* combine_bouquets(bouquet_t* bouquet_1, bouquet_t* bouquet_2);

int main()
{
    bouquet_t* bouquet = nouveau_bouquet();
    initialise_bouquet(bouquet, 10,1,0);
    affiche_bouquet(bouquet);
    bouquet_t* bouquet2 = nouveau_bouquet();
    initialise_bouquet(bouquet, 4,3,0);
    affiche_bouquet(bouquet);
    bouquet_t* bouquet_final = combine_bouquets(bouquet, bouquet2);
    affiche_bouquet(bouquet_final);
    affiche_bouquet(bouquet_final);
    affiche_bouquet(bouquet_final);
    return 0;
}

bouquet_t* nouveau_bouquet(void)
{
    bouquet_t* bouquet = malloc(sizeof(bouquet_t*));
    return bouquet;
}

void initialise_bouquet(bouquet_t* bouquet, int nb_roses, int nb_tulipes, int nb_pivoines)
{
    bouquet->rose = nb_roses;
    bouquet->tulipe = nb_tulipes;
    bouquet->pivoine = nb_pivoines;
}

void affiche_bouquet(bouquet_t* bouquet)
{
    if (bouquet->rose>1) {
        printf("%d  roses,", bouquet->rose);
    } else {
        printf("%d  rose,", bouquet->rose);
    }

    if (bouquet->tulipe>1) {
        printf(" %d  tulipes,", bouquet->tulipe);
    } else {
        printf(" %d  tulipe,", bouquet->tulipe);
    }

    if (bouquet->pivoine>1) {
        printf(" %d  pivoines\n", bouquet->pivoine);
    } else {
        printf(" %d  pivoine\n", bouquet->pivoine);
    }
}

void libere_bouquet(bouquet_t* bouquet)
{
    free(bouquet);
}

bouquet_t* combine_bouquets(bouquet_t* bouquet_1, bouquet_t* bouquet_2)
{
    bouquet_t* bouquet_x = nouveau_bouquet();
    int total_tulip = (bouquet_1->tulipe + bouquet_2->tulipe);
    int total_rose = (bouquet_1->rose + bouquet_2->rose);
    int total_pivoine = (bouquet_1->pivoine + bouquet_2->pivoine);
    bouquet_x->tulipe = total_tulip;
    bouquet_x->rose = total_rose;
    bouquet_x->pivoine = total_pivoine;
    libere_bouquet(bouquet_1);
    libere_bouquet(bouquet_2);
    return bouquet_x;
}