//20.Escreva um algoritmo que gere os números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.
#include <stdio.h>

int main(){
int a=1000;

while(a<2000){
    a++;
    if(a%11==5){
        printf("%d e um dos numeros que divididos por 11 tem como resto 5.\n", a);
    }
}

return 0;
}