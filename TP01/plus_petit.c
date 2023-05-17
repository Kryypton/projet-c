#include <stdio.h>

int main()
{
    int a = 8;
    int b = 5;
    int c = 4;
    if (a < b && a < c)
    {
        printf("a est le plus petit [%d]\n", a);
    }
    else if (b < a && b < c)
    {
        printf("b est le plus petit [%d]\n", b);
    }
    else
    {
        printf("c est le plus petit [%d]\n", c);
    }
    return 0;
}