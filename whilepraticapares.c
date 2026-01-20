#include <stdio.h>
int main(){

    int i = 0;

    while (i <= 10)                               // Estrutura while
    {                                             // abre chaves p o if

        if (i % 2 == 0)                           // checar se é par (condição impar é i % 2 != 0)
       
        {                                         // abre chaves p começar o bloco          
            printf("O número %d é par!\n", i);    // executar            
        }                                         // fecha bloco          
        
        i++;                                      // incremento                         

    }                                             // fecha chaves p o if depois do incremento
    return 0;

    }