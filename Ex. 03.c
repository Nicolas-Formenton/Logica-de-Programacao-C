//3.Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.
#include <stdio.h>

int main(void){
float num1, num2, num3, media;

// Notas
printf("Digite a primeira nota:  ");
scanf("%f", &num1);

printf("Digite a segunda nota:  ");
scanf("%f", &num2);

printf("Digite a terceira nota: ");
scanf("%f", &num3);

// Calculo
media= (num1*2 + num2*3 + num3*5)/10;
printf("Media: ");
printf("%.2f", media);

    return 0;
}