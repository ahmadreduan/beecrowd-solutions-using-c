#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int a, b, c, d, e;

    scanf("%i %i %i", &a, &b, &c);

    d=(a+b+abs(a-b))/2;
    e=(d+c+abs(d-c))/2;

    printf("%i eh o maior\n", e);

    return 0;
}
