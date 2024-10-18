        #include<stdio.h>
        #include<math.h>
        using namespace std;

            int main(){
                double a,b,c,r,P,S;

                printf("digite el primer lado \n");
                scanf("%lf", &a);
                printf("digite el segundo lado \n ");
                scanf("%lf", &b);
                printf("digite el tercer lado \n");
                scanf("%lf", &c);
                printf("digite el radio \n");
                scanf("%lf", &r);

                P=(a+b+c)/2;
                S=r*P;

                printf("el semi perimetro del triangulo circunscrito es: %.2f\n",P);
                printf("el area del triangulo circunscrito es: %.2f\n",S);

                return 0;

            }

