//11.Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a partir de 3 notas. Faça um algoritmo que leia as notas, a opção escolhida pelo usuário e calcule a média.
//1 -aritmética
//2 -ponderada (3,3,4)
//3 -harmônica

#include <stdio.h>

int main (void){
    float media, x, y, z;
    char operador;
    printf("Digite um operador entre [A, P, H]: ");
    scanf("%c", &operador); 
   
   switch (operador){
    case 'A':
        printf("Informe sua primeira nota: ");
        scanf("%f", &x);

        printf("Informe sua segunda nota: ");
        scanf("%f", &y);

        printf("Informe sua terceira nota: ");
        scanf("%f", &z);

    media = (x + y + z) / 3; 
        printf("Media: %.2f", media);
        break;
        
    case 'P': 
    	printf("Digite a primeira nota:  ");
        scanf("%f", &x);

        printf("Digite a segunda nota:  ");
        scanf("%f", &y);

        printf("Digite a terceira nota: ");
        scanf("%f", &z);

        media= (x*3 + y*3 + z*4)/10;
        printf("Media: ");
        printf("%.2f", media);
        break;
    
    case 'H':
        printf("Digite a primeira nota:  ");
        scanf("%f", &x);

        printf("Digite a segunda nota:  ");
        scanf("%f", &y);

        printf("Digite a terceira nota: ");
        scanf("%f", &z);

    media = 3/((1/x)+(1/y)+(1/z));
        printf("Media: %.2f", media);
        break;
    
    default: printf("\nNao existe um operador deste tipo"); 
    break;
    }
   
return(0);
}