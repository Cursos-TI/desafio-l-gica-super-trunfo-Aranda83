#include <stdio.h>

int main(){
    int idade;
    float renda;

    // if (condicao1)  {
    // if (condicao2) {
    // Código a ser executa se condicao1 e condicao2 forem verdadeiras
    //   } else {
    //}

    printf("digite sua idade:");
    scanf("%d", &idade);
    printf("digite sua renda:");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)

    if (renda <= 2000)

    printf("voce tem direito ao desconto!\n");
    else
    printf("voce não tem direito devido a renda\n");
    else
    printf("voce não tem direito devido a idade!\n");
        
}