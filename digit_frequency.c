#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int freq[10] = {0};
    for (int i = 0; i < 1001; i++)
    {
        if (s[i] == '\0')
            break;
        if (s[i] >= '0' && s[i] <= '9')
        {
            freq[s[i] - '0']++;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", freq[i]);
    }
    return 0;
}
