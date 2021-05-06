//16.Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor negativo.
#include <stdio.h>

int main(){
    int i;
    float soma, x;
    
    do{
        printf("Digite numeros para a media: ");
        scanf("%f", &x);
        soma = soma + x;
        i++;
        }
    
    while(x >= 0);
        

if(i == 1){
    printf("Invalido\n");
    }
    else{
         i--;
         soma = soma - x;
         printf("Foram lidas %d entradas \n", i);
         printf("Sua media = %.2f", soma/i);
        }
return 0;
}