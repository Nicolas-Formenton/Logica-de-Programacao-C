//8.
Faça um algoritmo que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.
#include <stdio.h>
int main(){
    int num1;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    if(num1%2==0){
        printf("E par ");
        }else{
            printf("E impar ");
        }
        if(num1 > 0){
        printf("e positivo.");
        }else if(num1 < 0){
            printf("e negativo.");
        }
return 0;    
}