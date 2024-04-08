#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    float w, z;
    scanf("%d %d", &x, &y);
    scanf("%f %f", &w, &z);
    printf("%d %d\n%.1f %.1f\n", (x + y), (x - y), (w + z), (w - z));
    return 0;
}
