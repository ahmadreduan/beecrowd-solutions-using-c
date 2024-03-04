#include <stdio.h>
#define pi 3.14159

int main(void)

{
    double r, ans;

    scanf("%lf", &r);

    ans=(4/3.0)*pi*r*r*r;

    printf("VOLUME = %.3lf\n", ans);

    return 0;
}
