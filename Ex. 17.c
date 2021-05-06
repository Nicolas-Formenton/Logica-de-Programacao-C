//17.Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).
#include <stdio.h>

int main(){
    int media, x;
    int i=0, y;

    do{
        printf("Digite numeros para a media: ");
        scanf("%d", &y);
        
        if(y%2==0 && y!=0){   
        media = media + y;
        i++; 
        }
        
        else if(y%2!=0){
            printf("Invalido\n"); break;
        }
    }while(y!=0);
            
    if(media%2==0 && y==0){
        printf("Media: %d\n", media/i);
        }

return 0;
}
