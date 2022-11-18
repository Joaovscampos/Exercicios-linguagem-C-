#include <stdio.h>

int main(){

double preco,pagamento,troco,total;
int qtd;

printf("Preco unitario do produto: ");
scanf("%lf",&preco);
printf("Quantidade comprada: ");
scanf("%d",&qtd);
printf("Dinheiro recebido: ");
scanf("%lf",&pagamento);

total = preco * qtd;
troco = pagamento - total;

printf("TROCO = %.2lf\n",troco);

return 0;
}
