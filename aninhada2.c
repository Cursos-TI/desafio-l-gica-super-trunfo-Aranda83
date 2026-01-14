#include <stdio.h>
int main (){

    int idade;
    float renda;
    int dependentes;

    //idade esteja entre 18 e 65
    //renda seja menor que 3000
    //número de dependentes é maior que 2

    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("digite sua renda: ");
    scanf("%f", &renda);
    printf("digite número de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65)
    if ( renda < 3000)
    if ( dependentes > 2)

    printf("voce tem direito ao auxilio!\n");
    else
    printf("voce não tem direito devido ao número de dependentes !\n");
    else
    printf("voce não tem direito devido a renda!\n ");
    else
    printf("voce nao tem direito devido a idade!\n");







}


