#include <stdio.h>

int main()
{
    int n = 36;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d est un diviseur de %d\n", i, n);
        }
    }
}