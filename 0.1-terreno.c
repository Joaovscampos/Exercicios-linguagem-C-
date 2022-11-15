#include <stdio.h>

int main (){

double l,c,preco,area,precoT;

printf("Digite a largura do terreno: ");
scanf("%lf",&l);

printf("Digite o comprimento do terreno: ");
scanf("%lf",&c);

printf("Digite o valor do metro quadradao: ");
scanf("%lf",&preco);

area = l * c;
precoT = preco * area;

printf("area do terreno = %.2lf\n",area);
printf("Preco do terreno = %.2lf\n",precoT);

return 0;
}
