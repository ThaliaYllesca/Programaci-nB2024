#include<stdio.h>
#include<math.h>
 using namespace std;

    int main(){
         double a,b,c,R,S;

         printf("digite el primer lado \n");
         scanf("%lf", &a);
         printf("digite el segundo lado \n");
         scanf("%lf", &b);
         printf("digite el tercer lado \n");
         scanf("%lf", &c);
        printf("digite el radio \n");
        scanf("%lf", &R);

            S=(a*b*c)/4*R;

        printf("el area del triangulo inscrito es: %.2f\n",S);
        return 0;

    }
