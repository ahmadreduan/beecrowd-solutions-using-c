#include <stdio.h>

int main(void)

{
    int a, b, i;
    double c, d=0;

    for (i=1; i<=2; ++i)
    {
        scanf("%i %i %lf", &a, &b, &c);
        d+=b*c;
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", d);

    return 0;
}
