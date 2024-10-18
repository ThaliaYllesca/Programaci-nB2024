#include <stdio.h>
#include <math.h> 

int main() {
    double lado, A, P, D; 
    lado = 6; 

    printf("Elija una opción a desarrollar:\n");
    printf("1. Área\n, 2. Perímetro\n, 3. Diagonal:\n");

    int option; 
    scanf("%d", &option); 

    switch (option) { 
        case 1:
            A = pow(lado, 2); 
            printf("El área del cuadrado es: %.2f\n", A);
            break;
        case 2:
            P = 4 * lado; 
            printf("El perímetro del cuadrado es: %.2f\n", P);
            break;
        case 3:
            D = lado * sqrt(2); 
            printf("La diagonal del cuadrado es: %.2f\n", D);
            break;
        default:
            printf("Opción no válida.\n"); 
            break;
    }

    return 0; 
}
