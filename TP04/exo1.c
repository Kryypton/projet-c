#include <stdio.h>
#include <stdlib.h>

typedef struct liste_t {
    char car;
    struct liste_t* queue;
} liste_t;

liste_t* ajoute_element_a_la_fin(liste_t* liste, char car);
void affiche_liste(liste_t* liste);
liste_t* ajoute_element(char car, liste_t* liste);
char tete_de_liste(liste_t* liste);
liste_t* queue_de_liste(liste_t* liste);
int est_vide(liste_t* liste);
int taille_de_liste(liste_t* liste);
liste_t* supprime_premier_element(liste_t* liste);
void libere_la_liste(liste_t* liste);
liste_t* insert_caractere(liste_t* liste, char car, int position);

int main()
{
    liste_t* liste = malloc(sizeof(liste_t));
    liste->car = 'a';
    liste->queue = NULL;
    affiche_liste(liste);
    liste = ajoute_element_a_la_fin(liste, 'b');
    affiche_liste(liste);
    liste = ajoute_element_a_la_fin(liste, 'c');
    liste = ajoute_element_a_la_fin(liste, 'c');
    liste = ajoute_element_a_la_fin(liste, 'c');
    affiche_liste(liste);
    printf("%d\n", est_vide(liste));
    printf("%d\n", taille_de_liste(liste));
    printf("%c\n", tete_de_liste(liste));
    affiche_liste(queue_de_liste(liste));
    liste = supprime_premier_element(liste);
    affiche_liste(liste);
    //libere_la_liste(liste);
    liste = insert_caractere(liste, 'F', 2);
    affiche_liste(liste);
    return 0;
}

liste_t* ajoute_element_a_la_fin(liste_t* liste, char car)
{
    if (liste == NULL)
    {
        return ajoute_element(car, liste);
    }
    liste->queue = ajoute_element_a_la_fin(liste->queue, car);
    return liste;
}

void affiche_liste(liste_t* liste)
{
    if (liste->queue != NULL)
    {
        printf("%c", liste->car);
        affiche_liste(liste->queue);
    }
    else
    {
        printf("%c\n", liste->car);
    }
}

liste_t* ajoute_element(char car, liste_t* liste)
{
    liste_t* nouveau = malloc(sizeof(liste_t));
    nouveau->car = car;
    nouveau->queue = liste;
    return nouveau;
}

char tete_de_liste(liste_t* liste)
{
    return liste->car;
}

liste_t* queue_de_liste(liste_t* liste)
{
    return liste->queue;
}

int est_vide(liste_t* liste)
{
    if (liste == NULL)
        return 1;
    return 0;
}

int taille_de_liste(liste_t* liste)
{
    if (liste == NULL)
        return 0;
    return 1 + taille_de_liste(liste->queue);
}

liste_t* supprime_premier_element(liste_t* liste)
{
    liste_t* liste2 = queue_de_liste(liste);
    free(liste);
    return liste2;
}

void libere_la_liste(liste_t* liste)
{
    if (liste == NULL)
        return;
    libere_la_liste(liste->queue);
    free(liste);
}

liste_t* insert_caractere(liste_t* liste, char car, int position)
{
    if (position == 0)
    {
        return ajoute_element(car, liste);
    }
    if (est_vide(liste))
    {
        printf("Error: Invalid position\n");
        return NULL;
    }
    liste->queue = insert_caractere(liste->queue, car, position - 1);
    return liste;
}
