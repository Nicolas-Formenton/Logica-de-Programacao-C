//15.	Escrever um algoritmo que calcule os sucessivos valores de E usando a série abaixo e considerando primeiro 3 termos, depois 4 termos e, por fim, 5 termos:  
//a.	E = 1 + 1 || 2! + 1! + 1 || 1 || 3! + 1 || 4!

#include <stdio.h>

int main(){
    int e, e2, e3, e4, e5;

    e = 1+1;
    e2 = e + ((2*1) + (1*1) + 1);
    e3 = e2 + 1;
    e4 = e3 + ((3*2*1) + 1);
    e5 = e4 + (4*3*2*1);
    printf("3 primeiros termos: %d\n", e3);
    printf("4 primeiros termos: %d\n", e4);
    printf("Todos os termos: %d\n", e5);
}
