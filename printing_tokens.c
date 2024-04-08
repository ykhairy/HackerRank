#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = 0; i < 1024; i++)
    {
        if (s[i] == ' ')
            printf("\n");
        else if (s[i] == '\0')
        {
            break;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}
