#include <stdio.h>

int main()
{
    int n = 5, i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (k = i; k <= 2 * i - 1; k++)
        {
            printf("%d ", k);
        }
        for (k = 2 * i - 2; k >= i; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}