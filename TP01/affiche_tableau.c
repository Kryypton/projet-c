#include <stdio.h>

int main()
{
    int tableau[3] = {5,4,7};
    for (int i = 0; i<3; i++)
    {
        printf("tableau[%d] contient %d\n", i, tableau[i]);
    }

    int tableau2[100];
    for (int i = 0; i<100; i++)
    {
        printf("tableau[%d] contient %d\n", i, tableau2[i]);
    }
    return 0;
}