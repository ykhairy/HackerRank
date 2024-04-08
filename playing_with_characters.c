#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    char str[100];
    scanf("%s", str);
    scanf("\n");
    printf("%s\n", str);
    char sen[100];
    scanf("%[^\n]s", sen);
    printf("%s", sen);

    return 0;
}
