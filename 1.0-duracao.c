#include <stdio.h>

int main(){

int segundos,minutos,hora;

printf("Digite a duracao em segundos: ");
scanf("%d",&segundos);

minutos = 0;

if (segundos >= 60){
    minutos = segundos / 60;
    segundos = segundos % 60;
    }

hora = 0;

if (minutos > 60){
    hora = minutos / 60;
    minutos = minutos % 60;
}

printf("%d:%d:%d\n",hora,minutos,segundos);


return 0;
}
