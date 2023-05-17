#include <stdio.h>

int main()
{
    int tableau[6] = {5,4,7,14,2,3};
    int tmp;
    for (int i = 0; i<6; i++)
    {
        printf("tableau[%d] contient %d\n", i, tableau[i]);
    }
    for (int i = 0; i<6; i++)
    {
        
        for (int j = i+1; j<6; j++)
        {
            if (tableau[i] > tableau[j])
            {
                tmp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = tmp;
            }
        }
    }
    for (int i = 0; i<6; i++)
    {
        printf("\ttableau[%d] contient %d\n", i, tableau[i]);
    }
    return 0;
}
