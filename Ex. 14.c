//14.Escrever um algoritmo que lê um valor em reais e calcula qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias
#include <stdio.h>
 
int main () {
 
    int troco;
    int cem, cinq, dez, cinco, um;
    float entrada;
    
    printf("Digite um valor: ");
    scanf("%f", &entrada);
 
    troco = (int) entrada;
    
    cem = troco / 100;
    troco = troco - (cem * 100 );
 
    cinq = troco / 50;
    troco = troco - (cinq * 50);
 
    dez = troco / 10;
    troco = troco - (dez * 10);
 
    cinco = troco / 5;
    troco = troco - (cinco * 5);
 
    um = troco / 1;
    troco = troco - (um * 1 );
 
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00.\n", cem);
    printf("%d nota(s) de R$ 50,00.\n", cinq);
    printf("%d nota(s) de R$ 10,00.\n", dez);
    printf("%d nota(s) de R$ 5,00.\n", cinco);
    printf("%d nota(s) de R$ 1,00.\n", um);

return 0;
}
