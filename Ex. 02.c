//2.Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
#include <stdio.h>

int main(){
    int days;
    printf("Digite sua idade em dias: ");
    scanf("%d", &days);

int anos, meses, dias;
    anos = (days/365);
    printf("Voce tem %d anos", anos);
    meses = ((days%365)/30);
    printf(", %d meses e ", meses);  
    dias = (days%30);
    printf("%d dias de vida.\n", dias);

return 0;
}