   #include<stdio.h>
   #include<math.h>

    using namespace std;

        int main(){

            double a,c,b,h,A,P;

            printf("digite el primer lado \n");
            scanf("%lf", &a);
            printf("digite el segundo lado \n");
            scanf("%lf", &c);
            printf("digite la base \n");
            scanf("%lf", &b);
            printf("digite la altura \n");
            scanf("%lf", &h);

            A=(b*h)/2;
            P=a+b+c;
            printf("la area del triangulo es: %.2f\n",A);
            printf("el perimetro del triangulo es: %.2f\n",P);
            return 0;
        }
