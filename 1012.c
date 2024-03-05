#include <stdio.h>
#define pi 3.14159

int main(void)

{
    double a, b, c, tri, cir, tra, squ, rec;

    scanf("%lf %lf %lf", &a, &b, &c);

    tri=.5*a*c;
    cir=pi*c*c;
    tra=.5*(a+b)*c;
    squ=b*b;
    rec=a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, cir, tra, squ, rec);

    return 0;
}
