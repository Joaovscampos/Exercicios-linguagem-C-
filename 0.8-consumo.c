#include <stdio.h>

int main(){

int distancia;
printf("Distancia percorrida: ");
scanf("%d",&distancia);

double combustivel;
printf("Combustivel gasto: ");
scanf("%lf",&combustivel);

double mediaC;
mediaC = distancia / combustivel;

printf("Consumo medio = %.3lf\n",mediaC);

return 0;
}
