//6.Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
//i.	infantil A = 5 - 7 anos
//ii.	infantil B = 8-10 anos
//iii.	juvenil A = 11-13 anos
//iv.	juvenil B = 14-17 anos
//v.	adulto = maiores de 18 anos

#include <stdio.h>

int main(void){
    int x;
    printf("Informe sua idade: ");
    scanf("%d", &x);

//A
if(x>=5 && x<=7){
    printf("Infantil A", x);    
}
//B
if(x>=8 && x<=10){
    printf("Infantil B", x);    
}
//C
if(x>=11 && x<=13){
    printf("Juvenil A", x);   
}
//D
if(x>=14 && x<=17){
    printf("Juvenil B", x);    
}
//E
if(x>=18){
    printf("Adulto", x);    
}
return(0);
}