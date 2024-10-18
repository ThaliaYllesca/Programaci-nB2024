#include <stdio.h>
#include <math.h>
int main() {
    double B, b, h, A;

    printf("Digite la base mayor\n ");
    scanf("%lf", &B);
    printf("Digite la base menor\n ");
    scanf("%lf", &b);
    printf("Digite la altura\n");
    scanf("%lf", &h);

    A = ((B + b) * h) / 2;

    printf("El area del trapecio es: %.2f\n", A);

    return 0;
}
