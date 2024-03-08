#include <stdio.h>

int main(void)

{
    int n, a, b, c;

    scanf("%i", &n);

    a=n/3600;
    n=n%3600;
    b=n/60;
    n=n%60;
    c=n;

    printf("%i:%i:%i\n", a, b, c);

    return 0;
}
