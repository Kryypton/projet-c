#include <stdio.h>

int main() {
    char tableau[10] = {'r', 't', 'd', 'a', 'p', 'b', 'd', 'p', 'b', 'p'};
    int taille = sizeof(tableau) / sizeof(char);

    // Affichage initial du tableau
    for (int i = 0; i < taille; i++) {
        printf("tableau[%d] contient %c\n", i, tableau[i]);
    }

    printf("\n");

    // Tri du tableau
    int frequences[256] = {0}; // Tableau pour stocker les fréquences des caractères
    int maxFrequence = 0;

    // Calcul des fréquences des caractères
    for (int i = 0; i < taille; i++) {
        int index = (int)tableau[i];
        frequences[index]++;
        if (frequences[index] > maxFrequence) {
            maxFrequence = frequences[index];
        }
    }

    // Affichage trié selon la fréquence décroissante et l'ordre alphabétique croissant
    for (int freq = maxFrequence; freq > 0; freq--) {
        for (int c = 'a'; c <= 'z'; c++) {
            for (int i = 0; i < taille; i++) {
                if (tableau[i] == (char)c && frequences[c] == freq) {
                    printf("tableau[%d] contient %c\n", i, tableau[i]);
                }
            }
        }
    }

    return 0;
}
