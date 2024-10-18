    #include<stdio.h>
    #include<math.h>
    using namespace std;

    int main(){
        double a,b,c,P,S;

        printf("digite el primer lado \n ");
        scanf("%lf", &a);
        printf("digite el segundo lado \n");
        scanf("%lf", &b);
        printf("digite el tercer lado \n");
        scanf("%lf", &c);
        P=(a+b+c)/2;
        S=sqrt(P*(P-a)*(P-b)*(P-c));

        printf("el semi perimetro es: %.2f\n",P);
        printf("el area es: %.2f\n",S);

        return 0;
    }