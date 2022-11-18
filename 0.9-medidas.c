#include<stdio.h>

int main(){

double a,b,c;

printf("Digite a medida A: ");
scanf("%lf",&a);
printf("Digite a medida B: ");
scanf("%lf",&b);
printf("Digite a medida C: ");
scanf("%lf",&c);

double areaQ = pow(a,2);
double areaTri = (a * b) / 2;
double areaTra = ((a + b) * c) / 2;

printf("AREA DO QUADRADO = %.4lf\n",areaQ);
printf("AREA DO TRIANGULO = %.4lf\n",areaTri);
printf("AREA DO TRAPEZIO = %.4lf\n",areaTra);

return 0;
}
