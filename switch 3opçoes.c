#include <stdio.h>

int main(){
   int opcao;
   float saldo = 1000.00;

   printf("escolha uma opção:\n");
   printf("1. verificar saldo:\n");
   printf("2. fazer depósito:\n");
   printf("3. fazer saque:\n");
   scanf("%d", &opcao);

   switch (opcao)
{
case 1:
printf("o seu saldo é : R$ %f\n", saldo);
break;
case 2:
printf("digite o banco de depósito:\n");
printf("digite a agencia:\n");
printf("digite a conta:\n");
break;
case 3:
printf("digite o valor que voce deseja sacar:\n");
break;
default:
printf("opção inválida\n");
}

}











