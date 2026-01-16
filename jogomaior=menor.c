#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int numeroJogador, numeroComputador, resultado;
char tipoComparação;

// Gerar numeros aleatórios usar srand
srand(time(0));
numeroComputador = rand() % 100 + 1;
//função rand %100 escolhe num de 1 a 99, + 1 para escolher até 100

// Inicio do jogo
printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
printf("Voce deve escolher um numero e o tipo de comparação:\n");
printf("M. Maior!\n");
printf("N. Menor!\n");
printf("I. Igual!\n");

printf("Escolha a comparação:\n");
scanf("%c", &tipoComparação);

printf("Escolha o numero: (entre 1 e 100):\n");
scanf("%d", &numeroJogador);

//Exibir numero numero do computador
//printf("O numero do computador é: %d"\n", numeroComputador);

switch (tipoComparação)
{

case 'M' :
case 'm' :
printf("voce escolheu a opção maior!!\n");
resultado = numeroJogador > numeroComputador ? 1 : 0;
break;

case 'N' :
case 'n' :
printf("voce escolheu a opção menor!!\n");
resultado = numeroJogador < numeroComputador ? 1 : 0;
break;

case 'I' :
case 'i' :
printf("voces escolheram a mesma opção!!\n");
resultado = numeroJogador == numeroComputador ? 1 : 0;
break;

default:
printf("opção inválida!!!\n");
break;
}
printf("O numeroComputador é: %d e do jogador é: %d\n", numeroComputador, numeroJogador);
if (resultado == 1)
{
    printf("###voce venceu!!!\n");

} else  {
  printf("###voce perdeu!!!\n");


  }

}

