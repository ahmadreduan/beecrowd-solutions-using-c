#include <stdio.h>

int main(void)

{
    int n, a, b, c, d, e, f, g, t;

    scanf("%i", &n);
    t=n;

    a=n/100;
    n=n%100;
    b=n/50;
    n=n%50;
    c=n/20;
    n=n%20;
    d=n/10;
    n=n%10;
    e=n/5;
    n=n%5;
    f=n/2;
    n=n%2;
    g=n/1;

    printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", t, a, b, c, d, e, f, g);

    return 0;
}
