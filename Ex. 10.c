//10.Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito. (use o comando switch case e não faça repetições) 

#include <stdio.h>
#include <math.h>

int main(void){
    int saldo, vcred;

    printf("Valor do saldo: ");
    scanf("%d", &saldo);
    
    switch(saldo){
        case 0 ... 200: printf("Nenhum Credito."); break; 
            
        case 201 ... 400: printf("20 porcento do valor do saldo medio."); 
            vcred=saldo*0.2;
            printf("Valor Crédito: %d", vcred);
            break;
        case 401 ... 600: printf("30 porcento do valor do saldo medio."); 
            vcred=saldo*0.3;
            printf("Valor Crédito: %d", vcred);
            break;
        case 601 ... __LONG_MAX__: printf("40 porcento do valor do saldo medio.");
            vcred=saldo*0.4;
            printf("\nValor Credito: %d", vcred);
            break;
    }
    

return(0);
}