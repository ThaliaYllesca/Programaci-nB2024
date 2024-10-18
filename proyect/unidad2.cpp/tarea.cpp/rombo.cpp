    #include<stdio.h>
    #include<math.h>
    using namespace std;

        int main(){
            double D,d,A,L,P;
            printf("digite el valor de la digonal mayor\n ");
            scanf("%lf", &D);
            printf("digite la digonal menor \n");
            scanf("%lf", &d);

            A=(D*d)/2;
            L=sqrt(pow ((D/2),2)+pow((d/2),2));
            P=4*L;
            printf("la area del rombo es: %.2f\n",A);
            printf("el lado del rombo es: %.2f\n",L);
            printf("el perimetro del rombo es: %.2f\n",P);

            return 0;

        }