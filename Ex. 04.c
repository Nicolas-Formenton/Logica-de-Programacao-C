//4.Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário.
#include <stdio.h>

int main(void){
    float media, x, y, z;
    
    printf("Informe sua primeira nota: ");
    scanf("%f", &x);

    printf("Informe sua segunda nota: ");
    scanf("%f", &y);

    printf("Informe sua terceira nota: ");
    scanf("%f", &z);

//Calculo
media = (x + y + z) / 3; 
    printf("Media: %.2f", media);
    
    if(media >= 6.0){
    printf("\nAprovado.");
}
    else if(media < 6.0){
        printf("\nReprovado ");    
    }
return(0);
}