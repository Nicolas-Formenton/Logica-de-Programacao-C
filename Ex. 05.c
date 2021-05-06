//5.Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São múltiplos" ou "Não são múltiplos".
#include <stdio.h>
int main(){
    int a, b;
    printf("Digite um numero qualquer: ");
    scanf("%d", &a);
    printf("Digite outro numero qualquer: ");
    scanf("%d", &b);

    if(a>=b){
        for(int i=0; i<a; i++){
            if(b*i==a){
                printf("Sao Multiplos");
            }else{
            printf("Nao sao multiplos");
            break;    
                }
            } 
    }      
        if(b>=a){
        for(int i=0; i<b; i++){
            if(a*i==b){
                printf("Sao Multiplos");
            }else{
            printf("Nao sao multiplos");
            break;
                }
            }
        }
return 0;
    }