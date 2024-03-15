#include <stdio.h>
int main(void){
    char str[81];
    double a, b, to;

    scanf("%s", str);
    scanf("%lf %lf", &a, &b);
    to=a+(b*0.15);
    printf("TOTAL = R$ %.2lf\n", to);

    return 0;
}
