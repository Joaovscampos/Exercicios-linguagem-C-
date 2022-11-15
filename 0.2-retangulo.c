#include <stdio.h>
#include <math.h>

int main(){

double base,altura,area,perimetro,diagonal;

printf("Digite o valor da base: ");
scanf("%lf",&base);

printf("Digite o valor da altura: ");
scanf("%lf",&altura);

area = base * altura;
diagonal = sqrt(pow(base,2.0)+ pow(altura,2.0));
perimetro = base * 2 + altura * 2;

printf("Area = %.4lf\n",area);
printf("Perimetro = %.4lf\n",perimetro);
printf("Diagonal = %.4lf\n",diagonal);

return 0;
}
