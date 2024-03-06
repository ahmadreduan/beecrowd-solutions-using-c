#include <stdio.h>
//Reduan Ahmad
int main(void)

{
    char str[81];
    double a, b, x;

    scanf("%s", str);
    scanf("%lf %lf", &a, &b);

    x=a+(b*0.15);

    printf("TOTAL = R$ %.2lf\n", x);

    return 0;
}
