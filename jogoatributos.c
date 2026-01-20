#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int resultado1, resultado2;
char primeiroatributo, segundoatributo;
int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

//Gerar numeros aleatórios
srand (time(0));
ataque1 = 1;//rand() % 100 + 1; //numero entre 1 e 100
ataque2 = 0;//rand() % 100 + 1; //numero entre 1 e 100
defesa1 = 1;//rand() % 100 + 1; //numero entre 1 e 100
defesa2 = 0;//rand() % 100 + 1; //numero entre 1 e 100
recuo1 = 0; //rand() % 100 + 1; //numero entre 1 e 100
recuo2 = 1; //rand() % 100 + 1; //numero entre 1 e 100

//Inicio do jogo
printf("Bem vindo ao jogo!!!\n");
printf("Escolha o primeiro atributo:\n");
printf("Escolha o segundo atributo:\n");
printf("A. Ataque!\n");
printf("D. Defesa!\n");
printf("R. Recuo!\n");

printf("Escolha a comparação:\n");
scanf(" %c", &primeiroatributo);

switch (primeiroAtributo)
{
    case 'A':
    case "a":
    printf("voce escolheu a opção ataque!!\n");
        resultado1 = ataque1 > ataque2 ? 1 : 0;
        break;

        case 'D':
        case 'd':
        printf("Voce escolheu a opção defesa!\n");
        resultado1 = defesa1 > defesa2 ? 1 : 0;
        break;
        
        case 'R':
        case 'r':
        printf("voce escolheu a opção recuo!\n");
        resultado1 = recuo1 > recuo2 ? 1 : 0;
        break;

       default:
        printf("opção inválida!!!\n");
        break; 

    }

     printf("Escolha o segundo atributo:\n");
     printf("Atenção: voce deve escolher o segundo atributo diferente do primeiro!\n");
     printf("A. Ataque!\n");
     printf("D. Defesa!\n");
     printf("R. Recuo!\n");

     printf("Escolha a comparação:\n");
     scanf("%c", &segundoAtributo);

     if (primeiroAtributo == segundoAtributo)
     {
        printf("voce escolheu o mesmo atributo!");
     } else 


switch (segundo atributo)

    {

case 'A':
    case 'a':
    printf("voce escolheu a opção ataque!!\n";
        resultado2 = ataque1 > ataque2 ? 1 : 0;
        break;

        case 'D':
        case 'd':
        printf("Voce escolheu a opção defesa!\n");
        resultado2 = defesa1 > defesa2 ? 1 : 0;
        break;
        
        case 'R':
        case 'r':
        printf("voce escolheu a opção recuo!\n");
        resultado2 = recuo1 > recuo2 ? 1 : 0;
        break;

       default:
        printf("opção inválida!!!\n");
        break; 

    }

    if (resultado1 && resultado2)
    {
        printf("Parabéns, vove venceu!!\n");
    }
     else if (resultado1 != resultado2)
     {
    
    
        printf("Empatou!\n");
     }
      else {
    
     printf("Infelizmente voce perdeu!\n");
}
    
}








































































