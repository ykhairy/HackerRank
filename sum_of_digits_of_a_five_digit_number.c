#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n)
    {
        int temp = n % 10;
        n /= 10;
        sum += temp;
    }
    printf("%d\n", sum);
    return 0;
}
