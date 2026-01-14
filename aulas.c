#include <stdio.h>

int main(){
    int nota;
   
    printf("digite a sua nota: ");
    scanf("%d", &nota);


    if (nota >= 90){
        printf("o conceito é A!\n");
       }   else if (nota >= 80){
        printf("o conceito é B!\n"); 
       }   else if (nota >= 70){
        printf("o conceito é C!\n");
       }    else if (nota >= 60){
        printf("o conceito é D!\n");
       }   else if (nota >= 50){
        printf("o conceito é E!\n");
       }  else {
        printf("o conceito é F!\n");
       }


return 0;
}








