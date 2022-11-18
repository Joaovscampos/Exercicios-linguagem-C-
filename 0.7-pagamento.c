#include <stdio.h>

int main(){

char nome[50];
double valorHora;
int horaTrabalhada;

printf("Nome: ");
gets(nome);

printf("Valor por hora: ");
scanf("%lf",&valorHora);

printf("Horas trabalhadas: ");
scanf("%d",&horaTrabalhada);

double salario = valorHora * horaTrabalhada;

printf("O pagamento para %s deve ser %.2lf\n",nome,salario);

return 0;
}
