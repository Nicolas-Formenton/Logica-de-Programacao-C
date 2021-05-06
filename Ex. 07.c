//7.Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    printf("Digite mais um numero: ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("%d e o maior numero.", a);
            }if(b>a && b>c){
            printf("%d e o maior numero.", b);
                }else if(c>a && c>b){
                    printf("%d e o maior numero.", c);
                    }else if(a==b && a==c && c==b){
            printf("Nao tem maior.");
                }
return 0;
}