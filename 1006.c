//Reduan Ahmad
#include <stdio.h>

int main(void)

{
    double a, b, c, x;

    scanf("%lf %lf %lf", &a, &b, &c);

    a=a*2;
    b=b*3;
    c=c*5;
    x=a+b+c;
    x=x/10;

    printf("MEDIA = %.1lf\n", x);

    return 0;
}
