//18.Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.
#include <stdio.h>
int main(){
int num, v1=0, v2=0, v3=0, v4=0;
int i=0;
    

while(num>=0){
    printf("Digite um numero: ");
    scanf("%d", &num);
    i++;

    if(num>=0 && num<=25){
        v1++;
    }else if(num>=26 && num<=50){
        v2++;
    }else if(num>=51 && num<=75){
        v3++;
    }else if(num>=76 && num<=100){
        v4++;
    }
}
    if(num<0){
    printf("\nEncerrado\n");
    printf("%d numeros estao entre [0...25]\n", v1);
    printf("%d numeros estao entre [26...50]\n", v2);
    printf("%d numeros estao entre [51...75]\n", v3);
    printf("%d numeros estao entre [76...100]\n", v4);
}

return 0;
}


