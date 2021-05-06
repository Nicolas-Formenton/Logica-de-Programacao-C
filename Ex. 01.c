//1.Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
//meses e dias e mostre-a expressa apenas em dias.
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Digite sua idade em anos: ");
    scanf("%d", &a);
    printf("Em meses: ");
    scanf("%d", &b);
    printf("Em dias: ");
    scanf("%d", &c);
    
    int idade;
    idade = (a*365) + (b*30) + c;
    printf("Voce tem %d dias de vida.", idade);
}