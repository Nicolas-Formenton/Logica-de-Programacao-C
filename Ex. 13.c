//13.Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir: 
//a)	Se i=1 escrever os três valores a, b, c em ordem crescente.
//b) Se i=2 escrever os três valores a, b, c em ordem decrescente.
//c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.

#include <stdio.h>

int main(){
    int i;
    unsigned int a, b, c;

    printf("Digite entre 1, 2 ou 3: ");
    scanf("%d", &i);

    //Crescente
    if(i==1){
        printf("Digite qualquer numero: ");
        scanf("%d %d %d", &a, &b, &c);

        if(a>b && b>c){
            printf("\n%d, %d, %d\n",c,b,a);
        }
        else if(c>b && b>a){
            printf("\n%d, %d, %d\n",a,b,c);
        }
        else if(b>c && c>a){
            printf("\n%d, %d, %d\n",a,c,b);
        }
        else if(a>c && c>b){
            printf("\n%d, %d, %d\n",b,c,a);
        }
        else if(c>a && a>b){
            printf("\n%d, %d, %d\n",b,a,c);
        }
        else if(b>a && a>c){
            printf("\n%d, %d, %d\n",c,a,b);
        }
    }

    //Decrescente
    else if(i==2){
        printf("Digite qualquer numero: ");
        scanf("%d %d %d", &a, &b, &c);
        
        if(a>b && b>c){
            printf("\n%d, %d, %d\n",a,b,c);
        }
        else if(c>b && b>a){
            printf("\n%d, %d, %d\n",c,b,a);
        }
        else if(b>c && c>a){
            printf("\n%d, %d, %d\n",b,c,a);
        }
        else if(a>c && c>b){
            printf("\n%d, %d, %d\n",a,c,b);
        }
        else if(c>a && a>b){
            printf("\n%d, %d, %d\n",c,a,b);
        }
        else if(b>a && a>c){
            printf("\n%d, %d, %d\n",b,a,c);
        }
    }

    //Maior no MEIO
    else if(i==3){
        printf("Digite qualquer numero: ");
        scanf("%d %d %d", &a, &b, &c);
        
        
        if(a>b && b>c){
            printf("\n%d, %d, %d\n",b,a,c);
        }
        else if(c>b && b>a){
            printf("\n%d, %d, %d\n",b,c,a);
        }
        else if(b>c && c>a){
            printf("\n%d, %d, %d\n",c,b,a);
        }
        else if(a>c && c>b){
            printf("\n%d, %d, %d\n",c,a,b);
        }
        else if(c>a && a>b){
            printf("\n%d, %d, %d\n",a,c,b);
        }
        else if(b>a && a>c){
            printf("\n%d, %d, %d\n",a,b,c);
        }
    }
    else{
        printf("ERRO");
    }
}