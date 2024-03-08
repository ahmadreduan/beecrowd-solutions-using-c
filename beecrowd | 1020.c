#include <stdio.h>

int main(void)

{
    int n, a, b, c;

    scanf("%i", &n);

    a=n/365;
    n=n%365;
    b=n/30;
    n=n%30;
    c=n;

    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", a, b, c);

    return 0;
}
