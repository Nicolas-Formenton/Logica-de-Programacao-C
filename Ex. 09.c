//9.Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino e ?F? feminino), construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//a.	- para homens: (72.7*h)-58
//b.	- para mulheres: (62.1*h)-44.7

#include <stdio.h>

int main(void){
    char sexo;
    float M;

    printf("Informe o seu sexo, M ou F: ");
    scanf("%c", &sexo);
   
   
    if(sexo == 'M'){
        printf("Informe a sua altura: ");
        scanf("%f", &M);
        printf("Peso ideal: %f", (72.7*M)-58);

    }
    else if(sexo == 'F'){
        printf("Informe a sua altura: ");
        scanf("%f", &M);
        printf("Peso ideal: %f", (62.1*M)-44.7);
         }
    else{
        printf("Sexo nao existente");
    }
    

return(0);
}