#include<stdio.h>
#include<math.h>
using namespace std;

    int main(){
        double b,h,A,P,D;

        printf(" digite la base del rectangulo \n");
        scanf("%lf", &b);
        printf("digite la altura del rectancgulo\n");
        scanf("%lf", &h);

        
        A=b*h;
        P=2*(b+h);
        D=sqrt(pow(b,2)+pow(h,2));

            printf("la area del rectangulo es %.2f\n",A);
            printf("el perimetro del rectangulo es %.2f\n",P);
            printf("la diagonal del rectangulo es %.2f\n",D);

            return 0;

    }