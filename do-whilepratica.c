#include <stdio.h>

int main(){
    int numero;

    do                                                             // estrutura
    {                                                              // abre chaves p o código
        
        printf("Digite um número par para sair do programa:\n ");  // executar
        scanf("%d", &numero);                                      // ler número
     if (numero % 2 == 0)                                          // checar se é par
     {                                                             // abre chaves p começar o bloco
        printf("%d é par!\n");                                     // executar
    }                                                              // fecha bloco
     else 
     {                                                             // abre chaves p começar o bloco
        printf("%d ímpar digitado. Tente novamente.\n");           // executar
     }
    }                                                              // fecha chaves do código
    while (numero % 2 != 0);                                       // condição
    
    printf("Número par %d digitado. Programa encerrado.\n", numero);

            
        return 0;   

}

