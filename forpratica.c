#include <stdio.h>

int main(){

    int numero, i;                                  // Variável

    printf("Digite um número para calcularmos a tabuada:");
    scanf("%d", &numero);   

    for (i = 0; i <= 10; i++)                       // Variável; condição; incremento
{                                                   // chaves p começar o bloco

printf("%d x %d = %d\n", i, numero, i * numero);   // executar

}                                                  // chaves p fechar o bloco

    return 0;

}