#include <stdio.h>
#define pi 3.14159

int main(void)

{
    double r, a;

    scanf("%lf", &r);

    a=pi*r*r;

    printf("A=%.4lf\n", a);

    return 0;
}
