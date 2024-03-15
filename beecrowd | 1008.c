#include <stdio.h>

int main(void)

{
    int c, d;
    double a, b;

    scanf("%i %i %lf", &c, &d, &a);

    b=d*a;

    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", c, b);

    return 0;
}
