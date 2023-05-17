#include <stdio.h>

int main()
{
    int tableau[6] = {5,4,7,14,2,3};
    int max;
    int pos;
    for (int i = 0; i<6; i++)
    {
        if (tableau[i] > max)
        {
            max = tableau[i];
            pos = i;
        }
    }
    printf("Le maximum est %d\nElle se trouve en position %d\n", max, pos);
    return 0;
}