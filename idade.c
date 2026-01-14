#include <stdio.h>
int main(){
    int idade;

    printf("digite a sua idade: ");
    scanf("%d", &idade);

    //idade < 12
    //idade >= 12 && < 18
    //idade >=18 && < 60
    //idade > 60

    if (idade < 12){
        printf("você é criança!\n");
    } else if (idade >= 12 && idade < 18){
        printf("voçê é adolescente!\n");
    } else if (idade >= 18 && idade < 60){
        printf("você é adulto!\n");
    } else if (idade >= 60){
        printf("você é idoso!\n");

     }


} 