#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int min_val = i < j ? i : j;
            min_val = min_val < 2 * n - i ? min_val : 2 * n - i;
            min_val = min_val < 2 * n - j ? min_val : 2 * n - j;
            printf("%d ", n - min_val + 1);
        }
        printf("\n");
    }

    return 0;
}
