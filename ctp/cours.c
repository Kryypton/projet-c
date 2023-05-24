#include <stdio.h>


void exemple_pointeur (void); 
void exemple_tableau(char* tableau, int taille); 
void caractere_suivant (char* pt_car);
int taille_chaine_de_caracteres(char* chaine);
void affiche_tableau (int* tableau, int taille);

int main()
{
    /*exemple_pointeur();
    char tableau[4] = {'4','5','4','6'};
    char* pointeur_tab = &tableau[0];
    int taille = 4;
    exemple_tableau(pointeur_tab, taille); 
    char car = 'c';
    printf("%c\n", car);
    char* point_car = &car;
    caractere_suivant(point_car);
    printf("%c\n", car);*/
    /*char chaine[7] = {'1','o', 'n', 'j','o', 'u','r'};
    char* pt = &chaine[0];
    printf("%d\n",taille_chaine_de_caracteres(pt));*/
    int tableau[10] = {1,2,3,4,5,6,7,8,9,10};
    int* pt_tableau = &tableau[0];
    affiche_tableau(pt_tableau, 10);
    return 0;
}

void exemple_pointeur (void) 
{
    int ma_variable;
    ma_variable = 10;
    printf("%d\n", ma_variable);
    printf("%p\n", &ma_variable);
    int* mon_pointeur = &ma_variable;
    printf("%p\n", mon_pointeur);
    printf("%d\n", *mon_pointeur);
}

void exemple_tableau (char* tableau, int taille)
{
    for (int cpt = 0; cpt<taille; cpt++)
    {
        if (cpt==2)
        {
            printf("%p\n", &tableau[cpt]);
            printf("%c\n", tableau[cpt]);
        }
    }
}

void caractere_suivant (char* pt_car)
{
    *pt_car = *pt_car +1;
}

int taille_chaine_de_caracteres(char* chaine)
{
    int cpt = 0;
    while ((chaine[cpt] != '\0')) {
        cpt = cpt +1;
    }
    return cpt;
}

void affiche_tableau (int* tableau, int taille)
{
    for (int idx = 0; idx<taille; idx ++){
        printf("%d / ", tableau[idx]);
    }
}