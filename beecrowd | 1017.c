#include <stdio.h>

int main(void)

{
    int x, y;
    double z;

    scanf("%i %i", &x, &y);

    z=(x*y)/12.0;

    printf("%.3lf\n", z);

    return 0;
}
