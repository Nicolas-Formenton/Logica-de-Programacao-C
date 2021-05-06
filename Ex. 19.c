//19.Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.
#include <stdio.h>
#include <math.h>

int main(){

float p=0, m=0, mediap=0, media=0;
int num=1;

while(num>0){
    printf("Digite valores: ");
    scanf("%d", &num);
   
   media = media+num;

    if(fmod(num,2) == 0 && num!=0){
        p++;
        mediap = mediap + num; 
    }else if(fmod(num,2)!=0 && num!=0){
        m++;
    }
}

if(num==0){
    printf("Encerrado\n\n");
    printf("Valores lidos pares: %.2f\n", p);
    printf("Valores lidos impares: %.2f\n", m);
    
mediap = mediap/p;
    printf("Media Pares: %.2f\n", mediap);

media = media/(m+p);
    printf("Media Geral: %.2f\n", media);
}

return 0;
}