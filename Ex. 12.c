//12.Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo. Supor que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e escrever a área deste triângulo. Se não formam triângulo escrever os valores lidos. ( se a > b + c não formam triângulo algum, se a é o maior).
#include <stdio.h>

int main(){
    int a, b, c, area;
    printf("Digite o valor da hipotenusa em cm: ", a);
    scanf("%d", &a);
    
    printf("Digite o valor do cateto oposto em cm: ", b);
    scanf("%d", &b);
    
    printf("Digite o valor do cateto adjacente em cm:  ", c);
    scanf("%d", &c);

   if(a < (b+c) & b < (a+c) & c < (a+b)){
       printf("Formam um triangulo\n");
       area = (b*c)/2;
                    printf("Area do triangulo: %d cm^2", area);
   }else{
       printf("Nao formam um triangulo");
   }   
return 0;
}       