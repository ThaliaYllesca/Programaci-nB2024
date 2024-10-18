#include<stdio.h>
#include<math.h>
 using namespace std;

    int main(){

    double lado,A,P,D;
        
    printf(" digite el valor del lado del cuadrado \n");
    scanf("%lf",&lado);
      A=pow(lado,2);
      P=4*lado;
      D=lado*sqrt(2);
      printf("el area del cuadrado es %.2f\n",A);
      printf("el perimetro del cuadrado es %.2f\n",P);
      printf("el diametro del cuadrado es %.2f\n",D);
    return 0;
    }


      