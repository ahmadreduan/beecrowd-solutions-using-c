#include <stdio.h>

int main(void)

{
    int no, wh;
    double am, sa;

    scanf("%i %i %lf", &no, &wh, &am);

    sa=wh*am;

    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", no, sa);

    return 0;
}
