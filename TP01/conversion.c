#include <stdio.h>

int main()
{
    float devise = 60;
    float taux_change = 1.1226;
    taux_change = 1.09;
    float total = devise * taux_change;
    float partage = total /2;
    // tout les chiffres après la virgule
    printf("Alice et Bob ont %.2f euros après conversion.\n", total);
    printf("Ils gardent donc %.2f euros chacun.\n", partage);
    return 0;
}
